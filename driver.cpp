#include <iostream>
#include "maze_game.hpp"
#include "enchanted_factory.hpp"
#include "future_factory.hpp"

int main() {
    maze_game game;

    maze_factory *e_fact = new enchanted_factory();
    maze *m = game.create_maze(*e_fact);

    cout << endl;

    maze_factory *f_fact = new future_factory();
    maze *d = game.create_maze(*f_fact);

    delete m;
    delete d;
    delete f_fact;
    delete e_fact;

    return 0;
}