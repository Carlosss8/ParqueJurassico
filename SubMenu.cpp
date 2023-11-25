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
DinosauriosArchivo arch("Dinosaurios.dat");
CercadoArchivo ArchCercado("Cercados.dat");
LaboratorioArchivo ArchLabo("Laboratorio.dat");
OperacionesArchivo ArchOpe("Operaciones.dat");
MundoJurassicoArchivo ArchInforme("MundoJurassico.dat");
switch (Op){
case 1:{
int op;
cout << "-------------------------------------------------" << endl  ;
cout << "---Elija la opcion con la que quiere consultar---" << endl  ;
cout << "                    1.ID                         " << endl  ;
cout << "                    2.Nombre                     " << endl  ;
cout << "                    3.Tipo (Especie)             " << endl  ;
cout << "                    4.Numero de cercado          " << endl  ;
cout << "                    5.ADN                        " << endl  ;
cout << "-------------------------------------------------" << endl  ;
cin >> op;

switch(op){
case 1:{
int ID;
cout << "Introduzca el ID: " ;
cin >> ID;
arch.Buscar(ID);
    break;
}
case 2:{
string Nombre;
cout << "Introduzca el nombre: " ;
cin >> Nombre;
arch.BuscarPorNombre(Nombre);
    break;
}
case 3:{
string Tipo;
cout << "Introduzca el nombre: " ;
cin >> Tipo;
arch.BuscarPorTipo(Tipo);
    break;
}
case 4:{
int NumeroCercado;
cout << "Introduzca el numero de cercado: " ;
cin >> NumeroCercado;
arch.BuscarPorNumeroDeCercado(NumeroCercado);
    break;
}
case 5:{
string ADN;
cout << "Introduzca el ADN: " ;
cin >> ADN;
arch.BuscarPorADN(ADN);
    break;
}

}

    break;
}

//---------------------------

case 2:{
int op;
cout << "-------------------------------------------------" << endl  ;
cout << "---Elija la opcion con la que quiere consultar---" << endl  ;
cout << "                    1.ID                         " << endl  ;
cout << "                    2.Tipo (Especie)             " << endl  ;
cout << "                    3.Numero de cercado          " << endl  ;
cout << "-------------------------------------------------" << endl  ;
cin >> op;

switch(op){
case 1:{
int ID;
cout << "Introduzca el ID: " ;
cin >> ID;
ArchCercado.Buscar(ID);
    break;
}
case 2:{
string Tipo;
cout << "Introduzca el tipo: " ;
cin >> Tipo;
ArchCercado.BuscarPorTipoEspecie(Tipo);
    break;
}
case 3:{
int NumeroCercado;
cout << "Introduzca el numero de cercado: " ;
cin >> NumeroCercado;
ArchCercado.BuscarPorNumeroDeCercado(NumeroCercado);
    break;
}

}

    break;
}
//--------------------------
case 3:{
int op;
cout << "-------------------------------------------------" << endl  ;
cout << "---Elija la opcion con la que quiere consultar---" << endl  ;
cout << "                    1.ID                         " << endl  ;
cout << "                    2.ADN                        " << endl  ;
cout << "-------------------------------------------------" << endl  ;
cin >> op;

switch(op){
case 1:{
int ID;
cout << "Introduzca el ID: " ;
cin >> ID;
ArchLabo.Buscar(ID);
    break;
}
case 2:{
string ADN;
cout << "Introduzca el ADN: " ;
cin >> ADN;
ArchLabo.BuscarPorADN(ADN);
    break;
}
    break;
}

//-------------------------
break;
}

case 4:{
int ID;
cout << "Introduzca el ID de la operacion: " ;
cin >> ID;
ArchOpe.Buscar(ID);
    break;
}

case 5:{
int ID;
cout << "Introduzca el ID del informe: " ;
cin >> ID;
ArchInforme.Buscar(ID);
    break;
}



}

}

