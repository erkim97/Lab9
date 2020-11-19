//
// Created by kimer on 2020-11-17.
//

#ifndef LAB9_ENCHANTED_DOOR_HPP
#define LAB9_ENCHANTED_DOOR_HPP

#include "door.hpp"
#include <iostream>

using namespace std;

class enchanted_door : public door {
public:
    enchanted_door(room &a, room &b) {
        room1 = &a;
        room2 = &b;
        describe();
    }

    ~enchanted_door() override {
        delete room1;
        delete room2;
    }

    void describe() override {
        cout << "Enchanted door opens room: " << room1 << " and room " << room2 << endl;
    }


};


#endif //LAB9_ENCHANTED_DOOR_HPP
