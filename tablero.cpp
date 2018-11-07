#include "Tablero.h"
#include<allegro.h>

void Tablero::star()
{
    desx=320 + (rand()%25)*10;
    desy=50  + (rand()%33)*10;
    objx=-50;
    objy=desy;
    vel=1+rand()%5;
    cont=0;
}
void Tablero::endx()
{
    while(!key[KEY_ESC]&&vida>0)
    {
        clear_to_color(buffer,0x000000);
        blit(buffer,buffer,0,0,0,0,640,480);
    }
}
void Tablero::puntuacion()
{
    int num=50-abs(objx-desx);
    p+=num;
}
bool Tablero::colision()
{
    return(abs(objx-desx)<50);
}
