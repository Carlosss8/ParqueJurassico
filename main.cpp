#include <iostream>
#include "Dinosaurios.h"
#include "CriarHibrido.h"
#include "Cercados.h"
#include "Especies.h"
#include "Laboratorio.h"
#include "MundoJurassico.h"
#include "MenuPrincipal.h"
#include "DinosauriosArchivo.h"
#include <string>
using namespace std;

int main(){
Dinosaurios dino;
CriarHibrido criar;
Cercados cerca;
Especies espe; ///falta probar
Laboratorio labo;
MundoJurassico mundo;
MenuPrincipal menu;
DinosauriosArchivo arch("Dinosaurios.dat");
int op;
string n;
int d=arch.ContarRegistros();
//cin >> op;
//cin >> n;
//arch.BuscarPorNombre(n);
//arch.BuscarPorTipo(n);
//arch.BuscarPorNumeroDeCercado(op);
//for (int x=0;x<d;x++){
    //dino=arch.Leer(x);
    //arch.Buscar(op);
    //dino.Mostrar();
//}
menu.Menu();





    return 0;
}
