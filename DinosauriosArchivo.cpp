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
    reg.Mostrar();
      fclose(p);
      return i;
    }
    i++;
  }
  fclose(p);
  return -1;
}

int DinosauriosArchivo::BuscarPorNombre(std::string NombreDinosaurio){
 FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  int i = 0;
  Dinosaurios reg;
  while(fread(&reg, sizeof(Dinosaurios), 1, p)){
    if(reg.getNombre() == NombreDinosaurio){
    reg.Mostrar();
      fclose(p);
      return i;
    }
    i++;
  }
  fclose(p);
  return -1;
}

int DinosauriosArchivo::BuscarPorTipo(std::string TipoDinosaurio){
 FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  Dinosaurios reg;
  DinosauriosArchivo arch("Dinosaurios.dat");

  int cont=arch.ContarRegistros();

  for (int x=0;x<cont;x++){
    reg=arch.Leer(x);
    if (reg.getEspecie()==TipoDinosaurio){
        reg.Mostrar();
    }
  }
  fclose(p);
}

int DinosauriosArchivo::BuscarPorNumeroDeCercado(int NumeroCercado){
 FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  Dinosaurios reg;
  DinosauriosArchivo arch("Dinosaurios.dat");

  int cont=arch.ContarRegistros();

  for (int x=0;x<cont;x++){
    reg=arch.Leer(x);
    if (reg.getNumeroCercado()==NumeroCercado){
        reg.Mostrar();
    }
  }
  fclose(p);
}

int DinosauriosArchivo::BuscarPorADN(std::string ADN){
 FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  Dinosaurios reg;
  DinosauriosArchivo arch("Dinosaurios.dat");

  int cont=arch.ContarRegistros();

  for (int x=0;x<cont;x++){
    reg=arch.Leer(x);
    if (reg.getTipoADN()==ADN){
        reg.Mostrar();
    }
  }
  fclose(p);
}




