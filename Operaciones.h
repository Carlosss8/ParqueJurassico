#ifndef OPERACIONES_H
#define OPERACIONES_H


class Operaciones{
private:
    bool _control;
    char _vehiculos[30];
    char _dron[30];
    char _electricidad[30];
    char _actividad[100];

public:
    void setControl(bool Control);
    void setVehiculos(std::string Vehiculos);
    void setDron(std::string Dron);
    void setElectricidad(std::string Electricidad);
    void setActividad(std::string Actividad);

    bool getControl();
    std::string getVehiculos();
    std::string getDron();
    std::string getElectricidad();
    std::string getActividad();

    void CargarVehiculos();
    void CargarDron();
    void CargarElectricidad();
    void CargarActividad();

};

#endif // OPERACIONES_H