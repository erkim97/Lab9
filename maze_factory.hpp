//
// Created by kimer on 2020-11-17.
//


#ifndef LAB9_MAZE_FACTORY_HPP
#define LAB9_MAZE_FACTORY_HPP

#include "maze.hpp"
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"

class maze_factory {

public:
    //abstract class with building abstract maze, wall, room, door
    virtual ~maze_factory() = default;
    virtual maze* make_maze() = 0;
    virtual wall* make_wall() = 0;
    virtual room* make_room(int id, wall* wall) = 0;
    virtual door* make_door(room* room1, room* room2) = 0;
};


#endif //LAB9_MAZE_FACTORY_HPP