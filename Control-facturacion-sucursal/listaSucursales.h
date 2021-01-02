#ifndef LISTASUCURSALES_H_INCLUDED
#define LISTASUCURSALES_H_INCLUDED


struct ListaSucursales{
    Sucursal sucursal;
    ListaSucursales *sgte;
};



ListaSucursales* agregarSucursal(ListaSucursales * lista, Sucursal sucursal);

float totalFacturacion(ListaSucursales* lista);

void totalFacturacionXZonas(ListaSucursales * inicio);

#endif // LISTASUCURSALES_H_INCLUDED
