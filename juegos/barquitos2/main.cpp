#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    int y=0;
    int x=0;
    char mapa_pc[20][20];
    char oculto_pc[20][20];
    char mapa_p[20][20];
    char oculto_p[20][20];
    int fila;
    int columna;
    int cont=2;
    bool orientacion=false;
    int orien=0;
    bool fin=false;
    int valorx=0;
    int valory=0;
    int opc;
    bool play=false;



    for(y=0;y<20;y++)//inicializa la tabla a x para no poder jugar si no se ponen los barcos
    {
        for(x=0;x<20;x++)
        {
            mapa_pc[y][x]='X';
            oculto_pc[y][x]='X';
            mapa_p[y][x]='X';
            oculto_p[y][x]='X';
        }
    }

    do{
        cout<<" ---------------------------------------------------------------------------------------------------- "<<endl;
        cout<<"|---------------------------------------- JUEGO DEL AHORCADO ----------------------------------------|"<<endl;
        cout<<"|------------------------------ 1.- Iniciar matriz maquina ------------------------------------------|"<<endl;
        cout<<"|------------------------------ 2.- Iniciar tu matriz -----------------------------------------------|"<<endl;
        cout<<"|------------------------------ 3.- Jugar -----------------------------------------------------------|"<<endl;
        cout<<"|------------------------------ 4.- Salir -----------------------------------------------------------|"<<endl;
        cout<<" ---------------------------------------------------------------------------------------------------- "<<endl;
        cout<<endl;
        cout<<"-Introduzca una opcion: ";
        cin>>opc;
        system("cls");//borra pantalla
        if (opc<=0 || opc>4)//solo permite valores entre 1 y 4
        {
            cout<<"Opcion no disponible.."<<endl;
        }
        else
        {
            switch (opc)
            {
                case 1:
                {
                    //pinta la tabla de agua.
                    for(y=0;y<20;y++)
                    {
                        for(x=0;x<20;x++)
                        {
                            mapa_pc[y][x]=char(126);
                        }
                    }
                    for(y=0;y<20;y++)
                    {
                        for(x=0;x<20;x++)
                        {
                            oculto_pc[y][x]=char(177);
                        }
                    }

                    //introduce los barquitos
                    srand(time(NULL));
                    for(int b=0;b<4;b++)//repeticion de barcos
                    {
                        fila=rand()%19;
                        columna=rand()%19;
                        orien=rand()%2;//valor aleatorio para el bool de la orientacion

                        if(orien==0)
                            {orientacion=false;}//orientacion (si orien es 0 el bool es falso y pinta barco en columna
                        else
                            {orientacion=true;}//orientacion (si orien es 1 el bool es 1 y pinta 1 fila

                        for(int i=0;i<cont;i++)//tamaño de los barco lo marca cont que empieza en 2 (el barco mas pequeño) y va ascendiendo
                        {
                            if(orientacion==true)//seleccionar orientacion al pintar
                                {mapa_pc[fila][columna+i]='@';}//pinta barcos en filas
                            else
                                {mapa_pc[fila+i][columna]='@';}//pinta barcos en columnas
                        }
                    cont++;
                    }


                    cout<<"Tu oponentes ya esta preparado!!"<<endl;
                break;
                }//cierre case1

                case 2:
                {



                break;
                }//cierre del case 2

                case 3:
                {
                   for(y=0;y<20;y++)
                    {
                        for(x=0;x<20;x++)
                        {
                           if(mapa_pc[y][x]!='X' || mapa_p[y][x]!='X')
                           {
                               play=true;
                           }
                        }
                    }
                    if(play==false)
                    {
                        cout<<"Primero introduce barcos"<<endl;
                    }
                    else
                    {
                        while(fin==false)
                        {
                            cout<<"Introduce fila: ";
                            cin>>valory;
                            cout<<"Introduce columna: ";
                            cin>>valorx;

                            for(int i=0;i<20;i++)
                            {
                                if(mapa_pc[valory][valorx]=='@')
                                    {oculto_pc[valory][valorx]='#';}
                                else
                                    {oculto_pc[valory][valorx]='0';}
                            }
                            cout<<endl;
                            for(int y=0;y<20;y++)
                            {
                                for(int x=0;x<20;x++)
                                {
                                    cout<<mapa_pc[y][x]<<" ";
                                }
                                cout<<endl;
                            }
                        }//cierre while
                    }//cierre del else
                break;
                }//cierre case 3





    //Muestro la tabla
    cout<<endl;

    for(y=0;y<20;y++)
    {
        for(x=0;x<20;x++)
        {
            cout<<oculto_pc[y][x]<<" ";
        }
        cout<<endl;
    }

            }//cierre del swich
        }//cierre del else
    }while(opc!=4);
    return 0;
}

