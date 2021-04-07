#include <iostream>
#include "Labyrinth.h"
using namespace std;

bool isPathToFreedom(MazeCell* start, const std::string& moves) {
    /* TODO: Delete this comment and the remaining lines, then implement this function. */
    bool spellbook = false;
    bool potion = false;
    bool wand = false;

    for (int i = 0; i < moves.length(); i++) {
      if (moves[i] == 'N' && start->north != nullptr) {
        start = start->north;
        cout << "N";
      }
      else if (moves[i] == 'E' && start->east != nullptr) {
        start = start->east;
        cout << "E";
      }
      else if (moves[i] == 'S' && start->south != nullptr) {
        start = start->south;
        cout << "S";
      }
      else if (moves[i] == 'W' && start->west != nullptr) {
        start = start->west;
        cout << "W";
      }

      if (start->whatsHere == Item::SPELLBOOK) {
        spellbook = true;
      }
      if (start->whatsHere == Item::POTION) {
        potion = true;
      }
      if (start->whatsHere == Item::WAND) {
        wand = true;
      }
    }

    if ((spellbook == true) &&
        (potion == true) &&
        (wand == true)) {
          cout << endl;
          return true;
        }

    return false;
}
