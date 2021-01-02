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




void maxYMin(ListaSucursales * inicio){
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
            std::cout<<"Maxima y minima facturacion corresponde a: ";
                std::cout<<std::endl<<"ID: "<<aux->sucursal.id<<std::endl;
                 std::cout<<std::endl<<"Direccion: "<<aux->sucursal.direccion<<std::endl;
                  std::cout<<std::endl<<"Zona: "<<aux->sucursal.zona<<std::endl;
                   std::cout<<std::endl<<"Facturacion: "<<aux->sucursal.facturacion<<std::endl;


            aux->sgte = nullptr;
            bandera = false;
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

        float maximo = zona1;
        float minimo = zona1;
        int i = 1;


         if(maximo < zona2 && zona2 != 0){

            maximo = zona2;
        }

         if(maximo < zona3 && zona2 != 0){

            maximo = zona3;
        }

         if(maximo < zona4 && zona2 != 0){

            maximo = zona4;
        }

         if(maximo < zona5 && zona2 != 0){

            maximo = zona5;
        }

// --------------
         if(minimo > zona2 && zona2 != 0){

            minimo = zona2;
        }

         if(minimo > zona3 && zona3 != 0){

            minimo = zona3;
        }

         if(minimo > zona4  && zona4 != 0){

            minimo = zona4;
        }

         if(minimo > zona5  && zona5 != 0){

            minimo = zona5;
        }

        bool encontradoMax = false;
         bool encontradoMin = false;
           for (ListaSucursales* p = inicio; p!=nullptr; p=p->sgte){
            if(p->sucursal.facturacion == maximo && !encontradoMax){
                    std::cout<<"MAXIMA";
                std::cout<<std::endl<<"ID: "<<p->sucursal.id<<std::endl;
                 std::cout<<std::endl<<"Direccion: "<<p->sucursal.direccion<<std::endl;
                  std::cout<<std::endl<<"Zona: "<<p->sucursal.zona<<std::endl;
                   std::cout<<std::endl<<"Facturacion: "<<p->sucursal.facturacion<<std::endl;
                   encontradoMax = true;
            }
             if(p->sucursal.facturacion == minimo && !encontradoMin){
                    std::cout<<"MINIMA";
                std::cout<<std::endl<<"ID: "<<p->sucursal.id<<std::endl;
                 std::cout<<std::endl<<"Direccion: "<<p->sucursal.direccion<<std::endl;
                  std::cout<<std::endl<<"Zona: "<<p->sucursal.zona<<std::endl;
                   std::cout<<std::endl<<"Facturacion: "<<p->sucursal.facturacion<<std::endl;
                    encontradoMin = true;
            }



}




        }












}




