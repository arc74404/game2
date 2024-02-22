#include "app.hpp"

App::App()
{
}

void
App::run()
{
    while(true)
	{
        Gui::getInstance()->handleEvents();

        break;
    }
}