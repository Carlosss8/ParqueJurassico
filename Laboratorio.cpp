#include "Laboratorio.h"
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
Laboratorio::Laboratorio(int ID, std::string ADN, std::string Fosil, Fecha FechaDeEncuentro, int Edad, std::string Periodo){
    _id=ID;
    strcpy(_adn, ADN.c_str());
    strcpy(_fosil, Fosil.c_str());
    _fechaDeEncuentro;
    _edad=Edad;
    strcpy(_periodo, Periodo.c_str());
}
Laboratorio::Laboratorio(){
    _id=0000;
    strcpy(_adn, " ");
    strcpy(_fosil, " ");
    _fechaDeEncuentro;
    _edad=0;
    strcpy(_periodo, " ");
}


void Laboratorio::setID(int ID){
    _id=ID;
}

void Laboratorio::setADN(std::string ADN){
    strcpy(_adn, ADN.c_str());
}

void Laboratorio::setFosil(std::string Fosil){
    strcpy(_fosil, Fosil.c_str());
}

void Laboratorio::setFechaDeEncuentro(Fecha FechaDeEncuentro){
    _fechaDeEncuentro=FechaDeEncuentro;
}

void Laboratorio::setEdad(int Edad){
    _edad=Edad;
}

void Laboratorio::setPeriodo(std::string Periodo){
    strcpy(_periodo, Periodo.c_str());
}

int Laboratorio::getID(){
    return _id;
}

std::string Laboratorio::getADN(){
string AuxADN=_adn;
    return AuxADN;
}

std::string Laboratorio::getFosil(){
string AuxFosil=_fosil;
    return AuxFosil;
}

Fecha Laboratorio::getFechaDeEncuentro(){
    return _fechaDeEncuentro;
}

int Laboratorio::getEdad(){
    return _edad;
}

std::string Laboratorio::getPeriodo(){
string AuxPeriodo=_periodo;
    return AuxPeriodo;
}

void Laboratorio::Cargar(){
int dia, mes,anio;
cout << "-------------------------------" << endl ;
cout << ">>>>>>>>>>>INGRESAR<<<<<<<<<<<<" << endl ;
cout << "ID: " ;
cin >> _id;
cout << "ADN: " ;
cin >> _adn;
cout << "Fosil: " ;
cin>> _fosil;
cout << "Fecha encontrado del fosil: " ;
cout << "Dia: " ;
cin >> dia ;
cout << "Mes: " ;
cin >> mes;
cout << "Anio: " ;
cin >> anio;
_fechaDeEncuentro.setDia(dia);
_fechaDeEncuentro.setMes(mes);
_fechaDeEncuentro.setAnio(anio);
cout << "Edad: " ;
cin >> _edad;
cout << "Periodo: " ;
cin >>_periodo;
}

void Laboratorio::Mostrar(){
cout << "-------------------------------" << endl ;
cout <<"ID: " << _id<< endl ;
cout <<"ADN: " << _adn<< endl ;
cout <<"Fosil: " << _fosil<< endl ;
cout <<"Fecha encontrado: " << _fechaDeEncuentro.toString()<< endl ;
cout <<"Edad: " << _edad<< endl ;
cout <<"Periodo: " << _periodo<< endl ;
}


