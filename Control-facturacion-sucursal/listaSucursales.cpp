#include <stdio.h>
#include "Sucursal.h"
#include "listaSucursales.h"

ListaSucursales* agregarSucursal(ListaSucursales * inicio, Sucursal sucursal){
    ListaSucursales* nuevo = new ListaSucursales;
    nuevo->sucursal = sucursal;
    nuevo->sgte = nullptr;
    if(inicio == nullptr){
        nuevo->sgte = inicio;
        inicio = nuevo;
    }
    else{
        ListaSucursales* aux = inicio;

        while(aux->sgte!=nullptr){
            aux = aux->sgte;
        }

        aux->sgte = nuevo;
    }
    return inicio;

}
