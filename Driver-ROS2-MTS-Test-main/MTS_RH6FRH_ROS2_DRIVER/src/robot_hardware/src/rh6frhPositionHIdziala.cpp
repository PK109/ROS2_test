// Copyright © Mitsubishi Electric Europe B.V.
// Description: This file is a hardware interface definition of RH-6FRH5520 robot arm.
// WARNING!!!! Do not use the driver with any other robot arm.
// Mitsubishi Electric assume any liability if the driver is used with a different robot
#include "robot_hardware/rh6frh_HW.hpp"
#include <sstream> 

std::string toString(const MXTCMD &cmd) 
{
    std::ostringstream oss;
    oss << "MXTCMD {"
        << " Command: " << cmd.Command
        << ", SendType: " << cmd.SendType
        << ", RecvType: " << cmd.RecvType
        //<< ", reserve: " << cmd.reserve
        // Add any other fields you need here
        << ", SendIOType: " << cmd.SendIOType
        << ", RecvIOType: " << cmd.RecvIOType
        << ", BitTop: " << cmd.BitTop
        << ", BitMask: " << cmd.BitMask
        << ", IoData: " << cmd.IoData
        << ", TCount: " << cmd.TCount
        << ", CCount: " << cmd.CCount
        << ", dupa: " << cmd.dat.j1
        << ", CCount: " << cmd.dat.j2
        << ", CCount: " << cmd.dat.j3
        << ", CCount: " << cmd.dat.j4
        << " }";
    return oss.str();
}
namespace rh6frh_hardware

{
  // ------------------------------------------------------------------------------------------
CallbackReturn Rh6frhHardwareInterface::on_init(
  const hardware_interface::HardwareInfo & info)
{
  if (hardware_interface::SystemInterface::on_init(info) != CallbackReturn::SUCCESS)
  {
    return CallbackReturn::ERROR;
  }

  std::string p_ip  = info_.hardware_parameters["robot_ip"];
  int p_port = stoi(info_.hardware_parameters["robot_port"]);

  memset(&destSockAddr_, 0, sizeof(destSockAddr_));
  in_addr_t destAddr=inet_addr(p_ip.c_str());
  memcpy(&destSockAddr_.sin_addr, &destAddr, sizeof(destAddr));
  unsigned short port=p_port;
  destSockAddr_.sin_port=htons(port);
  destSockAddr_.sin_family=AF_INET;

  hw_states_.resize(info_.joints.size(), std::numeric_limits<double>::quiet_NaN());
  hw_commands_.resize(info_.joints.size(), std::numeric_limits<double>::quiet_NaN());

  for (const hardware_interface::ComponentInfo & joint : info_.joints)
  {
    if (joint.command_interfaces.size() != 1)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("Rh6frhHardwareInterface"),
        "Joint '%s' has %d command interfaces found. 1 expected.", joint.name.c_str(),
        joint.command_interfaces.size());
      return CallbackReturn::ERROR;
    }

    if (joint.command_interfaces[0].name != hardware_interface::HW_IF_POSITION)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("Rh6frhHardwareInterface"),
        "Joint '%s' have %s command interfaces found. '%s' expected.", joint.name.c_str(),
        joint.command_interfaces[0].name.c_str(), hardware_interface::HW_IF_POSITION);
      return CallbackReturn::ERROR;
    }

    if (joint.state_interfaces.size() != 1)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("Rh6frhHardwareInterface"),
        "Joint '%s' has %d state interface. 1 expected.", joint.name.c_str(),
        joint.state_interfaces.size());
      return CallbackReturn::ERROR;
    }

    if (joint.state_interfaces[0].name != hardware_interface::HW_IF_POSITION)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("Rh6frhHardwareInterface"),
        "Joint '%s' have %s state interface. '%s' expected.", joint.name.c_str(),
        joint.state_interfaces[0].name.c_str(), hardware_interface::HW_IF_POSITION);
      return CallbackReturn::ERROR;
    }
  }

  return CallbackReturn::SUCCESS;
}
  // ------------------------------------------------------------------------------------------
std::vector<hardware_interface::StateInterface>
Rh6frhHardwareInterface::export_state_interfaces()
{
  std::vector<hardware_interface::StateInterface> state_interfaces;
  for (uint i = 0; i < info_.joints.size(); i++)
  {
    state_interfaces.emplace_back(hardware_interface::StateInterface(
      info_.joints[i].name, hardware_interface::HW_IF_POSITION, &hw_states_[i]));
  }

  return state_interfaces;
}
  // ------------------------------------------------------------------------------------------
std::vector<hardware_interface::CommandInterface>
Rh6frhHardwareInterface::export_command_interfaces()
{
  std::vector<hardware_interface::CommandInterface> command_interfaces;
  for (uint i = 0; i < info_.joints.size(); i++)
  {
    command_interfaces.emplace_back(hardware_interface::CommandInterface(
      info_.joints[i].name, hardware_interface::HW_IF_POSITION, &hw_commands_[i]));
  }

  return command_interfaces;
}
  // ------------------------------------------------------------------------------------------
