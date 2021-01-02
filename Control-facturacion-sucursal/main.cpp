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
        cout<<"2 - Total facturacion"<<endl;
        cout<<"3 - Facturacion por zonas"<<endl;
        cout<<"4 - Facturacion maxima y minima"<<endl;
        cout<<"5 - Mostrar sucursales"<<endl;
        cout<<"Ingrese opcion: ";
        cin>>opcionIngresada;


        switch(opcionIngresada){
            case 1:
                do{

                        cout<<endl<<"ID (100-999): ";
                        cin>>sucursal.id;
                           if(sucursal.id == 1000) exit(EXIT_FAILURE);


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
                system("cls");
                break;

                case 2:
                   cout<<endl<<"Total facturacion: "<<totalFacturacion(listaSucursales)<<endl;
                   system("PAUSE");
                   system("cls");
                   break;

                case 3:
                    if(listaSucursales != nullptr){
                    totalFacturacionXZonas(listaSucursales);}else{
                        cout<<endl<<"No hay facturacion disponible por zonas"<<endl;
                    }
                    system("PAUSE");
                   system("cls");

                    break;


                case 4:
                    if(listaSucursales != nullptr){
                    maxYMin(listaSucursales);}else{
                        cout<<endl<<"No hay facturacion maxima ni minima (sin sucursales)"<<endl;
                    }
                    system("PAUSE");
                   system("cls");



                    break;


                case 5:
                    system("cls");
                    imprimir(listaSucursales);
                    system("PAUSE");
                    break;

        }

    }while(true);


    return 0;
}



void imprimir(ListaSucursales *inicio){
    for (ListaSucursales* p = inicio; p!=nullptr; p=p->sgte){
            cout<<endl<<"Id: "<<p->sucursal.id<<endl;
            cout<<endl<<"Direccion: "<<p->sucursal.direccion<<endl;
            cout<<endl<<"Zona: "<<p->sucursal.zona<<endl;
            cout<<endl<<"Facturacion: "<<p->sucursal.facturacion<<endl;
            cout<<endl<<"---------------"<<endl;
    }
}
