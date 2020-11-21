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
    door(room* room1, room* room2){
        this -> room1 = room1;
        this -> room2 = room2;
    }

    virtual ~door() = default;

    virtual void describe() = 0;

};

#endif //LAB9_DOOR_HPP
