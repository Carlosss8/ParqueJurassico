#include "Operaciones.h"
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

Operaciones::Operaciones(int ID, bool Control, std::string Vehiculos, std::string Dron, std::string Electricidad, std::string Actividad){
_id=ID;
_control=Control;
strcpy(_vehiculos, Vehiculos.c_str());
strcpy(_dron, Dron.c_str());
strcpy(_electricidad, Electricidad.c_str());
strcpy(_actividad, Actividad.c_str());
}
Operaciones::Operaciones(){
_id=0000;
_control=false;
strcpy(_vehiculos," ");
strcpy(_dron," ");
strcpy(_electricidad," ");
strcpy(_actividad," ");
}

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

void Operaciones::setID(int ID){
    _id=ID;
}

int Operaciones::getID(){
    return _id;
}

bool Operaciones::getControl(){
    return _control;
}
std::string Operaciones::getVehiculos(){
string AuxVehiculos=_vehiculos;
    return AuxVehiculos;
}
std::string Operaciones::getDron(){
string AuxDron=_dron;
    return AuxDron;
}
std::string Operaciones::getElectricidad(){
string AuxElectricidad=_electricidad;
    return AuxElectricidad;
}
std::string Operaciones::getActividad(){
string AuxActividad=_actividad;
    return AuxActividad;
}

void Operaciones::CargarVehiculos(){
cout << "-------------------------------" << endl ;
cout << ">>>>>>>>>>>INGRESAR<<<<<<<<<<<<" << endl ;
cout << "ID: " ;
cin >> _id;
cout << "Nombre del Vehiculo: ";
cin >> _vehiculos;
cout << "Su actividad: " ;
cin >> _actividad;
}

void Operaciones::CargarDron(){
cout << "-------------------------------" << endl ;
cout << ">>>>>>>>>>>INGRESAR<<<<<<<<<<<<" << endl ;
cout << "ID: " ;
cin >> _id;
cout << "Nombre del Dron: ";
cin>>_dron;
cout << "Su actividad: " ;
cin >> _actividad;
}

void Operaciones::CargarElectricidad(){
cout << "-------------------------------" << endl ;
cout << ">>>>>>>>>>>INGRESAR<<<<<<<<<<<<" << endl ;
cout << "ID: " ;
cin >> _id;
cout << "Zona de electricidad: ";
cin>> _electricidad;
cout << "Su actividad: " ;
cin>> _actividad;
}

void Operaciones::MostrarVehiculos(){
cout << "-------------------------------" << endl ;
cout << "ID: " << _id << endl;
cout << "Vehiculo: " << _vehiculos << endl ;
cout << "Actividad: " << _actividad << endl ;
}

void Operaciones::MostrarDron(){
cout << "-------------------------------" << endl ;
cout << "ID: " << _id << endl;
cout << "Vehiculo: " << _dron << endl ;
cout << "Actividad: " << _actividad << endl ;

}
void Operaciones::MostrarElectricidad(){
cout << "-------------------------------" << endl ;
cout << "ID: " << _id << endl;
cout << "Vehiculo: " << _electricidad << endl ;
cout << "Actividad: " << _actividad << endl ;

}
