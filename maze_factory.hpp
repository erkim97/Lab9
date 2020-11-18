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
    virtual ~maze_factory() = default;

    virtual maze *make_maze() const = 0;

    virtual wall *make_wall() const = 0;

    virtual room *make_room() const = 0;

    virtual door *make_door(room &r1, room &r2) const = 0;
};


#endif //LAB9_MAZE_FACTORY_HPP