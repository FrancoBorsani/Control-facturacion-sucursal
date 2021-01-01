#include <iostream>
#include "sucursal.c"
#include "listaSucursales.h"


using namespace std;
void imprimir(ListaSucursales *inicio);

enum Zona {Norte = 1, Sur, Este, Oeste, Centro};

int main()
{

    Sucursal sucursal;; //Utilizado para crear sucursales
    ListaSucursales* listaSucursales = nullptr;

    int opcionIngresada = 0;
    Zona zona;
    //Menú principal
    do{
        cout<<"Menu principal:"<<endl;
        cout<<"1 - Agregar sucursal"<<endl;

        cout<<"Ingrese opcion: ";
        cin>>opcionIngresada;


        switch(opcionIngresada){
            case 1:
                do{

                        cout<<endl<<"ID (100-999): ";
                        cin>>sucursal.id;
                        }while(sucursal.id < 100 || sucursal.id > 999);

                cout<<endl<<"Direccion: ";
                cin>>sucursal.direccion;
              do{
                  opcionIngresada = 0;
                    cout<<endl<<"Zona: ";
                 cout<<endl<<"1- Norte";
                  cout<<endl<<"2- Sur";
                   cout<<endl<<"3- Este";
                    cout<<endl<<"4- Oeste";
                     cout<<endl<<"5- Centro";
                        cout<<endl<<"Opcion: ";
                        cin>>opcionIngresada;
                        }while(opcionIngresada<0 || opcionIngresada>6 );

                        switch(opcionIngresada){
                        case 1:
                            sucursal.zona = 1;
                        break;

                         case 2: sucursal.zona = 2;
                        break;

                         case 3: sucursal.zona = 3;
                        break;

                         case 4: sucursal.zona = 4;
                        break;

                         case 5: sucursal.zona = 5;
                        break;

                        }

                        cout<<endl<<"Facturacion: ";
                        cin>>sucursal.facturacion;

                listaSucursales= agregarSucursal(listaSucursales, sucursal);
                break;
        }


    system("PAUSE");

    imprimir(listaSucursales);





    }while(true);


    return 0;
}



void imprimir(ListaSucursales *inicio){
    for (ListaSucursales* p = inicio; p!=nullptr; p=p->sgte){
            cout<<endl<<"id: "<<p->sucursal.id<<endl;
            cout<<endl<<"direccion: "<<p->sucursal.direccion<<endl;
            cout<<endl<<"zona: "<<p->sucursal.zona<<endl;
            cout<<endl<<"facturacion: "<<p->sucursal.facturacion<<endl;
    }
}
