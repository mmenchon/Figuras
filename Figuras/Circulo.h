#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura.h"
#include <math.h>

const double pi=3.14159265359;


class Circulo : public Figura
{
    public:
        Circulo(int x, int y, int radio):Figura("Circulo")
        {
            this->x=x;
            this->y=y;
            this->radio=radio;
        }
        virtual ~Circulo();
        double obtenerSuperficie(){return (pi*pow(radio,2));}

    private:
        int x, y, radio;

};
#endif // CIRCULO_H
