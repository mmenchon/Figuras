#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Figura.h"


class Rectangulo : public Figura
{
    public:
        Rectangulo();
        virtual ~Rectangulo();
        double obtenerSuperficie(){return base*altura};

    private:
        int x, y, base, altura;
};

#endif // RECTANGULO_H
