#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura.h"

class Circulo : public Figura
{
    public:
        Circulo(int x, int y, int radio);
        ~Circulo();
        double obtenerSuperficie() const;

    private:
        int x, y;
        double radio;

};
#endif // CIRCULO_H
