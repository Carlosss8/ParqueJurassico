#include "CriarHibrido.h"

void CriarHibrido::setDinosaurio(Dinosaurios Dino){
    _dinosaurio=Dino;
}
void CriarHibrido::setPresupuesto(float Presupuesto){
    _presupuesto=Presupuesto;
}

Dinosaurios CriarHibrido::getDinosaurios(){
    return _dinosaurio;
}
float CriarHibrido::getPresupuesto(){
    return _presupuesto;
}

void CriarHibrido::Cargar(){
cout << "-------------------------------" << endl ;
cout << ">>>>>>>>>>>INGRESAR<<<<<<<<<<<<" << endl ;
Dinosaurios::Cargar();
cout << "Presupuesto del hibrido: " ;
cin >> _presupuesto;
}

void CriarHibrido::Mostrar(){
Dinosaurios::Mostrar();
cout << "Presupuesto: " << _presupuesto << endl ;
}

