#pragma once


#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic
{
    class Scientist : public Player
    {
    public:
        City city_at;
        Color city_color;

        Scientist(pandemic::Board board ,pandemic::City city, unsigned int n);
        ~Scientist();
        // void discover_cure(pandemic::Color color);

      
    };

}