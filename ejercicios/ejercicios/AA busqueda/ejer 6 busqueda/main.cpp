#include <iostream>

using namespace std;

int main()
{
   int num=0;
   int tabla[num];
   int i;
   int suma=0;


   cout<<"introduce numero de alumnos"<<endl;
   cin>>num;

   for(i=0;i<num;i++)
   {
       cout<<"nota de alumno "<<i<<endl;
       cin>>tabla[i];
   }
   for(i=0;i<num;i++)
   {
       suma=tabla[i]+suma;
   }
   cout<<"Media-> "<<suma/num<<endl;

    return 0;
}
