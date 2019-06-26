#include <iostream>

using namespace std;

int main()
{
    int tabla[10];
   int i=0;
   int num=0;


   for(i=0;i<10;i++)
   {
       cout<<"introducir numero"<<i<<endl;
       cin>>tabla[i];
   }

       cout<<"Introduce valor a buscar"<<endl;
       cin>>num;


   for(i=0;i<10;i++)
   {
       cout<<"-linea "<<i<<" valor "<<tabla[i]<<endl;
   }
       cout<<"valor a buscado"<<num<<endl;

    return 0;
}
