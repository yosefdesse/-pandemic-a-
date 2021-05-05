




#include "Player.hpp"
#include <iostream>
#include "Board.hpp"
using namespace pandemic;



namespace pandemic
{
    Board :: Board(){}


    Board :: ~Board(){}


    bool Board:: is_clean()
    {
        return true;
    }
    void Board:: remove_cures()
    {
        return;
    }
    int&  Board::operator [] ( City city){
       
        return board[city];
    }
    ostream& operator<<(ostream& os,const Board& b)
    {
        return os;
    }

}