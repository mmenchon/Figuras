#include <iostream>
#include "AdministradorFiguras.h"
#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"

using namespace std;

int main()
{
    AdministradorFiguras* listaFiguras = new AdministradorFiguras();
    Circulo* a = new Circulo(2,6,4);
    Rectangulo* b = new Rectangulo(2, 4,9,4);
    listaFiguras->agregar(a);
    unsigned int c=listaFiguras->agregar(b);
    listaFiguras->procesar();
    cout<<listaFiguras->obtener(1)<< endl;
    cout << "Hello world!" << endl;
    return 0;
}
