#include <iostream>

using namespace std;

int main()
{
    int tablero[4][4];
    int intentos=1;
    int i=0;
    int j=0;
    int poi1=0;
    int poj1=0;
    int poi2=0;
    int poj2=0;
    int puntos=0;




        //introduce valores de los juegos
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
            cout<<"Introduce valor: ";
            cin>>tablero[i][j];
            }
        }

        /*muestra la tabla
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
            cout<<tablero[i][j]<<" -- ";
            }
            cout<<endl;
        }
        */
        while(intentos!=6)
        {

        cout<<"----------JUGADA"<<intentos<<"----------"<<endl;
        //carta1
        cout<<endl;
        cout<<"Introduce posicion i de la carta: ";
        cin>>poi1;
        cout<<"Introduce posicion j de la carta: ";
        cin>>poj1;

        cout<<"La carta es: "<<tablero[poi1][poj2];

        //carta2
        cout<<endl;
        cout<<"Introduce posicion i de la carta: ";
        cin>>poi2;
        cout<<"Introduce posicion j de la carta: ";
        cin>>poj2;

        cout<<"La carta es: "<<tablero[poi2][poj2]<<endl;
         cout<<endl;


        if(tablero[poi1][poj1]==tablero[poi2][poj2])
        {
        cout<<"Acertaste"<<endl;
        puntos=puntos+2;
        }
        else
        {
        cout<<"Has fallado"<<endl;
        }
        cout<<"Llevas "<<puntos<<" Puntos"<<endl;


        intentos++;
        }

        cout<<"Fin del Juego"<<endl;
    return 0;
}
