//
// Created by kimer on 2020-11-17.
//

#ifndef LAB9_ENCHANTED_MAZE_HPP
#define LAB9_ENCHANTED_MAZE_HPP

#include "maze.hpp"

class enchanted_maze : public maze {
    void describe() override {
        cout << "A pretty, magical faery maze" << endl;

        for (room *room :  this->rooms) {
            room->describe();

            vector<wall *> roomWalls = room->getWalls();
            for (wall *wall: roomWalls) {
                wall->describe();
            }
        }

        for (door *door : this->doors) {
            door->describe();
        }
    }
};
#endif //LAB9_ENCHANTED_MAZE_HPP
