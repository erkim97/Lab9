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

//build enchanted factory
class enchanted_factory : public maze_factory {
public:
    maze* make_maze() override {
        return new enchanted_maze();
    }

    room* make_room(int id, wall* wall) override {
        return new enchanted_room(id, wall);
    }

    wall* make_wall() override {
        return new enchanted_wall();
    }

    door* make_door(room* room1, room* room2) override {
        return new enchanted_door(room1, room2);
    }

};
#endif //LAB9_ENCHANTED_FACTORY_HPP
