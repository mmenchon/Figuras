#include "Rectangulo.h"

Rectangulo::Rectangulo(int x, int y, int base, int altura): Figura("Rectangulo"){
    this->x=x;
    this->y=y;
    this->base=base;
    this->altura=altura;
}

Rectangulo::~Rectangulo()
{
    //dtor
}

double Rectangulo::obtenerSuperficie() const
{
    return base*altura;
}
