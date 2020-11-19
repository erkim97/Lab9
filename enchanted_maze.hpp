//
// Created by kimer on 2020-11-17.
//

#ifndef LAB9_ENCHANTED_MAZE_HPP
#define LAB9_ENCHANTED_MAZE_HPP

#include "maze.hpp"

class enchanted_maze : public maze {

public:
    explicit enchanted_maze() {
        cout << "Creating Enchanted Faery Land Maze";
    }

    ~enchanted_maze() override {
        for (auto a : rooms) {
            delete a;
        }
    }

    void add_room(room *rm) override {
        rooms.push_back(rm);
    }
};

#endif //LAB9_ENCHANTED_MAZE_HPP
