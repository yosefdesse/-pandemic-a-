#pragma once


# include "Color.hpp"
# include "City.hpp"
# include "string"
#include "Board.hpp"

using namespace std;
using namespace pandemic;





namespace pandemic
{
    class Player
    {
    private:
        Board board;
        City city; 
    public:
       
   
        Player(Board& board, City city) ;//: board(board), city(city){};
        Player(Board& board, City city, unsigned n) ;
        ~Player();
        Player& drive(pandemic::City city);
        Player& fly_direct(pandemic::City city);
        Player& fly_charter(pandemic::City city);
        Player& fly_shuttle(pandemic::City city);
        Player& build();
        void discover_cure(pandemic::Color color);
        Player& treat(pandemic::City city);
        string role();
        Player& take_card(pandemic::City city);
        

    };
    

}