#pragma once


#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic
{
    class GeneSplicer : public Player
    {
    public:
        City city_at;
        Color city_color;

        GeneSplicer(pandemic::Board board, pandemic::City city);
        ~GeneSplicer();
        // void discover_cure(pandemic::Color color);

      
    };

}