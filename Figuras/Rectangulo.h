#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Figura.h"


class Rectangulo : public Figura
{
    public:
        Rectangulo(int x, int y, int base, int altura);
        ~Rectangulo();
        double obtenerSuperficie() const;

    private:
        int x, y, base, altura;
};

#endif // RECTANGULO_H
