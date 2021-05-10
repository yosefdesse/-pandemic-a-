#define CHECK DOCTEST_CHECK
#include "doctest.h"
using namespace doctest;
#include <iostream>


#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
using namespace pandemic;




        // Algiers,
        // Atlanta,
        // Baghdad,
        // Bangkok,
        // Beijing,
        // Bogota,
        // BuenosAires,
        // Cairo,
        // Chennai,
        // Chicago,
        // Delhi,
        // Essen,
        // HoChiMinhCity,
        // HongKong,
        // Istanbul,
        // Jakarta,
        // Johannesburg,
        // Karachi,
        // Khartoum,
        // Kinshasa,
        // Kolkata,
        // Lagos,
        // Lima,
        // London,
        // LosAngeles,
        // Madrid,
        // Manila,
        // MexicoCity,
        // Miami,
        // Milan,
        // Montreal,
        // Moscow,
        // Mumbai,
        // NewYork,
        // Osaka,
        // Paris,
        // Riyadh,
        // SanFrancisco,
        // Santiago,
        // SaoPaulo,
        // Seoul,
        // Shanghai,
        // StPetersburg,
        // Sydney,
        // Taipei,
        // Tehran,
        // Tokyo,
        // Washington


TEST_CASE("Board test")
{
    Board board;
    CHECK(board.is_clean()==true);
    board[City :: Algiers]=2;
    board[City :: Bangkok]=1;
    board[City :: SaoPaulo]=2;
    board[City :: Chicago]=1;
    board[City :: Delhi]=0;
    board[City :: Milan]=2;
    board[City :: Tokyo]=0;
    board[City :: Seoul]=1;
    board[City :: Washington]=2;
    board[City :: Madrid]=1;
    board[City :: MexicoCity]=0;
    board[City :: Johannesburg]=2;
   

    
    CHECK(board[City :: Johannesburg]==2);
    CHECK(board[City :: Madrid]==1);
    CHECK(board[City :: Madrid]!=0);
    CHECK( board[City :: Algiers]==2); 
    CHECK(board[City :: Bangkok]==1); 
    CHECK(board[City :: SaoPaulo]==2); 
    CHECK(board[City :: Chicago]==1); 
    CHECK(board[City :: Delhi]==0); 
    CHECK(board[City :: Milan]==2); 
    CHECK(board[City :: Milan]!=0); 
    CHECK(board[City :: Tokyo]==0); 
    CHECK(board[City :: Seoul]==1); 
    CHECK(board[City :: MexicoCity]==0); 

}


TEST_CASE("Board test")
{
    Board board;
    CHECK(board.is_clean()==true);
    board[City :: Algiers]=2;
    board[City :: Bangkok]=1;
    board[City :: SaoPaulo]=2;
    board[City :: Chicago]=1;
    board[City :: Delhi]=0;
    board[City :: Milan]=2;
    board[City :: Tokyo]=0;
    board[City :: Seoul]=1;
    board[City :: Washington]=2;
    board[City :: Madrid]=1;
    board[City :: MexicoCity]=0;
    board[City :: Johannesburg]=2;
   

    
    CHECK(board[City :: Johannesburg]==2);
    CHECK(board[City :: Madrid]==1);
    CHECK(board[City :: Madrid]!=0);
    CHECK( board[City :: Algiers]==2); 
    CHECK(board[City :: Bangkok]==1); 
    CHECK(board[City :: SaoPaulo]==2); 
    CHECK(board[City :: Chicago]==1); 
    CHECK(board[City :: Delhi]==0); 
    CHECK(board[City :: Milan]==2); 
    // CHECK(board.is_clean() == false);
    CHECK(board[City :: Milan]!=0); 
    CHECK(board[City :: Tokyo]==0); 
    CHECK(board[City :: Seoul]==1); 
    CHECK(board[City :: MexicoCity]==0); 
    CHECK(board[City :: Tokyo]!=2); 
    CHECK(board[City :: Seoul]!=0); 
    CHECK(board[City :: MexicoCity]!=2);
    CHECK(board[City :: Bangkok]!=3); 
    CHECK(board[City :: SaoPaulo]!=1); 
}