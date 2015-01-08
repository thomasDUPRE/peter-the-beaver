#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>

#define W_WIDTH 300
#define W_HEIGHT 300
int main(){
    sfVideoMode mode = {W_WIDTH, W_HEIGHT, 32};
    sfRenderWindow* window;
    sfEvent event;
    window = sfRenderWindow_create(mode, "Peter The Beaver",   sfClose, NULL);

    while (sfRenderWindow_isOpen(window))
    {
       // Process events
        while (sfRenderWindow_pollEvent(window, &event))
        {
             // Close window : exit
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
         // Clear the screen
        sfRenderWindow_clear(window, sfWhite);
          // Update the window
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return 0;
}
