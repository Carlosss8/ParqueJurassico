#ifndef FECHA_H
#define FECHA_H
#include <string>

class Fecha{
private:
    int _dia, _mes, _anio;
    int _diaSemana;

public:
    int getDia();
    int getMes();
    int getAnio();
    std::string getNombreDia();
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    Fecha();
    Fecha(int dia, int mes, int anio);
    std::string toString();

};

#endif // FECHA_H
