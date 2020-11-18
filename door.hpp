//
// Created by kimer on 2020-11-17.
//

#ifndef LAB9_DOOR_HPP
#define LAB9_DOOR_HPP
#include "room.hpp"

class door {
protected:
    room *room1 = nullptr;
    room *room2 = nullptr;
public:
    virtual ~door() = default;

    virtual void describe() = 0;
};

#endif //LAB9_DOOR_HPP
