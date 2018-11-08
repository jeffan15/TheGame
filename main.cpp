#include <iostream>
#include <allegro.h>
#include "tablero.h"
#include "nota.h"
#define NULL 0
using namespace std;
#define ALTO 480
#define ANCHO 640
int objx,objy;
int desx,desy;
int vel;
int cont;
void otro();
int vida;
int vidax;

int p;

BITMAP *buffer;

int main()
{
    char c1[30];
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,ANCHO,ALTO,0,0);
    buffer=create_bitmap(640,480);
    srand(time(NULL));
    vidax=100;
    vida=vidax;
    Tablero a;
    a.star();
    nota b;
    while(!key[KEY_ESC]&&vida>0)//comienza con el programa teniendo la via  o presinando ESC
    {
        clear_to_color(buffer,0x000000);
        blit(buffer,buffer,0,0,0,0,640,480);
        b.moverCuadro();
        b.muestra();
    }
    return 0;
}
END_OF_MAIN();
