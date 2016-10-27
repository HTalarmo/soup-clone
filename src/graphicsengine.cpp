#include "graphicsengine.h"

GraphicsEngine::GraphicsEngine()
{

}

void GraphicsEngine::testGraphics()
{
    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    int row, col, curcol, currow;
    getmaxyx(stdscr, row, col);
    for(int i = 0; i < 10; i++)
    {
        curcol = col-10+i;
        currow = row-30+abs(30-i*3);
        std::string msg;
        for(int n = 0; n < i; n++)
        {
            msg += "#";
        }
        mvprintw(curcol, currow, msg.c_str());
    }
}
