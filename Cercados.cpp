#include "Cercados.h"
#include <cstring>
#include <string>

Cercados::Cercados(std::string Especie, int ID, int NumeroCercado, bool Estado, std::string NombreCercado){
    strcpy(_especie, Especie);
    _id=ID;
    _numeroCercado=NumeroCercado;
    _estado=Estado;
    strcpy(_nombreCercado, NombreCercado);
}
Cercados::Cercados(){
    strcpy(_especie, " ");
    _id=0000;
    _numeroCercado=0;
    _estado=false;
    strcpy(_nombreCercado, " ");
}

void Cercados::setEspecie(std::string Especie){
    strcpy(_especie, Especie.c_str());
}
void Cercados::setID(int ID){
    _id=ID;
}
void Cercados::setNumeroCercado(int NumeroCercado){
    _numeroCercado=NumeroCercado;
}
void Cercados::setEstado(bool Estado){
    _estado=Estado;
}
void Cercados::setNombreCercado(std::string NombreCercado){
    strcpy(_nombreCercado, NombreCercado.c_str());
}

std::string Cercados::getEspecie(){
string AuxEspecie=_especie;
    return AuxEspecie;
}
int Cercados::getID(){
    return _id;
}
int Cercados::getNumeroCercado(){
    return _numeroCercado;
}
bool Cercados::getEstado(){
    return _estado;
}
std::string Cercados::getNombreCercado(){
string AuxNombreCercado=_nombreCercado;
    return AuxNombreCercado;
}
void Cercados::Cargar(){
Cercados Objcercados;
string op;
cout << "-------------------------------" << endl ;
cout << ">>>>>>>>>>>INGRESAR<<<<<<<<<<<<" << endl ;
cout << "Especie: ";
std::getline(cin,_especie);
cout << "ID: " ;
cin >> _id;
cout << "Numero del cercado: " ;
cin >> _numeroCercado;
cout << "Nombre del cercado: " :
std::getline(cin,_nombreCercado);
cout << "El cercado esta activo? (S O N): " ;
std::getline(cin,op);
if (op=="S"){Objcercados.setEstado(true);}
else{Objcercados.setEstado(false);}
}

void Cercados::Mostrar(){
cout << "-------------------------------" << endl ;
cout << "Especie: " << _especie << endl ;
cout << "ID: " << _id << endl ;
cout << "Numero del cercado: " << _numeroCercado << endl ;
cout << "Nombre del cercado: " << _nombreCercado << endl ;
}
