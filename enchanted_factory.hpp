//
// Created by kimer on 2020-11-17.
//

#ifndef LAB9_ENCHANTED_FACTORY_HPP
#define LAB9_ENCHANTED_FACTORY_HPP
#include "maze_factory.hpp"
#include "enchanted_room.hpp"
#include "enchanted_door.hpp"
#include "enchanted_maze.hpp"
#include "enchanted_wall.hpp"

class enchanted_factory : public maze_factory {
public:
    enchanted_factory() {
        cout << "Creating Enchanted Factory Maze" << endl;
    }

    ~enchanted_factory() override = default;

    maze *make_maze() const override {
        return new enchanted_maze();
    }

    wall *make_wall() const override {
        return new enchanted_wall();
    }

    room *make_room() const override {
        return new enchanted_room();
    }

    door *make_door(room &room1, room &room2) const override {
        return new enchanted_door(room1, room2);
    }

};
#endif //LAB9_ENCHANTED_FACTORY_HPP
