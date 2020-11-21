//
// Created by kimer on 2020-11-19.
//

#ifndef LAB9_FUTURE_DOOR_HPP
#define LAB9_FUTURE_DOOR_HPP
#include "door.hpp"
#include <iostream>

using namespace std;

class future_door : public door {
public:
    future_door(room* firstRoom, room* secondRoom) : door(firstRoom, secondRoom) {};

    ~future_door() override {
        delete room1;
        delete room2;
    }

    void describe() override {
        cout << "This door has a soma pill for a handle. This door connects Dystopian Room " <<
             this->room1->getId() << " and Dystopian Room " << this->room2->getId() << endl;
    }


};
#endif //LAB9_FUTURE_DOOR_HPP