CallbackReturn Rh6frhHardwareInterface::on_activate(const rclcpp_lifecycle::State & previous_state)
{
  RCLCPP_INFO(rclcpp::get_logger("Rh6frhHardwareInterface"), "Starting ...please wait...");

//   std::string p_ip  = info_.hardware_parameters["robot_ip"];
//   int p_port = stoi(info_.hardware_parameters["robot_port"]);

  // IP address, port, etc., setting
//   memset(&destSockAddr_, 0, sizeof(destSockAddr_));
//   in_addr_t destAddr=inet_addr(p_ip.c_str());
//   memcpy(&destSockAddr_.sin_addr, &destAddr, sizeof(destAddr));
//   unsigned short port=p_port;
//   destSockAddr_.sin_port=htons(port);
//   destSockAddr_.sin_family=AF_INET;
// For std::ostringstream

  
  char SendText[512];



  // Socket creation
  destSocket_=socket(AF_INET, SOCK_DGRAM, 0);
  if (destSocket_ == INVALID_SOCKET) {
      RCLCPP_FATAL(
        rclcpp::get_logger("Rh6frhHardwareInterface"),
        "ERROR: socket unsuccessful");
      return CallbackReturn::ERROR;
  }

  struct timeval tv;
  tv.tv_sec = 0;
  tv.tv_usec = 100000;
  if (int err = setsockopt(destSocket_, SOL_SOCKET, SO_RCVTIMEO,(char*)&tv,sizeof(tv))) {
      RCLCPP_FATAL(
        rclcpp::get_logger("Rh6frhHardwareInterface"),
        "ERROR: setsockopt unsuccessful : %i ", err);
      return CallbackReturn::ERROR;
  }


  memset(&MXTsend_, 0, sizeof(MXTsend_));

  MXTsend_.Command = MXT_CMD_NULL;
  MXTsend_.SendType = MXT_TYP_NULL;
  MXTsend_.RecvType = MXT_TYP_JOINT;
  MXTsend_.dat.j1 = 10.0;
  MXTsend_.dat.j2 = 20.0;
  MXTsend_.dat.j3 = 10.0;
  MXTsend_.dat.j4 = 10.0;
  MXTsend_.SendIOType = 14;
  MXTsend_.RecvIOType = 16;
  MXTsend_.BitTop = 1;
  MXTsend_.BitMask = 2;
  MXTsend_.IoData = 3;
  //MXTsend_.TCount = 0xffff;
  MXTsend_.CCount = 4;

  memcpy(SendText,&MXTsend_,sizeof(MXTsend_));

  // MXTsend_.SendIOType = MXT_IO_NULL;
  // MXTsend_.RecvIOType = MXT_IO_NULL;


  counter_++;  // Count up only when communication is successful
  MXTsend_.CCount = 0;//counter_;

  RCLCPP_INFO(rclcpp::get_logger("Rh6frhHardwareInterface"), "MXTCMD: %s", toString(MXTsend_).c_str());

  socket_status_=sendto(destSocket_, SendText, sizeof(MXTCMD), NO_FLAGS_SET, (struct sockaddr *) &destSockAddr_, sizeof(destSockAddr_));
  if (socket_status_ != sizeof(MXTCMD)) {
      RCLCPP_FATAL(
        rclcpp::get_logger("Rh6frhHardwareInterface"),
        "ERROR: sendto unsuccessful in first send.");
      return CallbackReturn::ERROR;
  }
  socket_status_=recvfrom(destSocket_, (char *) &MXTrecv_, MAXBUFLEN, NO_FLAGS_SET, NULL ,NULL);
  if (socket_status_ == SOCKET_ERROR) {
      RCLCPP_FATAL(
        rclcpp::get_logger("Rh6frhHardwareInterface"),
        "ERROR: recvfrom unsuccessful in first recv.");
      return CallbackReturn::ERROR;
  }
  hw_states_[0]=MXTrecv_.dat.j1;
  hw_states_[1]=MXTrecv_.dat.j2;
  hw_states_[2]=MXTrecv_.dat.j3;
  hw_states_[3]=MXTrecv_.dat.j4;
  RCLCPP_INFO(rclcpp::get_logger("Rh6frhHardwareInterface"), "MXTCMD: %s", toString(MXTrecv_).c_str());

  hw_commands_ = hw_states_;

  RCLCPP_INFO(
    rclcpp::get_logger("Rh6frhHardwareInterface"), "System Successfully started!");

  return CallbackReturn::SUCCESS;
}

