// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from scara_msgs:action/Task.idl
// generated code does not contain a copyright notice

#ifndef SCARA_MSGS__ACTION__DETAIL__TASK__FUNCTIONS_H_
#define SCARA_MSGS__ACTION__DETAIL__TASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "scara_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "scara_msgs/action/detail/task__struct.h"

/// Initialize action/Task message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scara_msgs__action__Task_Goal
 * )) before or use
 * scara_msgs__action__Task_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Goal__init(scara_msgs__action__Task_Goal * msg);

/// Finalize action/Task message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Goal__fini(scara_msgs__action__Task_Goal * msg);

/// Create action/Task message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scara_msgs__action__Task_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_Goal *
scara_msgs__action__Task_Goal__create();

/// Destroy action/Task message.
/**
 * It calls
 * scara_msgs__action__Task_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Goal__destroy(scara_msgs__action__Task_Goal * msg);

/// Check for action/Task message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Goal__are_equal(const scara_msgs__action__Task_Goal * lhs, const scara_msgs__action__Task_Goal * rhs);

/// Copy a action/Task message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Goal__copy(
  const scara_msgs__action__Task_Goal * input,
  scara_msgs__action__Task_Goal * output);

/// Initialize array of action/Task messages.
/**
 * It allocates the memory for the number of elements and calls
 * scara_msgs__action__Task_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Goal__Sequence__init(scara_msgs__action__Task_Goal__Sequence * array, size_t size);

/// Finalize array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Goal__Sequence__fini(scara_msgs__action__Task_Goal__Sequence * array);

/// Create array of action/Task messages.
/**
 * It allocates the memory for the array and calls
 * scara_msgs__action__Task_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_Goal__Sequence *
scara_msgs__action__Task_Goal__Sequence__create(size_t size);

/// Destroy array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Goal__Sequence__destroy(scara_msgs__action__Task_Goal__Sequence * array);

/// Check for action/Task message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Goal__Sequence__are_equal(const scara_msgs__action__Task_Goal__Sequence * lhs, const scara_msgs__action__Task_Goal__Sequence * rhs);

/// Copy an array of action/Task messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Goal__Sequence__copy(
  const scara_msgs__action__Task_Goal__Sequence * input,
  scara_msgs__action__Task_Goal__Sequence * output);

/// Initialize action/Task message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scara_msgs__action__Task_Result
 * )) before or use
 * scara_msgs__action__Task_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Result__init(scara_msgs__action__Task_Result * msg);

/// Finalize action/Task message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Result__fini(scara_msgs__action__Task_Result * msg);

/// Create action/Task message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scara_msgs__action__Task_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_Result *
scara_msgs__action__Task_Result__create();

/// Destroy action/Task message.
/**
 * It calls
 * scara_msgs__action__Task_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Result__destroy(scara_msgs__action__Task_Result * msg);

/// Check for action/Task message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Result__are_equal(const scara_msgs__action__Task_Result * lhs, const scara_msgs__action__Task_Result * rhs);

/// Copy a action/Task message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Result__copy(
  const scara_msgs__action__Task_Result * input,
  scara_msgs__action__Task_Result * output);

/// Initialize array of action/Task messages.
/**
 * It allocates the memory for the number of elements and calls
 * scara_msgs__action__Task_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Result__Sequence__init(scara_msgs__action__Task_Result__Sequence * array, size_t size);

/// Finalize array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Result__Sequence__fini(scara_msgs__action__Task_Result__Sequence * array);

/// Create array of action/Task messages.
/**
 * It allocates the memory for the array and calls
 * scara_msgs__action__Task_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_Result__Sequence *
scara_msgs__action__Task_Result__Sequence__create(size_t size);

/// Destroy array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Result__Sequence__destroy(scara_msgs__action__Task_Result__Sequence * array);

/// Check for action/Task message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Result__Sequence__are_equal(const scara_msgs__action__Task_Result__Sequence * lhs, const scara_msgs__action__Task_Result__Sequence * rhs);

/// Copy an array of action/Task messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Result__Sequence__copy(
  const scara_msgs__action__Task_Result__Sequence * input,
  scara_msgs__action__Task_Result__Sequence * output);

/// Initialize action/Task message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scara_msgs__action__Task_Feedback
 * )) before or use
 * scara_msgs__action__Task_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Feedback__init(scara_msgs__action__Task_Feedback * msg);

/// Finalize action/Task message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Feedback__fini(scara_msgs__action__Task_Feedback * msg);

/// Create action/Task message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scara_msgs__action__Task_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_Feedback *
scara_msgs__action__Task_Feedback__create();

/// Destroy action/Task message.
/**
 * It calls
 * scara_msgs__action__Task_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Feedback__destroy(scara_msgs__action__Task_Feedback * msg);

/// Check for action/Task message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Feedback__are_equal(const scara_msgs__action__Task_Feedback * lhs, const scara_msgs__action__Task_Feedback * rhs);

/// Copy a action/Task message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Feedback__copy(
  const scara_msgs__action__Task_Feedback * input,
  scara_msgs__action__Task_Feedback * output);

/// Initialize array of action/Task messages.
/**
 * It allocates the memory for the number of elements and calls
 * scara_msgs__action__Task_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Feedback__Sequence__init(scara_msgs__action__Task_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Feedback__Sequence__fini(scara_msgs__action__Task_Feedback__Sequence * array);

/// Create array of action/Task messages.
/**
 * It allocates the memory for the array and calls
 * scara_msgs__action__Task_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_Feedback__Sequence *
scara_msgs__action__Task_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_Feedback__Sequence__destroy(scara_msgs__action__Task_Feedback__Sequence * array);

/// Check for action/Task message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Feedback__Sequence__are_equal(const scara_msgs__action__Task_Feedback__Sequence * lhs, const scara_msgs__action__Task_Feedback__Sequence * rhs);

/// Copy an array of action/Task messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_Feedback__Sequence__copy(
  const scara_msgs__action__Task_Feedback__Sequence * input,
  scara_msgs__action__Task_Feedback__Sequence * output);

/// Initialize action/Task message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scara_msgs__action__Task_SendGoal_Request
 * )) before or use
 * scara_msgs__action__Task_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Request__init(scara_msgs__action__Task_SendGoal_Request * msg);

/// Finalize action/Task message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_SendGoal_Request__fini(scara_msgs__action__Task_SendGoal_Request * msg);

/// Create action/Task message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scara_msgs__action__Task_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_SendGoal_Request *
scara_msgs__action__Task_SendGoal_Request__create();

/// Destroy action/Task message.
/**
 * It calls
 * scara_msgs__action__Task_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_SendGoal_Request__destroy(scara_msgs__action__Task_SendGoal_Request * msg);

/// Check for action/Task message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Request__are_equal(const scara_msgs__action__Task_SendGoal_Request * lhs, const scara_msgs__action__Task_SendGoal_Request * rhs);

/// Copy a action/Task message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Request__copy(
  const scara_msgs__action__Task_SendGoal_Request * input,
  scara_msgs__action__Task_SendGoal_Request * output);

/// Initialize array of action/Task messages.
/**
 * It allocates the memory for the number of elements and calls
 * scara_msgs__action__Task_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Request__Sequence__init(scara_msgs__action__Task_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_SendGoal_Request__Sequence__fini(scara_msgs__action__Task_SendGoal_Request__Sequence * array);

/// Create array of action/Task messages.
/**
 * It allocates the memory for the array and calls
 * scara_msgs__action__Task_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_SendGoal_Request__Sequence *
scara_msgs__action__Task_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_SendGoal_Request__Sequence__destroy(scara_msgs__action__Task_SendGoal_Request__Sequence * array);

/// Check for action/Task message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Request__Sequence__are_equal(const scara_msgs__action__Task_SendGoal_Request__Sequence * lhs, const scara_msgs__action__Task_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Task messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Request__Sequence__copy(
  const scara_msgs__action__Task_SendGoal_Request__Sequence * input,
  scara_msgs__action__Task_SendGoal_Request__Sequence * output);

/// Initialize action/Task message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scara_msgs__action__Task_SendGoal_Response
 * )) before or use
 * scara_msgs__action__Task_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Response__init(scara_msgs__action__Task_SendGoal_Response * msg);

/// Finalize action/Task message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_SendGoal_Response__fini(scara_msgs__action__Task_SendGoal_Response * msg);

/// Create action/Task message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scara_msgs__action__Task_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_SendGoal_Response *
scara_msgs__action__Task_SendGoal_Response__create();

/// Destroy action/Task message.
/**
 * It calls
 * scara_msgs__action__Task_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_SendGoal_Response__destroy(scara_msgs__action__Task_SendGoal_Response * msg);

/// Check for action/Task message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Response__are_equal(const scara_msgs__action__Task_SendGoal_Response * lhs, const scara_msgs__action__Task_SendGoal_Response * rhs);

/// Copy a action/Task message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Response__copy(
  const scara_msgs__action__Task_SendGoal_Response * input,
  scara_msgs__action__Task_SendGoal_Response * output);

/// Initialize array of action/Task messages.
/**
 * It allocates the memory for the number of elements and calls
 * scara_msgs__action__Task_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Response__Sequence__init(scara_msgs__action__Task_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_SendGoal_Response__Sequence__fini(scara_msgs__action__Task_SendGoal_Response__Sequence * array);

/// Create array of action/Task messages.
/**
 * It allocates the memory for the array and calls
 * scara_msgs__action__Task_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_SendGoal_Response__Sequence *
scara_msgs__action__Task_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_SendGoal_Response__Sequence__destroy(scara_msgs__action__Task_SendGoal_Response__Sequence * array);

/// Check for action/Task message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Response__Sequence__are_equal(const scara_msgs__action__Task_SendGoal_Response__Sequence * lhs, const scara_msgs__action__Task_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Task messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_SendGoal_Response__Sequence__copy(
  const scara_msgs__action__Task_SendGoal_Response__Sequence * input,
  scara_msgs__action__Task_SendGoal_Response__Sequence * output);

/// Initialize action/Task message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scara_msgs__action__Task_GetResult_Request
 * )) before or use
 * scara_msgs__action__Task_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Request__init(scara_msgs__action__Task_GetResult_Request * msg);

/// Finalize action/Task message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_GetResult_Request__fini(scara_msgs__action__Task_GetResult_Request * msg);

/// Create action/Task message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scara_msgs__action__Task_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_GetResult_Request *
scara_msgs__action__Task_GetResult_Request__create();

/// Destroy action/Task message.
/**
 * It calls
 * scara_msgs__action__Task_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_GetResult_Request__destroy(scara_msgs__action__Task_GetResult_Request * msg);

/// Check for action/Task message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Request__are_equal(const scara_msgs__action__Task_GetResult_Request * lhs, const scara_msgs__action__Task_GetResult_Request * rhs);

/// Copy a action/Task message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Request__copy(
  const scara_msgs__action__Task_GetResult_Request * input,
  scara_msgs__action__Task_GetResult_Request * output);

/// Initialize array of action/Task messages.
/**
 * It allocates the memory for the number of elements and calls
 * scara_msgs__action__Task_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Request__Sequence__init(scara_msgs__action__Task_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_GetResult_Request__Sequence__fini(scara_msgs__action__Task_GetResult_Request__Sequence * array);

/// Create array of action/Task messages.
/**
 * It allocates the memory for the array and calls
 * scara_msgs__action__Task_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_GetResult_Request__Sequence *
scara_msgs__action__Task_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_GetResult_Request__Sequence__destroy(scara_msgs__action__Task_GetResult_Request__Sequence * array);

/// Check for action/Task message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Request__Sequence__are_equal(const scara_msgs__action__Task_GetResult_Request__Sequence * lhs, const scara_msgs__action__Task_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Task messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Request__Sequence__copy(
  const scara_msgs__action__Task_GetResult_Request__Sequence * input,
  scara_msgs__action__Task_GetResult_Request__Sequence * output);

/// Initialize action/Task message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scara_msgs__action__Task_GetResult_Response
 * )) before or use
 * scara_msgs__action__Task_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Response__init(scara_msgs__action__Task_GetResult_Response * msg);

/// Finalize action/Task message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_GetResult_Response__fini(scara_msgs__action__Task_GetResult_Response * msg);

/// Create action/Task message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scara_msgs__action__Task_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_GetResult_Response *
scara_msgs__action__Task_GetResult_Response__create();

/// Destroy action/Task message.
/**
 * It calls
 * scara_msgs__action__Task_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_GetResult_Response__destroy(scara_msgs__action__Task_GetResult_Response * msg);

/// Check for action/Task message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Response__are_equal(const scara_msgs__action__Task_GetResult_Response * lhs, const scara_msgs__action__Task_GetResult_Response * rhs);

/// Copy a action/Task message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Response__copy(
  const scara_msgs__action__Task_GetResult_Response * input,
  scara_msgs__action__Task_GetResult_Response * output);

/// Initialize array of action/Task messages.
/**
 * It allocates the memory for the number of elements and calls
 * scara_msgs__action__Task_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Response__Sequence__init(scara_msgs__action__Task_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_GetResult_Response__Sequence__fini(scara_msgs__action__Task_GetResult_Response__Sequence * array);

/// Create array of action/Task messages.
/**
 * It allocates the memory for the array and calls
 * scara_msgs__action__Task_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_GetResult_Response__Sequence *
scara_msgs__action__Task_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_GetResult_Response__Sequence__destroy(scara_msgs__action__Task_GetResult_Response__Sequence * array);

/// Check for action/Task message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Response__Sequence__are_equal(const scara_msgs__action__Task_GetResult_Response__Sequence * lhs, const scara_msgs__action__Task_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Task messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_GetResult_Response__Sequence__copy(
  const scara_msgs__action__Task_GetResult_Response__Sequence * input,
  scara_msgs__action__Task_GetResult_Response__Sequence * output);

/// Initialize action/Task message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scara_msgs__action__Task_FeedbackMessage
 * )) before or use
 * scara_msgs__action__Task_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_FeedbackMessage__init(scara_msgs__action__Task_FeedbackMessage * msg);

/// Finalize action/Task message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_FeedbackMessage__fini(scara_msgs__action__Task_FeedbackMessage * msg);

/// Create action/Task message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scara_msgs__action__Task_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_FeedbackMessage *
scara_msgs__action__Task_FeedbackMessage__create();

/// Destroy action/Task message.
/**
 * It calls
 * scara_msgs__action__Task_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_FeedbackMessage__destroy(scara_msgs__action__Task_FeedbackMessage * msg);

/// Check for action/Task message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_FeedbackMessage__are_equal(const scara_msgs__action__Task_FeedbackMessage * lhs, const scara_msgs__action__Task_FeedbackMessage * rhs);

/// Copy a action/Task message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_FeedbackMessage__copy(
  const scara_msgs__action__Task_FeedbackMessage * input,
  scara_msgs__action__Task_FeedbackMessage * output);

/// Initialize array of action/Task messages.
/**
 * It allocates the memory for the number of elements and calls
 * scara_msgs__action__Task_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_FeedbackMessage__Sequence__init(scara_msgs__action__Task_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_FeedbackMessage__Sequence__fini(scara_msgs__action__Task_FeedbackMessage__Sequence * array);

/// Create array of action/Task messages.
/**
 * It allocates the memory for the array and calls
 * scara_msgs__action__Task_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
scara_msgs__action__Task_FeedbackMessage__Sequence *
scara_msgs__action__Task_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Task messages.
/**
 * It calls
 * scara_msgs__action__Task_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
void
scara_msgs__action__Task_FeedbackMessage__Sequence__destroy(scara_msgs__action__Task_FeedbackMessage__Sequence * array);

/// Check for action/Task message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_FeedbackMessage__Sequence__are_equal(const scara_msgs__action__Task_FeedbackMessage__Sequence * lhs, const scara_msgs__action__Task_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Task messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_msgs
bool
scara_msgs__action__Task_FeedbackMessage__Sequence__copy(
  const scara_msgs__action__Task_FeedbackMessage__Sequence * input,
  scara_msgs__action__Task_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SCARA_MSGS__ACTION__DETAIL__TASK__FUNCTIONS_H_
