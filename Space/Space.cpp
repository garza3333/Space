
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>

#include <allegro5/allegro.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

#include "Ship.h"



int main()
{
    Ship ship = Ship();
    ship.shoot();
    std::cout << "Hello World!\n";

    al_init();
    al_init_font_addon();
    al_init_ttf_addon();
    ALLEGRO_DISPLAY* display = al_create_display(400, 400);
    ALLEGRO_FONT* font = al_load_ttf_font("Georgia.ttf", 64, 0);

    while (true){
        al_clear_to_color(al_map_rgb(255,255,255));
        al_draw_text(font, al_map_rgb(0, 0, 0), 0, 0, 0, "This is Allegro");
        al_flip_display();
    }

    al_destroy_display(display);
    al_destroy_font(font);




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
