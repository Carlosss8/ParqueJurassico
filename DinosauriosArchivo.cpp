#include "DinosauriosArchivo.h"
#include <cstdio>

DinosauriosArchivo::DinosauriosArchivo(std::string nombreArchivo){
  _nombreArchivo = nombreArchivo;
}

bool DinosauriosArchivo::Guardar(Dinosaurios reg){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "ab");
  if (p == nullptr){
    return false;
  }
  pudoEscribir = fwrite(&reg, sizeof(Dinosaurios), 1, p);
  fclose(p);
  return pudoEscribir;
}

bool DinosauriosArchivo::Guardar(Dinosaurios reg, int nroRegistro){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb+");
  if (p == nullptr){
    return false;
  }
  fseek(p, nroRegistro * sizeof(Dinosaurios), SEEK_SET);
  pudoEscribir = fwrite(&reg, sizeof(Dinosaurios), 1, p);
  fclose(p);
  return pudoEscribir;
}

int DinosauriosArchivo::ContarRegistros(){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return 0;
  }
  fseek(p, 0, SEEK_END);
  int bytes = ftell(p);
  fclose(p);
  return bytes / sizeof(Dinosaurios);
}

Dinosaurios DinosauriosArchivo::Leer(int nroRegistro){
  Dinosaurios reg;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return reg;
  }
  fseek(p, nroRegistro * sizeof(Dinosaurios), SEEK_SET);
  fread(&reg, sizeof(Dinosaurios), 1, p);
  fclose(p);
  return reg;
}


int DinosauriosArchivo::Buscar(int IDDinosaurios){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  int i = 0;
  Dinosaurios reg;
  while(fread(&reg, sizeof(Dinosaurios), 1, p)){
    if(reg.getID() == IDDinosaurios){
      fclose(p);
      return i;
    }
    i++;
  }
  fclose(p);
  return -1;
}
