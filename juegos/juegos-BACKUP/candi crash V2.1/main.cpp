#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    int base[7][7];
    char base_char[7][7];
    int opc=0;
    int puntos=0;
    int num_buscado=0;
    int valor_x,valor_y;
    char direccion;
    int cont_v=0;
    int cont_h=0;
    int i=0;
    char jugar;

    bool play=true;

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
                play=true;
                //rellena tabla valores aleatorios entre 1
                srand(time(NULL));
                for(int y=0;y<7;y++)
                {
                    for(int x=0;x<7;x++)
                    {base[y][x]=rand()%2;}
                }

                while(play==true)
                {
                    /*for(int y=0;y<7;y++)
                    {
                        for(int x=0;x<7;x++)
                        {
                            cout<<base[y][x]<<"--";  //muestro tabla con numeros
                        }
                    cout<<endl;
                    }*/

                    for(int y=0;y<7;y++)//muestro tabla de simbolos (por estetica)
                    {
                        for(int x=0;x<7;x++)
                        {
                            if(base[y][x]==0)
                            {base_char[y][x]='x';}
                            if(base[y][x]==1)
                            {base_char[y][x]='o';}
                            if(base[y][x]==2)
                            {base_char[y][x]='-';}
                            cout<<base_char[y][x]<<"  ";
                        }
                    cout<<endl;
                    }

                    cout<<"Introducir direccion (opciones -h- horizontal y -v- vertical): ";//direccion derecha a izquierda o de arriva a abajo
                    cin>>direccion;

                    if(direccion=='h')//direccion horizontal
                    {
                        cont_h=0;//variable a 0 para evitar fallo en siguiente vuelta
                        cout<<"Introduce fila: ";//valor y
                        cin>>valor_y;
                        cout<<"Introducir columna: ";//valor x
                        cin>>valor_x;

                        num_buscado=base[valor_y][valor_x];//le doy valor a numero buscado

                        i=0;//variable i a 0 para a la siguiente vez que valla a llamar horizontal no falle
                        while(base[valor_y][valor_x+i]==num_buscado)//while cuenta caracteres
                        {
                            cont_h++;//contador de filas horizontales
                            i++;//contador que mueve lo que se cuenta 1
                        }
                        if(cont_h==3)//si el contador suma 3 3 puntos
                        {
                            puntos=puntos+3;//sumo 3 puntos para cuando llegue a 15 cierre
                            cout<<"Conseguite 3 puntos"<<endl;//mensaje 3 puntos
                        }
                        else
                        {cout<<"No consegiste 3 puntos"<<endl;}//mensaje no consegiste 3 puntos
                        if(cont_h==5)
                        {
                            puntos=puntos+5;
                            cout<<"Consegiste 5 puntos"<<endl;
                        }
                        else
                        {cout<<"No consegiste 5 puntos"<<endl;}
                    }//cierre de direccion



                    if(direccion=='v')//inicio del vertical
                    {
                        cont_v=0;//variable a 0 para evitar fallo en siguiente vuelta
                        cout<<"Introduce fila: ";//valor y
                        cin>>valor_y;
                        cout<<"Introducir columna: ";//valor x
                        cin>>valor_x;


                        num_buscado=base[valor_y][valor_x];//valor a numero buscado, variable cambia en cada orientacion  y encada ciclo

                        i=0;//variable a 0 para evitar fallo en siguiente vuelta
                        while(base[valor_y+i][valor_x]==num_buscado)
                        {
                            cont_v++;//suma 1 a contador vertical
                            i++;//mueve el numero que se comprueba
                        }
                        if(cont_v==3)//si contador v es 3 3 puntos
                        {
                            puntos=puntos+3;
                            cout<<"Conseguite 3 puntos"<<endl;//mensaje 3 puntos
                        }
                        else
                        {cout<<"No consegiste 3 puntos"<<endl;}
                        if(cont_v==5)
                        {
                            puntos=puntos+5;
                            cout<<"Consegiste 5 puntos"<<endl;
                        }
                        else
                        {cout<<"No consegiste 5 puntos"<<endl;}
                    }//cierre del vertical



                    cout<<"contador vertical: "<<cont_v<<endl;
                    cout<<"contador horizontal: "<<cont_h<<endl;
                    cout<<"contador de puntos: "<<puntos<<endl;



                    cout<<"¿Quieres seguir jugando? S o N "<<endl;//opcion para seguir jugando
                    cin>>jugar;
                    if(jugar=='s' || jugar=='S')
                    {play=true;}
                    else
                    {cout<<"Opcion no disponible"<<endl;}
                    if(jugar=='n' || jugar=='N')
                    {play=false;}
                    else
                    {cout<<"Opcion no disponible"<<endl;}
                }//cierre del while jugando
            break;
            }//cierre case 1
            case 2:
            {

                cout<<"caso 2"<<endl;


                break;
            }//cierre case 2
            case 3:
            {break;}//cierre case 3
          }//opciones
        }//cierre del else
    }while(opc!=3);

    return 0;
}
