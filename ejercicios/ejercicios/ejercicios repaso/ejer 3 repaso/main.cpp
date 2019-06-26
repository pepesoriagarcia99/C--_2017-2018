#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    char frase[10]="";
    char vuelta[10]="";
    int i=0;
    int j;
    int valor=0;
    bool palindroma=false;


    cout<<"Introduce una frase: ";
    gets(frase);

    valor=strlen(frase);
    j=valor;

    for(i=0;i<(valor/2);i++)
    {
        if(frase[j-1]==frase[i])
        {
            palindroma=true;
        }
        j--;
    }
    cout<<"1: "<<frase<<endl;
    if(palindroma==true)
    {
        cout<<"Es palindroma"<<endl;
    }
    else
    {
        cout<<"No es palindroma"<<endl;
    }

    return 0;
}
