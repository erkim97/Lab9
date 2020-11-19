cmake_minimum_required(VERSION 3.17)
project(Lab9)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Wa,-mbig-obj")

add_executable(Lab9 driver.cpp maze_factory.hpp maze_game.hpp maze.hpp room.hpp wall.hpp door.hpp enchanted_door.hpp enchanted_wall.hpp enchanted_room.hpp enchanted_factory.hpp enchanted_maze.hpp future_maze.hpp future_wall.hpp future_door.hpp future_factory.hpp future_room.hpp)