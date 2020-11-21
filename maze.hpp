//
// Created by kimer on 2020-11-17.
//

#ifndef LAB9_MAZE_HPP
#define LAB9_MAZE_HPP
#include "room.hpp"
#include "wall.hpp"
#include "door.hpp"

#include <vector>
#include <iostream>

class maze {
public:
    vector<room *> rooms;
    vector<door *> doors;

    virtual ~maze() = default;
    virtual void describe() = 0;

    void add_room(room *room) {
        rooms.push_back(room);
    }
    void add_door(door *door) {
        doors.push_back(door);
    }


};
#endif //LAB9_MAZE_HPP
