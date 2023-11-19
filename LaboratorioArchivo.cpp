#include "LaboratorioArchivo.h"
#include <cstdio>

LaboratorioArchivo::LaboratorioArchivo(std::string nombreArchivo){
  _nombreArchivo = nombreArchivo;
}

bool LaboratorioArchivo::Guardar(Laboratorio reg){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "ab");
  if (p == nullptr){
    return false;
  }
  pudoEscribir = fwrite(&reg, sizeof(Laboratorio), 1, p);
  fclose(p);
  return pudoEscribir;
}

bool LaboratorioArchivo::Guardar(Laboratorio reg, int nroRegistro){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb+");
  if (p == nullptr){
    return false;
  }
  fseek(p, nroRegistro * sizeof(Laboratorio), SEEK_SET);
  pudoEscribir = fwrite(&reg, sizeof(Laboratorio), 1, p);
  fclose(p);
  return pudoEscribir;
}

int LaboratorioArchivo::ContarRegistros(){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return 0;
  }
  fseek(p, 0, SEEK_END);
  int bytes = ftell(p);
  fclose(p);
  return bytes / sizeof(Laboratorio);
}

Laboratorio LaboratorioArchivo::Leer(int nroRegistro){
  Laboratorio reg;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return reg;
  }
  fseek(p, nroRegistro * sizeof(Laboratorio), SEEK_SET);
  fread(&reg, sizeof(Laboratorio), 1, p);
  fclose(p);
  return reg;
}

/**
 * Busca el IDMovimiento en el archivo de Movimientos.
 * Si lo encuentra devuelve la posición del archivo del registro.
 * Si no lo encuentra devuelve -1
*/
int LaboratorioArchivo::Buscar(int IDLaboratorio){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  int i = 0;
  Laboratorio reg;
  while(fread(&reg, sizeof(Laboratorio), 1, p)){
    if(reg.getID() == IDLaboratorio){
      fclose(p);
      return i;
    }
    i++;
  }
  fclose(p);
  return -1;
}

int LaboratorioArchivo::BuscarADN(std::string ADN){
 FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  Laboratorio reg;
  LaboratorioArchivo arch("Laboratorio.dat");

  int cont=arch.ContarRegistros();

  for (int x=0;x<cont;x++){
    reg=arch.Leer(x);
    if (reg.getADN()==ADN){
        reg.Mostrar();
    }
  }
  fclose(p);
}
