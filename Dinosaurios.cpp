#include "Dinosaurios.h"
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
Dinosaurios::Dinosaurios(int ID, std::string Nombre, std::string Especie, int Edad, std::string TipoADN, Fecha FechaDeIncubacion, int NumeroCercado, bool Estado){
    _id=ID;
    strcpy(_nombre, Nombre.c_str());
    _edad=Edad;
    strcpy(_tipoADN, TipoADN.c_str());
    _fechaIncubacion= FechaDeIncubacion;
    _numeroCercado=NumeroCercado;
    _estado=Estado;
}

Dinosaurios::Dinosaurios(){
    _id=0000;
    strcpy(_nombre, " ");
    strcpy(_especie, " ");
    _edad=0;
    strcpy(_tipoADN, " ");
    _fechaIncubacion= Fecha();
    _numeroCercado=0;
    _estado=false;
}

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
string AuxNombre=_nombre;
    return AuxNombre;
}
std::string Dinosaurios::getEspecie(){
string AuxEspecie=_especie;
    return AuxEspecie;
}
int Dinosaurios::getEdad(){
    return _edad;
}
std::string Dinosaurios::getTipoADN(){
string AuxTipoADN=_tipoADN;
    return AuxTipoADN;
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
///PONER ADN
void Dinosaurios::Cargar(){
int dia,mes,anio;
Dinosaurios dino;
cout << "-------------------------------" << endl ;
cout << ">>>>>>>>>>>INGRESAR<<<<<<<<<<<<" << endl ;
cout << "ID:" ;
cin >> _id;
cout << "Nombre: " ;
cin >> _nombre;
cout << "Especie(tipo): " ;
cin>>_especie;
cout << "Edad: " ;
cin >> _edad;
cout << "Fecha de Incubacion: " << endl;
cout << "Dia: " ;
cin >> dia;
cout << "Mes: " ;
cin >> mes;
cout << "Anio: " ;
cin >> anio;
_fechaIncubacion.setDia(dia);
_fechaIncubacion.setMes(mes);
_fechaIncubacion.setAnio(anio);
cout << "Numero de cercado en el que habita: " ;
cin >> _numeroCercado;
dino.setEstado(true);
}

void Dinosaurios::Mostrar(){
cout << "-------------------------------" << endl ;
cout <<"ID: "<< _id<< endl ;
cout <<"Nombre: " << _nombre << endl ;
cout <<"Tipo: "<< _especie << endl ;
cout <<"Edad: " << _edad << endl ;
cout <<"Fecha de Incubacion: "<< _fechaIncubacion.toString() << endl ;
cout << "Numero de cercado en el que habita: " << _numeroCercado << endl;
}



