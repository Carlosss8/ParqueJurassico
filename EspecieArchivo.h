#ifndef ESPECIEARCHIVO_H
#define ESPECIEARCHIVO_H
#include "Especies.h"
#include <string>

class EspecieArchivo{
private:
    std::string _nombreArchivo;

public:
    EspecieArchivo(std::string nombreArchivo);
    bool Guardar(Especies reg);
    bool Guardar(Especies reg, int nroRegistro);
    int ContarRegistros();
    Especies Leer(int nroRegistro);
};

#endif // ESPECIEARCHIVO_H
