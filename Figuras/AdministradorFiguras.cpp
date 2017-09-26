#include "AdministradorFiguras.h"
#include <assert.h>
using namespace std;


AdministradorFiguras::AdministradorFiguras()
{
    indiceClave=0;
}

AdministradorFiguras::~AdministradorFiguras()
{
    //dtor
}
unsigned int AdministradorFiguras::agregar(Figura* figura)
{
    figuras.push_back(figura);
    return indiceClave++;
}

void AdministradorFiguras::eliminar(unsigned int clave)
{
    assert(figuras.size() < clave);
    list<Figura *>::iterator it=figuras.begin();
    unsigned int j=0;
    while(j<clave){
        it++;
        j++;
        }
    figuras.erase(it);
}

Figura* AdministradorFiguras::obtener(unsigned int clave) const
{
    assert(clave < indiceClave);
    list<Figura *>::const_iterator it=figuras.begin();
    unsigned int j=0;
    while(j<clave){
        it++;
        j++;
        }
    return *it;
}

void AdministradorFiguras::procesar() const
{
    list<Figura *>::const_iterator it=figuras.begin();
    while(it!=figuras.end()){
        cout << (*it)->obtenerSuperficie() << endl;
        it++;
    }
}
