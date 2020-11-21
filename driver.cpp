#include <iostream>
#include "maze_game.hpp"
#include "enchanted_factory.hpp"
#include "future_factory.hpp"

int main() {
    maze_game *game = new class maze_game();
    maze_factory *e_fact = new enchanted_factory();
    maze *enchanted_maze;
    enchanted_maze = game->create_maze(*e_fact);

    maze_factory *f_fact = new future_factory();
    maze *future_maze;
    future_maze = game -> create_maze(*f_fact);

    enchanted_maze -> describe();
    cout << endl;
    future_maze -> describe();

    delete game;
    delete enchanted_maze;
    delete future_maze;
    delete f_fact;
    delete e_fact;

    return 0;
}