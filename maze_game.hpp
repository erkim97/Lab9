//
// Created by kimer on 2020-11-17.
//

#ifndef LAB9_MAZE_GAME_HPP
#define LAB9_MAZE_GAME_HPP
#include "maze_factory.hpp"

class maze_game {
public:
    maze *create_maze(maze_factory &factory) {
        maze *newMaze = factory.make_maze();
        room *room1 = factory.make_room();
        room *room2 = factory.make_room();
        door *d = factory.make_door(*room1, *room2);
        wall *wall1 = factory.make_wall();
        wall *wall2 = factory.make_wall();
        wall *wall3 = factory.make_wall();
        wall *wall4 = factory.make_wall();

        newMaze -> add_room(room1);
        newMaze -> add_room(room2);
        return newMaze;
    }

};
#endif //LAB9_MAZE_GAME_HPP
