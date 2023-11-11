#include "CriarHibridoArchivo.h"
#include <cstdio>

CriarHibridoArchivo::CriarHibridoArchivo(std::string nombreArchivo){
  _nombreArchivo = nombreArchivo;
}

bool CriarHibridoArchivo::Guardar(CriarHibrido reg){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "ab");
  if (p == nullptr){
    return false;
  }
  pudoEscribir = fwrite(&reg, sizeof(CriarHibrido), 1, p);
  fclose(p);
  return pudoEscribir;
}

bool CriarHibridoArchivo::Guardar(CriarHibrido reg, int nroRegistro){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb+");
  if (p == nullptr){
    return false;
  }
  fseek(p, nroRegistro * sizeof(CriarHibrido), SEEK_SET);
  pudoEscribir = fwrite(&reg, sizeof(CriarHibrido), 1, p);
  fclose(p);
  return pudoEscribir;
}

int CriarHibridoArchivo::ContarRegistros(){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return 0;
  }
  fseek(p, 0, SEEK_END);
  int bytes = ftell(p);
  fclose(p);
  return bytes / sizeof(CriarHibrido);
}

CriarHibrido CriarHibridoArchivo::Leer(int nroRegistro){
  CriarHibrido reg;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return reg;
  }
  fseek(p, nroRegistro * sizeof(CriarHibrido), SEEK_SET);
  fread(&reg, sizeof(CriarHibrido), 1, p);
  fclose(p);
  return reg;
}

int CriarHibridoArchivo::Buscar(int IDCriarHibrido){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  int i = 0;
  CriarHibrido reg;
  while(fread(&reg, sizeof(CriarHibrido), 1, p)){
    if(reg.getID() == IDCriarHibrido){
      fclose(p);
      return i;
    }
    i++;
  }
  fclose(p);
  return -1;
}
