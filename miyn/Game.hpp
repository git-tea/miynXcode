

#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include <vector>
#include "SDL2/SDL.h"
#include "Player.hpp"
#include "GameBoard.hpp"

using namespace std;

class Game {
        
private:
    
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
    int winner;
    vector<Player>* player_list;
    vector<Card>* card_list;
    
public:
    
    // Constructor and Deconstructor
    Game();
    ~Game();
    
    // Set up and take down game
    void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
    void clean_game();
    
    // Game Loop Functions
    void handle_events();
    void update_systems();
    void render_frame();
    
    // Supporting Functions
    bool running();
    
};

#endif
