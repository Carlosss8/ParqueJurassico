#ifndef SUBMENU_H
#define SUBMENU_H
#include "MenuPrincipal.h"

class SubMenu{
private:
MenuPrincipal menuPrincipal;
public:
    void SubmenuCargar(int Op);
    void SubMenuListar(int Op);
    void SubMenuConsultas(int Op);
    void SubMenuEditar(int Op);


};

#endif // SUBMENU_H
