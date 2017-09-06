#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>
using namespace std;


class Figura
{
    public:
        Figura(string tipo);
        virtual ~Figura();
        string obtenerTipo() const;
        virtual double obtenerSuperficie() const =0;
    private:
        string tipo;
};

#endif // FIGURA_H
