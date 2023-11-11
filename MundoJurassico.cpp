#include "MundoJurassico.h"
#include <string>
#include <cstring>


MundoJurassico::MundoJurassico(int IDInforme, int CantDePublico, float Presupuesto, Fecha FechaDeInforme, int Accidentes, std::string Observaciones){
    _idInforme=IDInforme;
    _cantDePublico=CantDePublico;
    _presupuesto=Presupuesto;
    _fechaDeInforme=
    _accidentes=Accidentes;
    strcpy(_observaciones, Observaciones.c_str());
}
MundoJurassico::MundoJurassico(){
    _idInforme=0000;
    _cantDePublico=00;
    _presupuesto=0.0;
    _fechaDeInforme=
    _accidentes=0;
    strcpy(_observaciones, " ");
}

void MundoJurassico::setIDInforme(int IDInforme){
    _idInforme=IDInforme;
}
void MundoJurassico::setCantDePublico(int CantDePublico){
    _cantDePublico=CantDePublico;
}
void MundoJurassico::setPresupuesto(float Presupuesto){
    _presupuesto=Presupuesto;
}
void MundoJurassico::setFechaDeInfomre(Fecha FechaDeInforme){
    _fechaDeInforme=FechaDeInforme;
}
void MundoJurassico::setAccidentes(int Accidentes){
    _accidentes=Accidentes;
}
void MundoJurassico::setObservaciones(std::string Observaciones){
    strcpy(_observaciones, Observaciones.c_str());
}

int MundoJurassico::getIDInforme(){
    return _idInforme;
}
int MundoJurassico::getCantDePublico(){
    return _cantDePublico;
}
float MundoJurassico::getPresupuesto(){
    return _presupuesto;
}
Fecha MundoJurassico::getFechaDeInforme(){
    return _fechaDeInforme;
}
int MundoJurassico::getAccidentes(){
    return _accidentes;
}
std::string MundoJurassico::getObservaciones(){
string AuxObservaciones=_observaciones;
    return AuxObservaciones;
}

void MundoJurassico::Cargar(){
string Observaciones;
int dia, mes, anio;
cout << "-------------------------------" << endl ;
cout << ">>>>>>>>>>>INGRESAR<<<<<<<<<<<<" << endl ;
cout << "ID: " ;
cin >> _idInforme;
cout << "Fecha del Informe: " ;
cout << "Dia: " ;
cin >> dia;
cout << "Mes: " ;
cin >> mes;
cout << "Anio: " ;
cin >> anio;
_fechaDeInforme.setDia(dia);
_fechaDeInforme.setMes(mes);
_fechaDeInforme.setAnio(anio);
cout << "Accidentes: " ;
cin >> _accidentes;
cout << "Observaciones: " ;
cin >> _observaciones;
}

void MundoJurassico::Mostrar(){
cout << "-------------------------------" << endl ;
cout <<"ID: " << _idInforme<< endl ;
cout <<"Fecha del informe: " << _fechaDeInforme<< endl ;
cout <<"Accidentes: " << _accidentes<< endl ;
cout <<"Observaciones: " << _observaciones<< endl ;
}


