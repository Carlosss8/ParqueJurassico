#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "Fecha.h"

class Laboratorio{
private:
    int _id;
    char _adn[15];
    char _fosil[50];
    Fecha _fechaDeEncuentro;
    int _edad;
    char _periodo[50];

public:

    Laboratorio(int ID, std::string ADN, std::string Fosil, Fecha FechaDeEncuentro, int Edad, std::string Periodo);
    Laboratorio();

    void setID(int ID);
    void setADN(std::string ADN);
    void setFosil(std::string Fosil);
    void setFechaDeEncuentro(Fecha FechaDeEncuentro);
    void setEdad(int Edad);
    void setPeriodo(std::string Periodo);

    int getID();
    std::string getADN();
    std::string getFosil();
    Fecha getFechaDeEncuentro();
    int getEdad();
    std::string getPeriodo();

    void Cargar();
    void Mostrar();

};

#endif // LABORATORIO_H
