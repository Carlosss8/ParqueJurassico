#include <iostream>
#include "MenuPrincipal.h"
#include "SubMenu.h"
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

void MenuPrincipal::Menu(){
int op;
SubMenu sub;
bool flag=true;
do{
cout << "-------------------------------------" << endl  ;
cout << "           1.Cargar Datos            " << endl  ;
cout << "           2.Listar Datos            " << endl  ;
cout << "           3.Consultar Datos         " << endl  ;
cout << "           4.Editar Datos            " << endl  ;
cout << "           5.Informes                " << endl  ;
cout << "           6.Creditos                " << endl  ;
cout << "           7.Salir                   " << endl  ;
cout << "-------------------------------------" << endl  ;
cout << "Ingrese la opcion deseada: " ;
cin >> op;
system("cls");

switch(op){
case 1:{
bool flag2=true;
int op2;
do{
cout << "-------------------------------------" << endl  ;
cout << " --Elija la opcion que desea cargar--" << endl  ;
cout << "           1.Dinosaurios             " << endl  ;
cout << "           2.Cercados                " << endl  ;
cout << "           3.Laboratorio             " << endl  ;
cout << "           4.Operaciones             " << endl  ;
cout << "           5.Informes                " << endl  ;
cout << "           0.Volver                  " << endl  ;
cout << "-------------------------------------" << endl  ;
cin >> op2;
system("cls");
sub.SubmenuCargar(op2);

}while (flag2==true);
    break;
}
case 2:{
bool flag3=true;
int op3;
do{
        //LISTAR ESPECIES
cout << "-------------------------------------" << endl  ;
cout << " --Elija la opcion que desea listar--" << endl  ;
cout << "           1.Dinosaurios             " << endl  ;
cout << "           2.Cercados                " << endl  ;
cout << "           3.Laboratorio             " << endl  ;
cout << "           4.Operaciones             " << endl  ;
cout << "           5.Informes                " << endl  ;
cout << "           0.Volver                  " << endl  ;
cout << "-------------------------------------" << endl  ;
cin >> op3;
system("cls");
sub.SubMenuListar(op3);

}while (flag3==true);

    break;
}

case 3:{
bool flag4=true;
int op4;
do{
cout << "-------------------------------------" << endl  ;
cout << "-Elija la opcion que desea consultar-" << endl  ;
cout << "           1.Dinosaurios             " << endl  ;
cout << "           2.Cercados                " << endl  ;
cout << "           3.Laboratorio             " << endl  ;
cout << "           4.Operaciones             " << endl  ;
cout << "           5.Informes                " << endl  ;
cout << "           0.Volver                  " << endl  ;
cout << "-------------------------------------" << endl  ;
cin >> op4;
system("cls");
sub.SubMenuConsultas(op4);

}while (flag4==true);
    break;
}

case 4:{
bool flag5=true;
int op5;
do{
cout << "-------------------------------------" << endl  ;
cout << " --Elija la opcion que desea editar--" << endl  ;
cout << "           1.Dinosaurios             " << endl  ;
cout << "           2.Cercados                " << endl  ;
cout << "           3.Laboratorio             " << endl  ;
cout << "           4.Informes                " << endl  ;
cout << "           5.Operaciones             " << endl  ;
cout << "           0.Volver                  " << endl  ;
cout << "-------------------------------------" << endl  ;
cin >> op5;
system("cls");
sub.SubMenuEditar(op5);

}while (flag5==true);
    break;
}

case 5:
    break;
case 7:
flag=false;
    break;
}

}while (flag==true);

}
