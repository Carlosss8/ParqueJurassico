#include "EspeciesArchivo.h"
#include <cstdio>

EspeciesArchivo::EspeciesArchivo(std::string nombreArchivo){
  _nombreArchivo = nombreArchivo;
}

bool EspeciesArchivo::Guardar(Especies reg){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "ab");
  if (p == nullptr){
    return false;
  }
  pudoEscribir = fwrite(&reg, sizeof(Especies), 1, p);
  fclose(p);
  return pudoEscribir;
}

bool EspeciesArchivo::Guardar(Especies reg, int nroRegistro){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb+");
  if (p == nullptr){
    return false;
  }
  fseek(p, nroRegistro * sizeof(Especies), SEEK_SET);
  pudoEscribir = fwrite(&reg, sizeof(Especies), 1, p);
  fclose(p);
  return pudoEscribir;
}

int EspeciesArchivo::ContarRegistros(){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return 0;
  }
  fseek(p, 0, SEEK_END);
  int bytes = ftell(p);
  fclose(p);
  return bytes / sizeof(Especies);
}

Especies EspeciesArchivo::Leer(int nroRegistro){
  Especies reg;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return reg;
  }
  fseek(p, nroRegistro * sizeof(Especies), SEEK_SET);
  fread(&reg, sizeof(Especies), 1, p);
  fclose(p);
  return reg;
}


