#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    int base[4][4];
    int num_b=0;
    int i=0;
    int valor_y,valor_x;




    srand(time(NULL));
    for(int y=0;y<4;y++)
    {
        for(int x=0;x<4;x++)
        {
            base[y][x]=rand()%3;
        }
    }

    for(int y=0;y<4;y++)//pinta 7 filas
    {
        for(int x=0;x<4;x++)//da el salto de linea 7 veces
        {
            cout<<base[y][x]<<"--";
        }
        cout<<endl;
    }




    cout<<"coordenada Y (fila): ";
    cin>>valor_y;
    cout<<"coordenada X (columna): ";
    cin>>valor_x;



    cout<<base[valor_y][valor_x];
    num_b=base[valor_y][valor_x];
    cout<<endl;


        while(base[valor_y][valor_x+1]==num_b)
        {

            base[valor_y+i][valor_x]=123;
            i++;
        }








 for(int y=0;y<4;y++)//pinta 7 filas
    {
        for(int x=0;x<4;x++)//da el salto de linea 7 veces
        {
            cout<<base[y][x]<<"--";
        }
        cout<<endl;
    }










    /*cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"y columna"<<endl;
    cout<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"fila 0"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    for(int x=0;x<7;x++)//fila
    {
            cout<<base[0][x]<<"--";
    }
    */








    return 0;
}