void SubMenu::SubMenuEditar(int Op){
Dinosaurios dino;
DinosauriosArchivo arch("Dinosaurios.dat");
switch(Op){
case 1:{
int op;
cout << "-------------------------------------------------" << endl  ;
cout << "--------Elija la opcion que quiera editar--------" << endl  ;
cout << "                    1.Edad                       " << endl  ;
cout << "                    2.ADN                        " << endl  ;
cout << "                    3.Fecha de incubacion        " << endl  ;
cout << "                    4.Nombre de cercado          " << endl  ;
cout << "-------------------------------------------------" << endl  ;
cin >> op;
switch(op){
case 1:{

int ID, Pos;
cout << "ID: " ;
cin >> ID ;
int Cant = arch.ContarRegistros();
  for(int x=0;x<Cant;x++){
    dino= arch.Leer(x);
    if (dino.getID()== ID){
      Pos=x;
    }
  }

    Dinosaurios Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    int Edit;
    cout << "Nuevo edad: ";
    cin >> Edit;
    Aux.setEdad(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}

case 2:{
int ID, Pos;
cout << "ID: " ;
cin >> ID ;
int Cant = arch.ContarRegistros();
  for(int x=0;x<Cant;x++){
    dino= arch.Leer(x);
    if (dino.getID()== ID){
      Pos=x;
    }
  }

    Dinosaurios Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    string Edit;
    cout << "Nuevo ADN: ";
    cin >> Edit;
    Aux.setTipoADN(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}

case 3:{
int ID, Pos;
Fecha fecha;
cout << "ID: " ;
cin >> ID ;
int Cant = arch.ContarRegistros();
  for(int x=0;x<Cant;x++){
    dino= arch.Leer(x);
    if (dino.getID()== ID){
      Pos=x;
    }
  }

    Dinosaurios Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    int dia,mes,anio;
    cout << "Nueva fecha de incubacion: ";
    cout << "Dia: " ;
    cin >> dia;
    cout << "Mes " ;
    cin >> mes;
    cout << "Anio: " ;
    cin >> anio;
    fecha.setDia(dia);
    fecha.setMes(mes);
    fecha.setAnio(anio);
    Aux.setFechaIncubacion(fecha);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}

case 4:{
    int ID, Pos;
    cout << "ID: " ;
    cin >> ID ;
    int Cant = arch.ContarRegistros();
  for(int x=0;x<Cant;x++){
    dino= arch.Leer(x);
    if (dino.getID()== ID){
      Pos=x;
    }
  }

    Dinosaurios Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    int Edit;
    cout << "Nuevo numero de cercado: ";
    cin >> Edit;
    Aux.setNumeroCercado(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}

}
//------------------
    break;
}

case 2:{
Cercados cerca;
CercadoArchivo arch("Cercados.dat");
int op;
cout << "-------------------------------------------------" << endl  ;
cout << "--------Elija la opcion que quiera editar--------" << endl  ;
cout << "                    1.Especie                    " << endl  ;
cout << "                    2.Numero de cercado          " << endl  ;
cout << "                    3.Nombre de cercado          " << endl  ;
cout << "-------------------------------------------------" << endl  ;
cin >> op;
switch (op){
case 1:{
    int ID, Pos;
    cout << "ID: " ;
    cin >> ID ;
    int Cant = arch.ContarRegistros();
    for(int x=0;x<Cant;x++){
    cerca = arch.Leer(x);
    if (cerca.getID()== ID){
      Pos=x;
    }
  }

    Cercados Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    string Edit;
    cout << "Nueva especie: ";
    cin >> Edit;
    Aux.setEspecie(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}

case 2:{
    int ID, Pos;
    cout << "ID: " ;
    cin >> ID ;
    int Cant = arch.ContarRegistros();
    for(int x=0;x<Cant;x++){
    cerca = arch.Leer(x);
    if (cerca.getID()== ID){
      Pos=x;
    }
  }

    Cercados Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    int Edit;
    cout << "Nuevo numero de cercado: ";
    cin >> Edit;
    Aux.setNumeroCercado(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}

case 3:{
    int ID, Pos;
    cout << "ID: " ;
    cin >> ID ;
    int Cant = arch.ContarRegistros();
    for(int x=0;x<Cant;x++){
    cerca = arch.Leer(x);
    if (cerca.getID()== ID){
      Pos=x;
    }
  }

    Cercados Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    string Edit;
    cout << "Nueva especie: ";
    cin >> Edit;
    Aux.setNombreCercado(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}

}

}

//-----------------

case 3:{
Laboratorio labo;
LaboratorioArchivo arch("Laboratorio.dat");

int op;
cout << "-------------------------------------------------" << endl  ;
cout << "--------Elija la opcion que quiera editar--------" << endl  ;
cout << "                    1.ADN                        " << endl  ;
cout << "                    2.Fecha encontrada           " << endl  ;
cout << "                    3.Edad                       " << endl  ;
cout << "-------------------------------------------------" << endl  ;
cin >> op;

switch(op){
case 1:{
    int ID, Pos;
    cout << "ID: " ;
    cin >> ID ;
    int Cant = arch.ContarRegistros();
    for(int x=0;x<Cant;x++){
    labo = arch.Leer(x);
    if (labo.getID()== ID){
      Pos=x;
    }
  }

    Laboratorio Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    string Edit;
    cout << "Nueva especie: ";
    cin >> Edit;
    Aux.setADN(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}
case 2:{
    Fecha fecha;
    int ID, Pos;
    cout << "ID: " ;
    cin >> ID ;
    int Cant = arch.ContarRegistros();
    for(int x=0;x<Cant;x++){
    labo = arch.Leer(x);
    if (labo.getID()== ID){
      Pos=x;
    }
  }

    Laboratorio Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    int dia, mes,anio;
    cout << "Nuevo dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Anio: ";
    cin >> anio;
    fecha.setDia(dia);
    fecha.setMes(mes);
    fecha.setAnio(anio);

    Aux.setFechaDeEncuentro(fecha);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}
case 3:{
    int ID, Pos;
    cout << "ID: " ;
    cin >> ID ;
    int Cant = arch.ContarRegistros();
    for(int x=0;x<Cant;x++){
    labo = arch.Leer(x);
    if (labo.getID()== ID){
      Pos=x;
    }
  }

    Laboratorio Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    int Edit;
    cout << "Nueva especie: ";
    cin >> Edit;
    Aux.setEdad(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}
}

    break;
}

case 4:{
MundoJurassico MJ;
MundoJurassicoArchivo arch("MundoJurassico.dat");

int op;
cout << "-------------------------------------------------" << endl  ;
cout << "--------Elija la opcion que quiera editar--------" << endl  ;
cout << "                 1.Cantidad de publico           " << endl  ;
cout << "                 2.Fecha de informe              " << endl  ;
cout << "                 3.Accidentes                    " << endl  ;
cout << "-------------------------------------------------" << endl  ;
cin >> op;
switch(op){
case 1:{
    int ID, Pos;
    cout << "ID: " ;
    cin >> ID ;
    int Cant = arch.ContarRegistros();
    for(int x=0;x<Cant;x++){
    MJ = arch.Leer(x);
    if (MJ.getIDInforme() == ID){
      Pos=x;
    }
  }

    MundoJurassico Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    int Edit;
    cout << "Nueva especie: ";
    cin >> Edit;
    Aux.setCantDePublico(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}
case 2:{
    Fecha fecha;
    int ID, Pos;
    cout << "ID: " ;
    cin >> ID ;
    int Cant = arch.ContarRegistros();
    for(int x=0;x<Cant;x++){
    MJ = arch.Leer(x);
    if (MJ.getIDInforme() == ID){
      Pos=x;
    }
  }

    MundoJurassico Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    int dia, mes, anio;
    cout << "Nueva fecha de informe: " << endl ;
    cout << "Dia: " ;
    cin >> dia;
    cout << "Mes: " ;
    cin >> mes;
    cout << "Anio: " ;
    cin >> anio;
    fecha.setDia(dia);
    fecha.setMes(mes);
    fecha.setAnio(anio);
    Aux.setFechaDeInfomre(fecha);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}
case 3:{
    int ID, Pos;
    cout << "ID: " ;
    cin >> ID ;
    int Cant = arch.ContarRegistros();
    for(int x=0;x<Cant;x++){
    MJ = arch.Leer(x);
    if (MJ.getIDInforme() == ID){
      Pos=x;
    }
  }

    MundoJurassico Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    int Edit;
    cout << "Nueva especie: ";
    cin >> Edit;
    Aux.setAccidentes(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}
}
    break;
}

case 5:{
Operaciones Ope;
OperacionesArchivo arch("MundoJurassico.dat");

int op;
cout << "-------------------------------------------------" << endl  ;
cout << "--------Elija la opcion que quiera editar--------" << endl  ;
cout << "                 1.Observaciones                 " << endl  ;
cout << "-------------------------------------------------" << endl  ;
cin >> op;

switch(op){
case 1:
    int ID, Pos;
    cout << "ID: " ;
    cin >> ID ;
    int Cant = arch.ContarRegistros();
    for(int x=0;x<Cant;x++){
    Ope = arch.Leer(x);
    if (Ope.getID() == ID){
      Pos=x;
    }
  }

    Operaciones Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    string Edit;
    cout << "Nueva observacion: ";
    cin >> Edit;
    Aux.setActividad(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
    break;
}
    break;
}

}

}
/*Dinosaurios dino;
DinosauriosArchivo arch("Dinosaurios.dat");
int ID, Pos;
cout << "ID: " ;
cin >> ID ;
int Cant = arch.ContarRegistros();
  for(int x=0;x<Cant;x++){
    dino= arch.Leer(x);
    if (dino.getID()== ID){
      Pos=x;
    }
  }

    Dinosaurios Aux = arch.Leer(Pos);
    cout << "Registro a modificar: " << endl;
    Aux.Mostrar();

    int Edit;
    cout << "Nuevo cercado: ";
    cin >> Edit;
    Aux.setNumeroCercado(Edit);
    bool Registro =arch.Guardar(Aux,Pos);
    if (Registro){
    cout << endl << "> Registro modificado correctamente." << endl;
  }
  else{
    cout << endl << "> No se encontro el movimiento con ID " << ID << "." << endl;
  }
*/
