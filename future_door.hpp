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
    future_door(room &a, room &b) {
        room1 = &a;
        room2 = &b;
        describe();
    }

    ~future_door() override {
        delete room1;
        delete room2;
    }

    void describe() override {
        cout << "This door has a soma pill for a handle. "
        << "This door connects Dystopian Room "
        << room1
        << " and Dystopian Room "
        << room2 << endl;
    }


};
#endif //LAB9_FUTURE_DOOR_HPP
