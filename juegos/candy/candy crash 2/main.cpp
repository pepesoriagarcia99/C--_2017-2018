#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    int base[7][7];
    int opc=0;
    int puntos=0;
    int num_buscado=0;
    int valor_x_inicio,valor_y_inicio,valor_x_fin,valor_y_fin;
    char direccion;
    int cont_v=0;
    int cont_h=0;
    int i=0;

    bool jugar=true;

    //rellena tabla valores aleatorios entre 1 y 3
    srand(time(NULL));
    for(int y=0;y<7;y++)
    {
        for(int x=0;x<7;x++)
        {base[y][x]=rand()%3;}
    }

    do
    {
        cout<<" ---------------------------------------------------------------------------------------------------- "<<endl;
        cout<<"|------------------------------ 1.- opcion 1 --------------------------------------------------------|"<<endl;
        cout<<"|------------------------------ 2.- opcion 2 --------------------------------------------------------|"<<endl;
        cout<<"|------------------------------ 3.- Salir -----------------------------------------------------------|"<<endl;
        cout<<" ---------------------------------------------------------------------------------------------------- "<<endl;
        cout<<"Introduce opcion: ";
        cin>>opc;
        if (opc<=0 || opc>3)//solo permite valores entre 1 y 3
        {
            cout<<"Opcion no disponible.."<<endl;
        }
        else
        {
          switch(opc)
          {
            case 1:
            {
                while(jugar==true)
                {
                    for(int y=0;y<7;y++)
                    {
                        for(int x=0;x<7;x++)
                        {
                            cout<<base[y][x]<<"--";
                        }
                    cout<<endl;
                    }

                    cout<<"Introducir direccion (opciones -h- horizontal y -v- vertical): ";//direccion derecha a izquierda o de arriva a abajo
                    cin>>direccion;

                    if(direccion=='v')
                    {
                        cout<<"Introduce fila inicio: ";//valor y inicio
                        cin>>valor_y_inicio;
                        cout<<"Introducir columna inicio: ";//valor x inicio
                        cin>>valor_x_inicio;
                        cout<<"Introduce fila fin: ";//valor y fin
                        cin>>valor_y_fin;
                        cout<<"Introducir columna fin: ";//valor x fin
                        cin>>valor_x_fin;

                        base[valor_y_inicio][valor_x_inicio]=num_buscado;


                        while((valor_x_inicio+i)!=valor_x_fin)
                        {
                            if(base[valor_x_inicio+i][valor_y_inicio]==num_buscado)
                            {
                                cont_v++;
                            }
                        i++;
                        }
                    }
                    if(direccion=='h')
                    {
                        cout<<"Introduce fila inicio: ";//valor y inicio
                        cin>>valor_y_inicio;
                        cout<<"Introducir columna inicio: ";//valor x inicio
                        cin>>valor_x_inicio;
                        cout<<"Introduce fila fin: ";//valor y fin
                        cin>>valor_y_fin;
                        cout<<"Introducir columna fin: ";//valor x fin
                        cin>>valor_x_fin;

                        base[valor_y_inicio][valor_x_inicio]=num_buscado;


                        while((valor_y_inicio+i)!=valor_y_fin)
                        {
                            if(base[valor_y_inicio+i][valor_x_inicio]==num_buscado)
                            {
                                cont_h++;
                            }


                        i++;
                        }
                    }
                    cout<<"contador vertical: "<<cont_v<<endl;
                    cout<<"contador horizontal: "<<cont_h<<endl;

                    if(puntos>=15)
                    {jugar=false;}
                }
            break;
            }//cierre case 1
            case 2:
            {




                break;
            }//cierre case 2
            case 3:
            {break;}//cierre case 3
          }//opciones
        }//cierre del else
    }while(opc!=3);

    return 0;
}
