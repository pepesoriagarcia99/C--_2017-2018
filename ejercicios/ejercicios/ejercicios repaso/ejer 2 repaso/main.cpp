#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    char frase[10]="";
    int i=0;
    int cont=0;


    cout<<"Introduce una frase: ";
    gets(frase);




    for(i=0;i<10;i++)
    {
       if(frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u')
       {
          cont++;
       }
    }
     cout<<"Numero de vocales: "<<cont<<endl;

    return 0;
}
