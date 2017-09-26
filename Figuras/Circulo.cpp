#include "Circulo.h"
#include <math.h>
const double pi=3.14159265359;

Circulo::Circulo(int x, int y, int radio) : Figura("Circulo")
{
    this->x=x;
    this->y=y;
    this->radio=radio;
}

Circulo::~Circulo()
{
    //dtor
}

double Circulo::obtenerSuperficie() const
{
    return(pi*pow((double) radio,2.0));
}
