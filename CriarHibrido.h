#ifndef CRIARHIBRIDO_H
#define CRIARHIBRIDO_H
#include "Dinosaurios.h"

class CriarHibrido:public Dinosaurios{
private:
    Dinosaurios _dinosaurio;
    float _presupuesto;

public:
    void setDinosaurio(Dinosaurios Dino);
    void setPresupuesto(float Presupuesto);

    Dinosaurios getDinosaurios();
    float getPresupuesto();

    void Cargar();
    void Mostrar();

};

#endif // CRIARHIBRIDO_H
