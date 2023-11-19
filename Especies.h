#ifndef ESPECIES_H
#define ESPECIES_H
#include <string>

class Especies{
private:
    char _periodo[50];
    char _tipo[50];
    int _cantidad;
    bool _estado;
public:

    Especies(std::string Periodo, std::string Tipo, int Cantidad, bool Estado);
    Especies();

    void setPeriodo(std::string Periodo);
    void setTipo(std::string Tipo);
    void setCantidad(int Cantidad);
    void setEstado(bool Estado);

    std::string getPeriodo();
    std::string getTipo();
    int getCantidad();
    bool getEstado();

    void Listar();
};

#endif // ESPECIES_H
