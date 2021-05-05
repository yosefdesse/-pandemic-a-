#pragma once



#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic
{
    class Researcher : public Player
    {
    public:
        City city_at;
        Color city_color;

        Researcher(pandemic::Board board ,pandemic::City city);
        ~Researcher();
      
        // void discover_cure(pandemic::Color color);
      
    };

}