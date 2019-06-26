#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    char nombre1[20]="Juan";
    char nombre2[20]="Ana";
    char nombre3[20]="Pepe";
    char nombre4[20]="Alicia";
    char nombre5[20]="Carlos";
    char nombre6[20]="Alba";
    int i;

    //comprobar si existen 2 iguales
   for (i=0;i<20;i++)
   {

        if(nombre1[i]==nombre2[i])
        {
            cout<<"igual"<<endl;
        }
        else
        {
            cout<<"diferente"<<endl;
        }
   }



    //copiar la cadena de pepe a otra que se llame aux
    char aux[20];
    strcpy(aux, nombre3);
    cout<<"aux es "<<aux<<endl;
    //mostrar la cadena de mayor longitud

    //mostar las cadenas que epiezen por "A"

    return 0;
}
