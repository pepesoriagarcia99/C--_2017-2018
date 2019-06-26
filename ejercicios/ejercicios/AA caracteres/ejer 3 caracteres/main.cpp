#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int main()
{
   char frase[10]="";
   char vuelta[11]="";
   int i=0;
   int j=10;
   int cont=0;
   bool palin=false;

   cout<<"Introduce una frase: ";
   gets(frase);

   for(i=0;i<10;i++)
   {
       if(frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u')
       {
           frase[i]='.';
           cont++;
       }
   }
   cout<<frase<<endl;
   cout<<"Numero de vocales: "<<cont<<endl;
   for(i=0;i<10;i++)
   {
       j--;
       frase[i]=vuelta[j];
   }



    return 0;
}
