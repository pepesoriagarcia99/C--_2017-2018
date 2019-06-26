#include <iostream>

using namespace std;

int main()
{
   int matriz[3][4];
   int i=0;
   int j=0;
   int suma=0;
   int maximo=0;
   int ubicacion=0;

   for(i=0;i<3;i++)
   {
       for(j=0;j<4;j++)
       {
           cout<<"Introduce valor :";
           cin>>matriz[i][j];
       }
   }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
           cout<<matriz[i][j]<<"--";
        }
        cout<<endl;
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            suma=suma+matriz[i][j];
        }
        cout<<"valor fila "<<i<<": "<<suma<<endl;
        if(suma>maximo)
        {
            maximo=suma;

        }
        suma=0;
    }

    cout<<"El numero maximo es: "<<maximo<<endl;
    cout<<"Fila: "<<ubicacion<<endl;

    return 0;
}
