#include <iostream>
#include <string.h>



using namespace std;

int main()
{
    //1:Pedir 10 numeros por teclado y guardar en la tabla solo aquellos comprendidos entre el 2 y 7
    int tabla[10];
    int i;
    int num=0;
    int mayor=2;

      for(i=0;i<10;i++)
    {
        cout<<"introducir numero "<<i<<": ";
        cin>>num;
        if(num >= 2 && num <=7 )
        {
           tabla[i]=num;
        }
        else
        {
            tabla[i]=0;
        }
    }


     for(i=0;i<10;i++)
     {
         if(tabla[i]!=0)
         {
            cout<<" - "<<tabla[i]<<" este numero esta dentro del rango"<<endl;
         }
     }
     //2:comprobar y mostrar en numero de veces que se retipe el mayor
    for(i=0;i<10;i++)
    {
            if(tabla[i]>mayor)
            {
                mayor=tabla[i];
            }
    }
    cout<<"Este es el mayor: "<<mayor<<endl;



    return 0;
}
