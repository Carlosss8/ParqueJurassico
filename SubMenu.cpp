#include "SubMenu.h"
#include <iostream>
#include "Dinosaurios.h"
#include "DinosauriosArchivo.h"
#include "CriarHibrido.h"
#include "CriarHibridoArchivo.h"
#include "Cercados.h"
#include "CercadoArchivo.h"
#include "Especies.h"
#include "EspecieArchivo.h"
#include "Laboratorio.h"
#include "LaboratorioArchivo.h"
#include "MundoJurassico.h"
#include "MundoJurassicoArchivo.h"
#include "Operaciones.h"
#include "OperacionesArchivo.h"
#include "Fecha.h"

using namespace std;

void SubMenu::SubmenuCargar(int Op){
switch (Op){
case 1 :{
Dinosaurios dino;
DinosauriosArchivo Arch("Dinosaurios.dat");
dino.Cargar();
bool r=Arch.Guardar(dino);
if (r){cout << "Datos guardado con exito" << endl;}
system("pause");
system("cls");
    break;
}
case 2 :{
Cercados cerca;
CercadoArchivo arch("Cercados.dat");
cerca.Cargar();
bool r=arch.Guardar(cerca);
if(r){cout << "Datos guardado con exito"<< endl;}
system("pause");
system("cls");
    break;
}
case 3:{
Laboratorio labo;
LaboratorioArchivo arch("Laboratorio.dat");
labo.Cargar();
bool r=arch.Guardar(labo);
if(r){cout << "Datos guardado con exito"<< endl;}
system("pause");
system("cls");
    break;
}
case 4 :{
Operaciones ope;
OperacionesArchivo arch("Operaciones.dat");
int op;
cout << "-------------------------------------" << endl  ;
cout << " --Elija la opcion que desea cargar--" << endl  ;
cout << "           1.Dron                    " << endl  ;
cout << "           2.Electricidad            " << endl  ;
cout << "           3.Vehiculos               " << endl  ;
cout << "-------------------------------------" << endl  ;
cin >> op;
system("cls");
if(op==1){
    ope.CargarDron();
    bool r=arch.Guardar(ope);
    if (r){cout << "Datos guardado con exito"<< endl;}
}
        else if(op==2){
            ope.CargarElectricidad();
            bool r=arch.Guardar(ope);
            if (r){cout << "Datos guardado con exito"<< endl;}
        }
            else if (op==3){
                ope.CargarVehiculos();
                bool r=arch.Guardar(ope);
                if (r){cout << "Datos guardado con exito"<< endl;}
            }
system("pause");
system("cls");
    break;
}
case 5:{
MundoJurassico info;
MundoJurassicoArchivo arch("Informes.dat");
info.Cargar();
bool r=arch.Guardar(info);
if (r){cout << "Datos guardado con exito"<< endl;}
system("pause");
system("cls");
    break;
}
case 0:
menuPrincipal.Menu();
    break;
}
}

void SubMenu::SubMenuListar(int Op){
switch(Op){
case 1:{
Dinosaurios dino;
DinosauriosArchivo arch("Dinosaurios.dat");
int Cont=arch.ContarRegistros();

for (int x=0;x<Cont;x++){
    dino=arch.Leer(x);
    dino.Mostrar();
}
cout << endl;
system("pause");
system("cls");
    break;
}
case 2:{
Cercados cerca;
CercadoArchivo arch("Cercados.dat");
int Cont=arch.ContarRegistros();

for (int x=0;x<Cont;x++){
    cerca=arch.Leer(x);
    cerca.Mostrar();
}
cout << endl;
system("pause");
system("cls");
    break;
}
case 3:{
Laboratorio labo;
LaboratorioArchivo arch("Laboratorio.dat");
int Cont=arch.ContarRegistros();

for (int x=0;x<Cont;x++){
    labo=arch.Leer(x);
    labo.Mostrar();
}
cout << endl ;
system("pause");
system("cls");
    break;
}
case 4:{
Operaciones Ope;
OperacionesArchivo arch("Operaciones.dat");
int Cont=arch.ContarRegistros();
int op;
cout << "-------------------------------------" << endl  ;
cout << " --Elija la opcion que desea Listar--" << endl  ;
cout << "           1.Dron                    " << endl  ;
cout << "           2.Electricidad            " << endl  ;
cout << "           3.Vehiculos               " << endl  ;
cout << "-------------------------------------" << endl  ;
cin >> op;

if(op==1){
    for (int x=0;x<Cont;x++){
        Ope=arch.Leer(x);
        Ope.MostrarDron();
    }
}
    else if(op==2){
        for (int x=0;x<Cont;x++){
            Ope=arch.Leer(x);
            Ope.MostrarElectricidad();
        }
    }
        else if (op==3){
            for (int x=0;x<Cont;x++){
                Ope=arch.Leer(x);
                Ope.MostrarVehiculos();
            }
        }

cout << endl ;
system("pause");
system("cls");
    break;
}
case 5:{
MundoJurassico info;
MundoJurassicoArchivo arch("Cercados.dat");
int Cont=arch.ContarRegistros();

for (int x=0;x<Cont;x++){
    info=arch.Leer(x);
    info.Mostrar();
}
    break;
}
case 0:{
menuPrincipal.Menu();
    break;
}

}

}
void SubMenu::SubMenuConsultas(int Op){
switch (Op){
case 1:{

    break;
}
case 2:{

    break;
}
case 3:{

    break;
}
case 4:{

    break;
}
case 5:{

    break;
}
case 0:{

    break;
}


}

}

