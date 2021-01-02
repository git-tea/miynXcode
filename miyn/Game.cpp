
#include "Game.hpp"


// Constructor and Deconstructor
Game::Game() {}
Game::~Game() {}


// Set up and take down of game
void Game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen) {
    
    int flags = 0;
    if (fullscreen) {
        flags = SDL_WINDOW_FULLSCREEN;
    }
    
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        cout << "Subsystems Initialized" << endl;
        
        // Set up Window
        this->window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if (window) {
            cout << "Window Created" << endl;
        }
        
        // Set up Renderer
        this->renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer) {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            cout << "Renderer Created" << endl;
        }
        
        // Set the game to running
        this->isRunning = true;
    }else {
        this->isRunning = false;
    }
    
}

void Game::clean_game() {
    
    SDL_DestroyWindow(this->window);
    SDL_DestroyRenderer(this->renderer);
    SDL_Quit();
    cout << "Game Cleaned" << endl;
    
}


// Game Loop Functions
void Game::handle_events() {
    
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
        default:
            break;
    }
    
}

void Game::update_systems() {
    
}

void Game::render_frame() {
    
    SDL_RenderClear(this->renderer);
    
    // Add stuff to renderer
    
    SDL_RenderPresent(this->renderer);
    
}


// Supporting Functions
bool Game::running() {
    return this->isRunning;
}
