//
// Created by kimer on 2020-11-17.
//

#ifndef LAB9_ENCHANTED_WALL_HPP
#define LAB9_ENCHANTED_WALL_HPP
#include "wall.hpp"
#include <iostream>

using namespace std;

class enchanted_wall : public wall {
public:

    explicit enchanted_wall() {
        describe();
    }

    void describe() override {
        cout << "This wall has faery wings on it" << endl;
    }

};

#endif //LAB9_ENCHANTED_WALL_HPP
