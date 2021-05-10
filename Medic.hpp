#pragma once


#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic
{
    class Medic : public Player
    {
    public:
        City city_at;
        Color city_color;

        Medic(pandemic::Board board , pandemic::City city);
        ~Medic();
        void discover_cure(pandemic::Color color);
        void treat(pandemic::City city);

      
    };

}