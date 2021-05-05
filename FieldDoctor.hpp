#pragma once


#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"


namespace pandemic
{
    class FieldDoctor : public Player
    {
    public:
        City city_at;
        Color city_color;

        FieldDoctor(pandemic::Board board ,pandemic :: City city);
        ~FieldDoctor();
        // void treat(pandemic::City city);

      
    };

}