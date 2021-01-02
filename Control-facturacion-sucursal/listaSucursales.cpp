#include <stdio.h>
#include <iostream>
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

float totalFacturacion(ListaSucursales * inicio){
    ListaSucursales* nuevo = new ListaSucursales;
    float total =0;
    if(inicio == nullptr){

    }
    else{
        ListaSucursales* aux = inicio;

        if(aux->sgte == nullptr && aux->sucursal.facturacion > -1){
            total = aux->sucursal.facturacion;

        }else{
          while(aux->sgte!=nullptr){
                total = total + aux->sucursal.facturacion;
            aux = aux->sgte;
        }

        }



        aux->sgte = nullptr;
    }
    return total;

}



void totalFacturacionXZonas(ListaSucursales * inicio){
    ListaSucursales* aux = inicio;
    float unicaFacturacion;
    float zona1 = 0;
    float zona2 = 0;
    float zona3 = 0;
    float zona4 = 0;
    float zona5 = 0;
    bool bandera = true;
    if(aux == nullptr){
            bandera = false;
    }
    if(aux->sgte == nullptr && aux->sucursal.facturacion > -1 && bandera){
            unicaFacturacion = aux->sucursal.facturacion;
            std::cout<<"Zona: "<<aux->sucursal.zona<<": "<<unicaFacturacion;
            aux->sgte = nullptr;
        }
       if(aux->sgte != nullptr && bandera){

       for (ListaSucursales* p = inicio; p!=nullptr; p=p->sgte){
            if(p->sucursal.zona == 1){
                zona1 = zona1 + p->sucursal.facturacion;
            }
            if(p->sucursal.zona == 2){
                zona2 = zona2 + p->sucursal.facturacion;
            }
            if(p->sucursal.zona == 3){
                zona3 = zona3 + p->sucursal.facturacion;
            }
            if(p->sucursal.zona == 4){
                zona4 = zona4 + p->sucursal.facturacion;
            }
            if(p->sucursal.zona == 5){
                zona5 = zona5 + p->sucursal.facturacion;
            }
}



        std::cout<<"Zona 1: "<<zona1<<std::endl;
        std::cout<<"Zona 2: "<<zona2<<std::endl;
        std::cout<<"Zona 3: "<<zona3<<std::endl;
        std::cout<<"Zona 4: "<<zona4<<std::endl;
        std::cout<<"Zona 5: "<<zona5<<std::endl;

        }




    }




