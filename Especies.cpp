#include "Especies.h"
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
Especies::Especies(std::string Periodo, std::string Tipo, int Cantidad, bool Estado){
    strcpy(_periodo, Periodo.c_str());
    strcpy(_tipo, Tipo.c_str());
    _cantidad=Cantidad;
    _estado=Estado;
}
Especies::Especies(){
    strcpy(_periodo, " ");
    strcpy(_tipo, " ");
    _cantidad=0;
    _estado=false;
}

void Especies::setPeriodo(std::string Periodo){
    strcpy(_periodo, Periodo.c_str());
}
void Especies::setTipo(std::string Tipo){
    strcpy(_tipo, Tipo.c_str());
}
void Especies::setCantidad(int Cantidad){
    _cantidad=Cantidad;
}
void Especies::setEstado(bool Estado){
    _estado=Estado;
}
std::string Especies::getPeriodo(){
string AuxPeriodo=_periodo;
    return AuxPeriodo;
}
std::string Especies::getTipo(){
string AuxTipo=_tipo;
    return AuxTipo;
}
int Especies::getCantidad(){
    return _cantidad;
}
bool Especies::getEstado(){
    return _estado;
}

void Especies::Listar(){
cout << "--------------------------------" << endl ;
cout << "Periodo: " ;
}
