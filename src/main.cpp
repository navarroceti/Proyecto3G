#include <iostream>
#include <Mascota.hpp>

int main(int argc, char const *argv[])
{
    std::cout<<"Juego de mascotas"<<std::endl;

    Mascota m1,m2,m3;
    
    m1.EstablecerNombre("Firulais");
    m2.EstablecerNombre("Puchungis");
    m3.EstablecerNombre("Ramonsito");

    m1.DecirNombre();
    m2.DecirNombre();
    m3.DecirNombre();

    return 0;
}
