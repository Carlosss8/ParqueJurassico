#ifndef MUNDOJURASSICO_H
#define MUNDOJURASSICO_H
#include "Fecha.h"

class MundoJurassico{
private:
    int _idInforme;
    int _cantDePublico;
    float _presupuesto;
    Fecha _fechaDeInforme;
    int _accidentes;
    char _observaciones[100];

public:
    MundoJurassico(int IDInforme, int CantDePublico, float Presupuesto, Fecha FechaDeInforme, int Accidentes, std::string Observaciones);
    MundoJurassico();

    void setIDInforme(int IDInforme);
    void setCantDePublico(int CantDePublico);
    void setPresupuesto(float Presupuesto);
    void setFechaDeInfomre(Fecha FechaDeInforme);
    void setAccidentes(int Accidentes);
    void setObservaciones(std::string Observaciones);

    int getIDInforme();
    int getCantDePublico();
    float getPresupuesto();
    Fecha getFechaDeInforme();
    int getAccidentes();
    std::string getObservaciones();

    void Cargar();
    void Mostrar();



};

#endif // MUNDOJURASSICO_H
