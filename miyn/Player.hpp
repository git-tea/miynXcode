

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

class Player {
    
private:
    
    int index;
    bool is_turn;
    
public:
    
    Player();
    ~Player();
    
    int get_index();
    void set_index(int ind);
    
    bool check_if_turn();
    void make_turn();
    
    void handle_player_events();
    void update_player();
    
};

#endif 
