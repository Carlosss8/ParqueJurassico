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
    int BuscarPorNombre(std::string NombreDinosaurio);
    int BuscarPorTipo(std::string TipoDinosaurio);
    int BuscarPorNumeroDeCercado(int NumeroCercado);
    int BuscarPorADN(std::string ADN); //PROBAR




};

#endif // DINOSAURIOSARCHIVO_H
