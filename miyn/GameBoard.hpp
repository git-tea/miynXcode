

#ifndef GameBoard_hpp
#define GameBoard_hpp

#include <iostream>
#include "Card.hpp"

using namespace std;

class GameBoard {
    
private:
    Card board[4][4];
    
public:
    
    // Constructor and Deconstructor
    GameBoard();
    ~GameBoard();
    
    void init();
    void clean_board();
    void assign_cards();
    
    void update_board_state();
    void render_board();
    
};


#endif 
