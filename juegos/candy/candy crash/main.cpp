#include <stdlib.h>
#include <time.h>
#include <iostream>


using namespace std;

int main()
{
    int base[7][7];
    int puntos=0;
    int num_buscado=0;
    int cont=0;
    bool jugar=true;
    bool fila=true;


    int valor_x=0;
    int valor_y=0;


    srand(time(NULL));
    for(int y=0;y<7;y++)
    {
        for(int x=0;x<7;x++)
        {base[y][x]=rand()%3;}
    }


        for(int y=0;y<7;y++)
        {
            for(int x=0;x<7;x++)
            {cout<<base[y][x]<<"--";}
        cout<<endl;
        }

    while(jugar==true)
    {
        cout<<"Introducir fila: ";
        cin>>valor_y;
        cout<<"Introducir columna: ";
        cin>>valor_x;

        base[valor_y][valor_x]=num_buscado;
        cout<<"numero buscado: "<<num_buscado<<endl;
        cout<<"numero de salida: "<< base[valor_y][valor_x]<<endl;
        cout<<"valor del bool fila: "<<fila<<endl;

        //buscar lineas 3 puntos

                for(cont=0;cont<3;cont++)
                {
                    cont=0;
                    if(num_buscado== base[valor_y][valor_x+cont])
                    {
                        cout<<"numero en el if: "<< base[valor_y][valor_x+cont]<<endl;
                        base[valor_x][valor_y+cont]='X';
                        cont++;
                    }
                    else
                    {
                        fila=false;
                    }
                }

            for(int y=0;y<7;y++)
            {
                for(int x=0;x<7;x++)
                {cout<<base[y][x]<<"--";}
            cout<<endl;
            }

            if(puntos==15)
            {jugar=false;}
    }//while jugar
    return 0;
}
