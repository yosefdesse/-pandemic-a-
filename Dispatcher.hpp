#pragma once


#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"

using namespace pandemic;


namespace pandemic
{
    class Dispatcher : public Player
    {
    public:
        City city_at;
        Color city_color;

        Dispatcher(pandemic::Board board ,pandemic::City city);
        ~Dispatcher();
 
    };

}