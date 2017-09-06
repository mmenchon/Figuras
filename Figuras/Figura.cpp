#include "Figura.h"

Figura::Figura(std::string tipo)
{
    this->tipo=tipo;
}

Figura::~Figura()
{
    //dtor
}
string Figura::obtenerTipo() const
{
    return tipo;
}
