//
// Created by kimer on 2020-11-17.
//

#ifndef LAB9_ENCHANTED_ROOM_HPP
#define LAB9_ENCHANTED_ROOM_HPP
#include "room.hpp"
#include <iostream>

using namespace std;

class enchanted_room : public room {
public:
    enchanted_room(int ID, wall* wall) : room(ID, wall) {}

    void describe() override {
        cout << "Enchanted Room: " << getId() << " This room has faeries in it" << endl;

    }
};


#endif //LAB9_ENCHANTED_ROOM_HPP
