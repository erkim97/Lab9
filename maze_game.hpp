//
// Created by kimer on 2020-11-17.
//

#ifndef LAB9_MAZE_GAME_HPP
#define LAB9_MAZE_GAME_HPP
#include "maze_factory.hpp"
#include "maze.hpp"

class maze_game {
public:
    maze_game()= default;;

    maze *create_maze(maze_factory &factory) {
        maze *newMaze = factory.make_maze();
        wall* wall = factory.make_wall();

        room *room1 = factory.make_room(0, wall);
        room *room2 = factory.make_room(1, wall);

        door* door = factory.make_door(room1, room2);

        newMaze->add_door(door);
        newMaze->add_room(room1);
        newMaze->add_room(room2);

        return newMaze;
    }

};
#endif //LAB9_MAZE_GAME_HPP
