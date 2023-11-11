#ifndef DINOSAURIOS_H
#define DINOSAURIOS_H
#include "Fecha.h"

class Dinosaurios{
protected:
    int _id;
    char _nombre[50];
    char _especie[30];
    int _edad;
    char _tipoADN[15];
    Fecha _fechaIncubacion;
    int _numeroCercado;
    bool _estado;

public:

    Dinosaurios(int ID, std::string Nombre, std::string Especie, int Edad, std::string TipoADN, Fecha FechaDeIncubacion,
                int NumeroCercado, bool Estado);

    Dinosaurios();

    void setID(int ID);
    void setNombre(std::string Nombre);
    void setEspecie(std::string Especie);
    void setEdad(int Edad);
    void setTipoADN(std::string TipoADN);
    void setFechaIncubacion(Fecha FechaIncubacion);
    void setNumeroCercado(int NumeroCercado);
    void setEstado(bool Estado);

    int getID();
    std::string getNombre();
    std::string getEspecie();
    int getEdad();
    std::string getTipoADN();
    Fecha getFechaIncubacion();
    int getNumeroCercado();
    bool getEstado();

    void Cargar();
    void Mostrar();

};

#endif // DINOSAURIOS_H
