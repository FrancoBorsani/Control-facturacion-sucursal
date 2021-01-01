#ifndef LISTASUCURSALES_H_INCLUDED
#define LISTASUCURSALES_H_INCLUDED


struct ListaSucursales{
    Sucursal sucursal;
    ListaSucursales *sgte;
};



ListaSucursales* agregarSucursal(ListaSucursales * lista, Sucursal sucursal);





#endif // LISTASUCURSALES_H_INCLUDED
