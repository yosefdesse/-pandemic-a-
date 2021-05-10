
#pragma once
#include "City.hpp"
#include <map>
#include <iostream>
using namespace std;
using namespace pandemic;



namespace pandemic
{
    class Board
    {
    public:
       
        std :: map< pandemic::City  ,  int > board;
   
        Board();
        ~Board();
        bool is_clean();
        void  remove_cures();
        int&  operator [] (City city);
        friend ostream& operator<<(ostream& os,const Board& b);

    };
    

}