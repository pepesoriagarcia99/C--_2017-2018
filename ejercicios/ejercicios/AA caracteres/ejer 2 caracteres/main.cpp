#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    char tabla[20];
    int i;
    int cont=0;



        cout<<"introduce una palabra de caracteres: ";
        gets(tabla);

    for(i=0;i<20;i++)
    {
        if(tabla[i]=='a' || tabla[i]=='e' || tabla[i]=='i' || tabla[i]=='o' || tabla[i]=='u')
        {
            cont++;
        }
    }
    cout<<"numero de vocales: "<<cont<<endl;
    return 0;
}
