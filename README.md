Zrób forka od tego repozytorium.

Stwórz własny codespace na bazie tego repo.

Gdy codespace wstanie, zainstaluj rozszerzenie dockera w VS Code.

Aby uruchomić maszyne użyj komendy:
```
docker compose up
```
Zbudowanie maszyny zajmuje ok. 15 minut

Włączoną maszyne uruchom w nowym terminalu kilkając prawym przyciskiem na powstałą maszyne i kliknij "Attach shell"

Pracę na maszynie rozpocznij poprzez przejście do folderu zawierającego projekt:
```
cd home/ros/ros2_ws/MTS_RH6FRH_ROS2_DRIVER
```
Przed rozpoczęciem pracy przygotuj środowisko aby było rozponawalne przez ROS2:
```
source /opt/ros/humble/setup.bash
. install/setup.bash
colcon build
```
Baw się dobrze :)


