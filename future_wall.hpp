//
// Created by kimer on 2020-11-19.
//

#ifndef LAB9_FUTURE_WALL_HPP
#define LAB9_FUTURE_WALL_HPP
#include "wall.hpp"
#include <iostream>

using namespace std;

class future_wall : public wall {
public:

    explicit future_wall() {
        describe();
    }

    void describe() override {
        cout << "This wall has surveillance cameras on it" << endl;
    }

};
#endif //LAB9_FUTURE_WALL_HPP
