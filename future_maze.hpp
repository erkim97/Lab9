//
// Created by kimer on 2020-11-19.
//

#ifndef LAB9_FUTURE_MAZE_HPP
#define LAB9_FUTURE_MAZE_HPP
#include "maze.hpp"

class future_maze : public maze {

public:
    explicit future_maze() {
        cout << "An Orwellian dystopian maze" << endl;
    }

    ~future_maze() override {
        for (auto a : rooms) {
            delete a;
        }
    }

    void add_room(room *rm) override {
        rooms.push_back(rm);
    }
};
#endif //LAB9_FUTURE_MAZE_HPP
