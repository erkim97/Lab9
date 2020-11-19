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
    explicit enchanted_room() {
        describe();
    }

    void describe() override {
        cout << "You have entered an Enchanted Room" << endl;
    }
};


#endif //LAB9_ENCHANTED_ROOM_HPP
