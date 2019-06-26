#include <iostream>

using namespace std;

int main()
{
   int tabla[10];
   int i=0;
   int num=0;
   bool encontrado=false;

   for(i=0;i<10;i++)
   {
       cout<<"introducir numero "<<i<<endl;
       cin>>tabla[i];
   }
    cout<<"Introduce valor a buscar"<<endl;
    cin>>num;

   i=0;
   while((i<10) && (encontrado==false))
   {

        if (strcmp(letra,palabra[i])==0)
        {
            cout<<"las dos cadenas son iguales"<<endl;
        }
        else
        {
            cout<<"las dos cadenas son diferentes"<<endl;
        }

   }
   if(encontrado==true)
   {
    cout<<"El valor esta"<<endl;
   }
    return 0;
}
