#include "Operaciones.h"
#include <string>
#include <cstring>

void Operaciones::setControl(bool Control){
    _control=Control;
}
void Operaciones::setVehiculos(std::string Vehiculos){
    strcpy(_vehiculos,Vehiculos.c_str());
}
void Operaciones::setDron(std::string Dron){
    strcpy(_dron,Dron.c_str());
}
void Operaciones::setElectricidad(std::string Electricidad){
    strcpy(_electricidad,Electricidad.c_str());
}
void Operaciones::setActividad(std::string Actividad){
    strcpy(_actividad,Actividad.c_str());
}

bool Operaciones::getControl(){
    return _control;
}
std::string Operaciones::getVehiculos(){
    return _vehiculos;
}
std::string Operaciones::getDron(){
    return _dron;
}
std::string Operaciones::getElectricidad(){
    return _electricidad
}
std::string Operaciones::getActividad(){
    return _actividad;
}

void Operaciones::CargarVehiculos(){


}
