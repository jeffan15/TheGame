#ifndef TABLERO_H
#define TABLERO_H
#include<allegro.h>

class Tablero
{
    public:
        void star();
        void endx();
        bool colision();
        void puntuacion();
    protected:
        int desx, desy;
        int objx, objy;
        int vel;
        int cont;
        int vida;
        int p;
        BITMAP *buffer;
};

#endif // TABLERO_H
