#ifndef ADMINISTRADORFIGURAS_H
#define ADMINISTRADORFIGURAS_H
#include "Figura.h"
#include <list>


class AdministradorFiguras
{
    public:
        AdministradorFiguras();
        virtual ~AdministradorFiguras();
        void agregar(Figura * figura);
        void eliminar(unsigned int clave);
        Figura* obtener(unsigned int clave) const;
        void procesar() const;

    private:
        list<Figura *> figuras;
};

#endif // ADMINISTRADORFIGURAS_H
