
#include "City.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
using namespace pandemic;

namespace pandemic
{
    Player :: Player(Board& board, City city){}

    Player :: Player(Board& board, City city, unsigned n){}

    Player :: ~Player(){}


    Player& Player:: drive(pandemic::City city)
    {
        return (*this);
    }

    Player& Player:: fly_charter(pandemic::City city)
    {
        return (*this);

    }

    Player& Player:: fly_direct(pandemic::City city)
    {
        return (*this);

    }
    
    Player& Player:: fly_shuttle(pandemic::City city)
    {
        return (*this);

    }
    void Player:: discover_cure(pandemic::Color color)
    {

    }
    Player& Player:: treat(pandemic::City city)
    {
        return (*this);

    }
    string Player:: role()
    {
        return " ";

    }
    Player& Player:: take_card(pandemic::City city)
    {
        return (*this);

    }

    Player& Player::build()
    {
        return (*this);

    }
  
}