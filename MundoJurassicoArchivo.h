#ifndef MUNDOJURASSICOARCHIVO_H
#define MUNDOJURASSICOARCHIVO_H
#include "MundoJurassico.h"
#include <string>

class MundoJurassicoArchivo{
private:
    std::string _nombreArchivo;

public:
    MundoJurassicoArchivo(std::string nombreArchivo);
    bool Guardar(MundoJurassico reg);
    bool Guardar(MundoJurassico reg, int nroRegistro);
    int ContarRegistros();
    MundoJurassico Leer(int nroRegistro);
    int Buscar(int IDMundoJurassico);

};

#endif // MUNDOJURASSICOARCHIVO_H
