#ifndef OPERACIONESARCHIVO_H
#define OPERACIONESARCHIVO_H
#include "Operaciones.h"
#include <string>

class OperacionesArchivo{
private:
    std::string _nombreArchivo;

public:
    OperacionesArchivo(std::string nombreArchivo);
    bool Guardar(Operaciones reg);
    bool Guardar(Operaciones reg, int nroRegistro);
    int ContarRegistros();
    Operaciones Leer(int nroRegistro);
    int Buscar(int IDOperaciones);
};

#endif // OPERACIONESARCHIVO_H
