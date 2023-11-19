#include "CercadoArchivo.h"
#include <cstdio>

CercadoArchivo::CercadoArchivo(std::string nombreArchivo){
  _nombreArchivo = nombreArchivo;
}

bool CercadoArchivo::Guardar(Cercados reg){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "ab");
  if (p == nullptr){
    return false;
  }
  pudoEscribir = fwrite(&reg, sizeof(Cercados), 1, p);
  fclose(p);
  return pudoEscribir;
}

bool CercadoArchivo::Guardar(Cercados reg, int nroRegistro){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb+");
  if (p == nullptr){
    return false;
  }
  fseek(p, nroRegistro * sizeof(Cercados), SEEK_SET);
  pudoEscribir = fwrite(&reg, sizeof(Cercados), 1, p);
  fclose(p);
  return pudoEscribir;
}

int CercadoArchivo::ContarRegistros(){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return 0;
  }
  fseek(p, 0, SEEK_END);
  int bytes = ftell(p);
  fclose(p);
  return bytes / sizeof(Cercados);
}

Cercados CercadoArchivo::Leer(int nroRegistro){
  Cercados reg;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return reg;
  }
  fseek(p, nroRegistro * sizeof(Cercados), SEEK_SET);
  fread(&reg, sizeof(Cercados), 1, p);
  fclose(p);
  return reg;
}

int CercadoArchivo::Buscar(int IDCercados){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  int i = 0;
  Cercados reg;
  while(fread(&reg, sizeof(Cercados), 1, p)){
    if(reg.getID() == IDCercados){
      fclose(p);
      return i;
    }
    i++;
  }
  fclose(p);
  return -1;
}

int CercadoArchivo::BuscarPorTipoEspecie(std::string TipoEspecie){
 FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  Cercados reg;
  CercadoArchivo arch("Cercados.dat");

  int cont=arch.ContarRegistros();

  for (int x=0;x<cont;x++){
    reg=arch.Leer(x);
    if (reg.getEspecie()==TipoEspecie){
        reg.Mostrar();
    }
  }
  fclose(p);
}

int CercadoArchivo::BuscarPorNumeroDeCercado(int NumeroCercado){
 FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  Cercados reg;
  CercadoArchivo arch("Cercados.dat");

  int cont=arch.ContarRegistros();

  for (int x=0;x<cont;x++){
    reg=arch.Leer(x);
    if (reg.getNumeroCercado()==NumeroCercado){
        reg.Mostrar();
    }
  }
  fclose(p);
}
