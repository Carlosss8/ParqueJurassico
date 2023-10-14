#ifndef DINOSAURIOS_H
#define DINOSAURIOS_H


class Dinosaurios{
private:
    int _id;
    char _nombre[50];
    char _especie[30];
    int _edad;
    char _tipoADN[15];
    Fecha _fechaIncubacion;
    int _numeroCercado;
    bool _estado;

public:

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

};

#endif // DINOSAURIOS_H
