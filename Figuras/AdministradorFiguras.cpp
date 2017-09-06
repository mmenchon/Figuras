#include "AdministradorFiguras.h"
#include <assert.h>
using namespace std;


AdministradorFiguras::AdministradorFiguras()
{

}

AdministradorFiguras::~AdministradorFiguras()
{
    //dtor
}
void AdministradorFiguras::agregar(Figura* figura)
{
    figuras.push_back(figura);
}

void AdministradorFiguras::eliminar(unsigned int clave)
{
    assert(figuras.size() < clave);
    list<Figura*>::iterator it=figuras.begin();
    int j=0;
    while(j<clave){
        it++;
        j++;
        }
    figuras.erase(it);
}

Figura* AdministradorFiguras::obtener(unsigned int clave) const
{
    assert(figuras.size() > clave);
    list<Figura*>::iterator it=figuras.begin();
    int j=0;
    while(j<clave){
        it++;
        j++;
        }
    return *it;
}

void AdministradorFiguras::procesar() const
{
    list<Figura*>::iterator it=figuras.begin();
    while(it!=figuras.end()){
        cout << it->obtenerSuperficie();<< endl;
    }
}
