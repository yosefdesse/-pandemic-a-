
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
        // void operator[](pandemic::City city , unsigned int degree);
        int&  operator [] (City city);
        friend ostream& operator<<(ostream& os,const Board& b);
        // void  Board :: operator[](pandemic::City city , unsigned int degree);

    };
    

}