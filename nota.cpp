#include "nota.h"
#include <allegro.h>
#define ALTO 480
#define ANCHO 640
void nota::moverCuadro()
{
    cont++;
     if ( cont >= vel )
     {
          cont = 0;
          objx++;
     }

     if ( objx > ANCHO )
     {
          star();
          vida-=10;
     }
}

void nota::muestra()
{
    rectfill(buffer, 1+objx, 1+objy, 51+objx, 51+objy,0xF1D079);
    rect(buffer, desx, desy, 52+desx, 52+desy, 0xF1D079);
    rect(buffer, 1+desx, 1+desy, 51+desx, 51+desy, 0x21D059);
    rect(buffer, 2+desx, 2+desy, 50+desx, 50+desy, 0x000000);
}

