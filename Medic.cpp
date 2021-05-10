#include "Medic.hpp"

using namespace pandemic;

Medic:: Medic(Board board , City city): Player(board, city){};
Medic:: ~Medic(){}
void Medic:: discover_cure(pandemic::Color color){}
void Medic:: treat(pandemic::City city){}
