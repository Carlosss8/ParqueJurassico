#include "Dinosaurios.h"
#include <cstring>
#include <string>

/// PONER LOS CONSTRUCTORES

void Dinosaurios::setID(int ID){
    _id=ID;
}
void Dinosaurios::setNombre(std::string Nombre){
  strcpy(_nombre, Nombre.c_str());
}

void Dinosaurios::setEspecie(std::string Especie){
    strcpy(_especie,Especie.c_str());
}

void Dinosaurios::setEdad(int Edad){
    _edad=Edad;
}
void Dinosaurios::setTipoADN(std::string TipoADN){
    strcpy(_tipoADN,TipoADN.c_str());
}
void Dinosaurios::setFechaIncubacion(Fecha FechaIncubacion){
    _fechaIncubacion=FechaIncubacion;
}
void Dinosaurios::setNumeroCercado(int NumeroCercado){
    _numeroCercado=NumeroCercado;
}
void Dinosaurios::setEstado(bool Estado){
    _estado=Estado;
}

int Dinosaurios::getID(){
    return _id;
}
std::string Dinosaurios::getNombre(){
    return _nombre;
}
std::string Dinosaurios::getEspecie(){
    return _especie;
}
int Dinosaurios::getEdad(){
    return _edad;
}
std::string Dinosaurios::getTipoADN(){
    return _tipoADN;
}
Fecha Dinosaurios::getFechaIncubacion(){
    return _fechaIncubacion;
}
int Dinosaurios::getNumeroCercado(){
    return _numeroCercado;
}
bool Dinosaurios::getEstado(){
    return _estado;
}

void Dinosaurios::Cargar(){
int dia,mes,anio;
Dinosaurios dino;
cout << "-------------------------------" << endl ;
cout << ">>>>>>>>>>>INGRESAR<<<<<<<<<<<<" << endl ;
cout << "ID:" ;
cin >> _id;
cout << "Nombre: " ;
std::getline(cin,_nombre);
cout << "Especie(tipo): " ;
std::getline(cin,_especie);
cout << "Edad: " ;
cin >> _edad;
cout << "Fecha de Incubacion: ";
cin >> dia;
cin >> mes;
cin >> anio;
///PONER LOS SET DE FECHA
cout << "Numero de cercado en el que habita: " ;
cin >> _numeroCercado;
dino.setEstado(true);
}



