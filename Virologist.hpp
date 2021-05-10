#pragma once

#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic
{
    class Virologist : public Player
    {
    public:
        City city_at;
        Color city_color;

        Virologist(pandemic::Board board ,pandemic::City city);
        ~Virologist();
      
    };

}