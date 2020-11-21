//
// Created by kimer on 2020-11-19.
//

#ifndef LAB9_FUTURE_ROOM_HPP
#define LAB9_FUTURE_ROOM_HPP

#include "room.hpp"
#include <iostream>
using namespace std;

class future_room : public room {
public:
    future_room(int ID, wall* wall) : room(ID, wall) {}

    void describe() override {
        cout << "Future Room: " << getId() << " This room has communist pigs in it" << endl;

    }
};


#endif //LAB9_FUTURE_ROOM_HPP
