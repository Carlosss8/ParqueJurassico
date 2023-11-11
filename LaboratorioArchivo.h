#ifndef LABORATORIOARCHIVO_H
#define LABORATORIOARCHIVO_H
#include "Laboratorio.h"
#include <string>

class LaboratorioArchivo{
private:
    std::string _nombreArchivo;

public:
    LaboratorioArchivo(std::string nombreArchivo);
    bool Guardar(Laboratorio reg);
    bool Guardar(Laboratorio reg, int nroRegistro);
    int ContarRegistros();
    Laboratorio Leer(int nroRegistro);
    int Buscar(int IDLaboratorio);
};

#endif // LABORATORIOARCHIVO_H
