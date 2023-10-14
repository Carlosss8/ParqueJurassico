#ifndef CERCADOS_H
#define CERCADOS_H


class Cercados{
private:
    char _especie[30];
    int _id;
    int _numeroCercado;
    bool _estado;
    char _nombreCercado[50];

public:
    void setEspecie(std::string Especie);
    void setID(int ID);
    void setNumeroCercado(int NumeroCercado);
    void setEstado(bool Estado);
    void setNombreCercado(std::string NombreCercado);

    std::string getEspecie();
    int getID();
    int getNumeroCercado();
    bool getEstado();
    std::string getNombreCercado();

    void Cargar();

};

#endif // CERCADOS_H
