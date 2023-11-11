#ifndef CERCADOARCHIVO_H
#define CERCADOARCHIVO_H
#include "Cercados.h"
#include <string>

class CercadoArchivo{
private:
    std::string _nombreArchivo;

public:
    CercadoArchivo(std::string nombreArchivo);
    bool Guardar(Cercados reg);
    bool Guardar(Cercados reg, int nroRegistro);
    int ContarRegistros();
    Cercados Leer(int nroRegistro);
    int Buscar(int IDCercados);
};

#endif // CERCADOARCHIVO_H
