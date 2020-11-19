//
// Created by kimer on 2020-11-19.
//

#ifndef LAB9_FUTURE_FACTORY_HPP
#define LAB9_FUTURE_FACTORY_HPP

#include "maze_factory.hpp"
#include "future_room.hpp"
#include "future_door.hpp"
#include "future_wall.hpp"
#include "future_maze.hpp"

class future_factory : public maze_factory {
public:
    future_factory() = default;

    ~future_factory() override = default;

    maze *make_maze() const override {
        return new future_maze();
    }

    room *make_room() const override {
        return new future_room();
    }

    door *make_door(room &room1, room &room2) const override {
        return new future_door(room1, room2);
    }

    wall *make_wall() const override {
        return new future_wall();
    }
};
#endif //LAB9_FUTURE_FACTORY_HPP
