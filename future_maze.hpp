//
// Created by kimer on 2020-11-19.
//

#ifndef LAB9_FUTURE_MAZE_HPP
#define LAB9_FUTURE_MAZE_HPP
#include "maze.hpp"

class future_maze : public maze {
    void describe() override{
        cout << "An Orwellian dystopian maze" << endl;

        for(room* room :  this->rooms) {
            room->describe();

            vector<wall*> roomWalls = room->getWalls();
            for (wall* wall: roomWalls) {
                wall->describe();
            }
        }

        for(door* door : this->doors) {
            door->describe();
        }
    }
};
#endif //LAB9_FUTURE_MAZE_HPP
