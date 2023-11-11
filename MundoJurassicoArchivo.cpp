#include "MundoJurassicoArchivo.h"
#include <cstdio>

MundoJurassicoArchivo::MundoJurassicoArchivo(std::string nombreArchivo){
  _nombreArchivo = nombreArchivo;
}

bool MundoJurassicoArchivo::Guardar(MundoJurassico reg){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "ab");
  if (p == nullptr){
    return false;
  }
  pudoEscribir = fwrite(&reg, sizeof(MundoJurassico), 1, p);
  fclose(p);
  return pudoEscribir;
}

bool MundoJurassicoArchivo::Guardar(MundoJurassico reg, int nroRegistro){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb+");
  if (p == nullptr){
    return false;
  }
  fseek(p, nroRegistro * sizeof(MundoJurassico), SEEK_SET);
  pudoEscribir = fwrite(&reg, sizeof(MundoJurassico), 1, p);
  fclose(p);
  return pudoEscribir;
}

int MundoJurassicoArchivo::ContarRegistros(){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return 0;
  }
  fseek(p, 0, SEEK_END);
  int bytes = ftell(p);
  fclose(p);
  return bytes / sizeof(MundoJurassico);
}

MundoJurassico MundoJurassicoArchivo::Leer(int nroRegistro){
  MundoJurassico reg;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return reg;
  }
  fseek(p, nroRegistro * sizeof(MundoJurassico), SEEK_SET);
  fread(&reg, sizeof(MundoJurassico), 1, p);
  fclose(p);
  return reg;
}

int MundoJurassicoArchivo::Buscar(int IDMundoJurassico){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  int i = 0;
  MundoJurassico reg;
  while(fread(&reg, sizeof(MundoJurassico), 1, p)){
    if(reg.getID() == IDMundoJurassico){
      fclose(p);
      return i;
    }
    i++;
  }
  fclose(p);
  return -1;
}
