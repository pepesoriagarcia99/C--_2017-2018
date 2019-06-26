#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int opc;
    char rayas[20]="";
    char palabra[20]="";
    char pista[20]="";
    int longitud=0;
    int i;
    int intentos=10;
    char letra;
    bool encontrado=false;
    bool exito=false;

        do{
            cout<<" ---------------------------------------------------------------------------------------------------- "<<endl;
            cout<<"|---------------------------------------- JUEGO DEL AHORCADO ----------------------------------------|"<<endl;
            cout<<"|------------------------------ 1.- Introducir palabra misteriosa -----------------------------------|"<<endl;
            cout<<"|------------------------------ 2.- Jugar -----------------------------------------------------------|"<<endl;
            cout<<"|------------------------------ 3.- Salir -----------------------------------------------------------|"<<endl;
            cout<<" ---------------------------------------------------------------------------------------------------- "<<endl;
            cout<<endl;
            cout<<"-Introduzca una opcion: ";
            cin>>opc;

                system("cls");
                if (opc<=0 || opc>3)
                {
                cout<<"Opcion no disponible.."<<endl;
                }
                else
                {
                    //implementamos las opciones del menu
                    switch (opc)
                        {
                            case 1:
                            {
                            cout<<"----- Opcion 1: Introducir palabra  misteriosa -----"<<endl;
                            cout<<endl;

                            cout<<"Introducir palabra: ";
                            cin>>palabra;

                            cout<<"Introduce la pista: ";
                            cin>>pista;

                            system("cls");
                            break;
                            }

                            case 2:
                            {
                            longitud=strlen(palabra);
                            for(i=0;i<longitud;i++)
                            {rayas[i]='_';}

                            if(longitud<=0)
                                {
                                    cout<<"ERROR!!!, No hay palabra"<<endl;
                                    break;
                                }
                            else
                                {
                                    while((intentos!=0) && (encontrado==false))
                                    {
                                        cout<<"----- Opcion 2: Jugar -----"<<endl;
                                        cout<<endl;

                                        //---------------------------------------------------
                                        if(intentos==10)
                                            {
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                            }

                                        if(intentos==9)
                                            {
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<endl;
                                                cout<<"_______________________________"<<endl;
                                            }
                                        if(intentos==8)
                                            {
                                                cout<<"-"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"___________"<<endl;
                                            }
                                        if(intentos==7)
                                            {
                                                cout<<"-------------------"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"___________"<<endl;
                                            }
                                        if(intentos==6)
                                            {
                                                 cout<<"-------------------"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"___________"<<endl;
                                            }
                                        if(intentos==5)
                                            {
                                                cout<<"-------------------"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|               -------"<<endl;
                                                cout<<"|              | -   - |"<<endl;
                                                cout<<"|              |   o   |"<<endl;
                                                cout<<"|               -------"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"___________"<<endl;
                                            }
                                        if(intentos==4)
                                            {
                                                cout<<"-------------------"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|               -------"<<endl;
                                                cout<<"|              | -   - |"<<endl;
                                                cout<<"|              |   o   |"<<endl;
                                                cout<<"|               -------"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"___________"<<endl;
                                            }
                                        if(intentos==3)
                                            {
                                                cout<<"-------------------"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|               -------"<<endl;
                                                cout<<"|              | -   - |"<<endl;
                                                cout<<"|              |   o   |"<<endl;
                                                cout<<"|               -------"<<endl;
                                                cout<<"|                 -|"<<endl;
                                                cout<<"|                - |"<<endl;
                                                cout<<"|               -  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"___________"<<endl;
                                            }
                                        if(intentos==2)
                                            {
                                                cout<<"-------------------"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|               -------"<<endl;
                                                cout<<"|              | -   - |"<<endl;
                                                cout<<"|              |   o   |"<<endl;
                                                cout<<"|               ------- "<<endl;
                                                cout<<"|                 -|- "<<endl;
                                                cout<<"|                - | - "<<endl;
                                                cout<<"|               -  |  - "<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"___________"<<endl;
                                            }
                                        if(intentos==1)
                                            {
                                                cout<<"-------------------"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|               -------"<<endl;
                                                cout<<"|              | -   - |"<<endl;
                                                cout<<"|              |   o   |"<<endl;
                                                cout<<"|               ------- "<<endl;
                                                cout<<"|                 -|- "<<endl;
                                                cout<<"|                - | - "<<endl;
                                                cout<<"|               -  |  - "<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                  |"<<endl;
                                                cout<<"|                 -"<<endl;
                                                cout<<"|                -"<<endl;
                                                cout<<"|               -"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"|"<<endl;
                                                cout<<"___________"<<endl;
                                            }
                                        //---------------------------------------------------
                                        cout<<"palabra misteriosa: ";
                                        for(i=0;i<longitud;i++)
                                        {
                                            cout<<rayas[i];
                                            cout<<" ";
                                        }
                                        cout<<endl;
                                        cout<<"Pista: "<<pista<<endl;
                                        cout<<"Intentos: "<<intentos<<endl;
                                        cout<<"Introduce una letra: ";
                                        cin>>letra;

                                        exito=false;
                                        for(i=0;i<longitud;i++)
                                        {
                                            if(letra==palabra[i])
                                            {
                                                rayas[i]=letra;
                                                exito=true;
                                            }
                                        }
                                        if(exito==false)
                                        {
                                            intentos--;
                                        }

                                       if(strcmp(rayas,palabra)==0)
                                       {
                                           encontrado=true;
                                       }
                                        system("cls");
                                    }//cierre while
                                    if(encontrado==true)
                                    {
                                        cout<<"Enhorabuna, Ganaste!!!!"<<endl;
                                    }
                                    else
                                    {
                                        cout<<"Game Over"<<endl;
                                    if(intentos==0)
                                        {
                                            cout<<"-------------------"<<endl;
                                            cout<<"|                  |"<<endl;
                                            cout<<"|                  |"<<endl;
                                            cout<<"|               -------"<<endl;
                                            cout<<"|              | x   x |"<<endl;
                                            cout<<"|              |   o   |"<<endl;
                                            cout<<"|               ------- "<<endl;
                                            cout<<"|                 -|- "<<endl;
                                            cout<<"|                - | - "<<endl;
                                            cout<<"|               -  |  - "<<endl;
                                            cout<<"|                  |"<<endl;
                                            cout<<"|                  |"<<endl;
                                            cout<<"|                 - - "<<endl;
                                            cout<<"|                -   - "<<endl;
                                            cout<<"|               -     - "<<endl;
                                            cout<<"|"<<endl;
                                            cout<<"|"<<endl;
                                            cout<<"___________"<<endl;
                                        }
                                    }
                                    encontrado=false;
                                    encontrado=false;
                                    intentos=10;

                                }//cierre else
                            break;
                            }//cierre case 2

                        break;
                        }//swich
                }//fin else
            }while(opc!=3);
    return 0;
}
