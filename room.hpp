//
// Created by kimer on 2020-11-17.
//

#ifndef LAB9_ROOM_HPP
#define LAB9_ROOM_HPP
#include "wall.hpp"
#include <vector>

using namespace std;

class room {
protected:
    vector<wall*> walls;
    int ID;

public:
    room(int ID, wall* wall) {
        this->ID = ID;
        addWall(wall);
    }

    virtual ~room() = default;


    void addWall(wall* wall) {
        for (int i = 1; i <= 4; i++) {
            this->walls.push_back(wall);
        }
    }

    const vector<wall*> getWalls() const{
        return walls;
    }

    int getId() const {
        return ID;
    }

    virtual void describe() = 0;

};
#endif //LAB9_ROOM_HPP
