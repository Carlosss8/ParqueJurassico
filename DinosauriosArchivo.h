#ifndef DINOSAURIOSARCHIVO_H
#define DINOSAURIOSARCHIVO_H
#include "Dinosaurios.h"
#include <string>

class DinosauriosArchivo{
private:
    std::string _nombreArchivo;

public:
    DinosauriosArchivo(std::string nombreArchivo);
    bool Guardar(Dinosaurios reg);
    bool Guardar(Dinosaurios reg, int nroRegistro);
    int ContarRegistros();
    Dinosaurios Leer(int nroRegistro);
    int Buscar(int IDDinosaurios);
};

#endif // DINOSAURIOSARCHIVO_H