CallbackReturn Rh6frhHardwareInterface::on_deactivate(const rclcpp_lifecycle::State & previous_state)
{
  RCLCPP_INFO(rclcpp::get_logger("Rh6frhHardwareInterface"), "Stopping ...please wait...");

  if (destSocket_ != INVALID_SOCKET) {
    if (close(destSocket_) < 0) 
    {
      RCLCPP_ERROR(rclcpp::get_logger("Rh6frhHardwareInterface"), "ERROR: Failed to close socket");
      return CallbackReturn::ERROR;
    }
    destSocket_ = INVALID_SOCKET;  // Invalidate the socket descriptor after closing
  }

  RCLCPP_INFO(
    rclcpp::get_logger("Rh6frhHardwareInterface"), "System successfully stopped!");

  return CallbackReturn::SUCCESS;
}

hardware_interface::return_type Rh6frhHardwareInterface::read(const rclcpp::Time & time, const rclcpp::Duration & period)
{

  

  struct timeval tv;
  tv.tv_sec = 0;
  tv.tv_usec = 100000;
  if (int err = setsockopt(destSocket_, SOL_SOCKET, SO_RCVTIMEO,(char*)&tv,sizeof(tv))) {
      RCLCPP_FATAL(
        rclcpp::get_logger("Rh6frhHardwareInterface"),
        "ERROR: setsockopt unsuccessful : %i ", err);
      return hardware_interface::return_type::ERROR;
  }

  memset(&MXTrecv_, 0, sizeof(MXTrecv_));
        socket_status_=recvfrom(destSocket_, (char *) &MXTrecv_, MAXBUFLEN, NO_FLAGS_SET, NULL ,NULL);

    RCLCPP_INFO(rclcpp::get_logger("Rh6frhHardwareInterface"), "MXTCMDread: %s", toString(MXTrecv_).c_str());


  hw_states_[0]=MXTrecv_.dat.j1;
  hw_states_[1]=MXTrecv_.dat.j2;
  hw_states_[2]=MXTrecv_.dat.j3;
  hw_states_[3]=MXTrecv_.dat.j4;

  return hardware_interface::return_type::OK;
}

hardware_interface::return_type Rh6frhHardwareInterface::write(const rclcpp::Time & time, const rclcpp::Duration & period)
{
   
  counter_++;

//   struct timeval tv;
//   tv.tv_sec = 0;
//   tv.tv_usec = 100000;
//   if (int err = setsockopt(destSocket_, SOL_SOCKET, SO_RCVTIMEO,(char*)&tv,sizeof(tv))) {
//       RCLCPP_FATAL(
//         rclcpp::get_logger("Rh6frhHardwareInterface"),
//         "ERROR: setsockopt unsuccessful : %i ", err);
//       return hardware_interface::return_type::ERROR;
//   }

  memset(&MXTsend_, 0, sizeof(MXTsend_));
  //memset(&MXTrecv_, 0, sizeof(MXTrecv_));

  // Second and following times
  MXTsend_.Command = MXT_CMD_MOVE;

  MXTsend_.SendType = MXT_TYP_JOINT;
  MXTsend_.RecvType = MXT_TYP_JOINT;
  MXTsend_.dat.j1 = (float)hw_commands_[0];
  MXTsend_.dat.j2 = (float)hw_commands_[1];
  MXTsend_.dat.j3 = (float)hw_commands_[2];
  MXTsend_.dat.j4 = (float)hw_commands_[3];
  MXTsend_.SendIOType = MXT_IO_NULL;
  MXTsend_.RecvIOType = MXT_IO_IN;
  MXTsend_.BitTop = 0;
  MXTsend_.BitMask = 0xffff;
  MXTsend_.IoData = 0;
  MXTsend_.CCount = 0;

  RCLCPP_INFO(rclcpp::get_logger("Rh6frhHardwareInterface"), "MXTCMD send: %s", toString(MXTsend_).c_str());
  RCLCPP_INFO(rclcpp::get_logger("Rh6frhHardwareInterface"), "MXTCMDread: %s", toString(MXTrecv_).c_str());


  socket_status_=sendto(destSocket_, (char *) &MXTsend_, sizeof(MXTCMD), NO_FLAGS_SET, (struct sockaddr *) &destSockAddr_, sizeof(destSockAddr_));
  //socket_status_=recvfrom(destSocket_, (char *) &MXTrecv_, MAXBUFLEN, NO_FLAGS_SET, NULL ,NULL);
  if (socket_status_ != sizeof(MXTCMD)) {
      std::cerr<<"ERROR: sendto unsuccessful" <<std::endl;
      return hardware_interface::return_type::ERROR;
  }

  if (destSocket_ != INVALID_SOCKET) {
      RCLCPP_INFO(
        rclcpp::get_logger("Rh6frhHardwareInterface"),
        "wyslano ramke");
  }

  return hardware_interface::return_type::OK;
}
  // ------------------------------------------------------------------------------------------
  // ------------------------------------------------------------------------------------------

}  // namespace rh6frh_hardware

#include "pluginlib/class_list_macros.hpp"

PLUGINLIB_EXPORT_CLASS(
  rh6frh_hardware::Rh6frhHardwareInterface, hardware_interface::SystemInterface)
