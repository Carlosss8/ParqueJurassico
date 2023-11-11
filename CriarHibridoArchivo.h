#ifndef CRIARHIBRIDOARCHIVO_H
#define CRIARHIBRIDOARCHIVO_H


class CriarHibridoArchivo{
private:
    std::string _nombreArchivo;

public:
    CriarHibridoArchivo(std::string nombreArchivo);
    bool Guardar(CriarHibrido reg);
    bool Guardar(CriarHibrido reg, int nroRegistro);
    int ContarRegistros();
    CriarHibrido Leer(int nroRegistro);
    int Buscar(int IDOperaciones);
};

#endif // CRIARHIBRIDOARCHIVO_H
