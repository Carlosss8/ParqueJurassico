#include "OperacionesArchivo.h"
#include <cstdio>

OperacionesArchivo::OperacionesArchivo(std::string nombreArchivo){
  _nombreArchivo = nombreArchivo;
}

bool OperacionesArchivo::Guardar(Operaciones reg){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "ab");
  if (p == nullptr){
    return false;
  }
  pudoEscribir = fwrite(&reg, sizeof(Operaciones), 1, p);
  fclose(p);
  return pudoEscribir;
}

bool OperacionesArchivo::Guardar(Operaciones reg, int nroRegistro){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb+");
  if (p == nullptr){
    return false;
  }
  fseek(p, nroRegistro * sizeof(Operaciones), SEEK_SET);
  pudoEscribir = fwrite(&reg, sizeof(Operaciones), 1, p);
  fclose(p);
  return pudoEscribir;
}

int OperacionesArchivo::ContarRegistros(){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return 0;
  }
  fseek(p, 0, SEEK_END);
  int bytes = ftell(p);
  fclose(p);
  return bytes / sizeof(Operaciones);
}

Operaciones OperacionesArchivo::Leer(int nroRegistro){
  Operaciones reg;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return reg;
  }
  fseek(p, nroRegistro * sizeof(Operaciones), SEEK_SET);
  fread(&reg, sizeof(Operaciones), 1, p);
  fclose(p);
  return reg;
}


int OperacionesArchivo::Buscar(int IDOperaciones){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  int i = 0;
  Operaciones reg;
  while(fread(&reg, sizeof(Operaciones), 1, p)){
    if(reg.getID() == IDOperaciones){
      fclose(p);
      return i;
    }
    i++;
  }
  fclose(p);
  return -1;
}
