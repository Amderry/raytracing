#ifndef CAPP_HPP
#define CAPP_HPP

#include <SDL2/SDL.h>
#include "raycasting/image.hpp"

class CApp
{
  public:
    CApp();

    int on_execute();
    bool on_init();
    void on_event(SDL_Event *event);
    void on_loop();
    void on_render();
    void on_exit();

  private:
    Image m_image;
    bool is_running;
    SDL_Window *pWindow;
    SDL_Renderer *pRenderer;
};

#endif
