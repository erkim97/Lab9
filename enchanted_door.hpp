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
    enchanted_door(room* room1, room* room2) : door(room1, room2) {};

    ~enchanted_door() override {
        delete room1;
        delete room2;
    }

    void describe() override {
        cout << "This door has a faery wing for a handle. This door connects Faery Room " <<
             this->room1->getId() << " and Faery Room " << this->room2->getId() << endl;
    }


};


#endif //LAB9_ENCHANTED_DOOR_HPP
