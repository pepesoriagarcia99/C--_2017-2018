#include <iostream>

using namespace std;

int main()
{
    int tabla[5];
    int mayores[5];
    int menores[5];
    int num=0;
    int i=0;
    int cont=0;


    for(i=0;i<5;i++)
    {
       menores[i]=0;
       mayores[i]=0;
    }

    for(i=0;i<5;i++)
    {
        cout<<"Introduce Valor: ";
        cin>>tabla[i];
    }

    cout<<"Numero: ";
    cin>>num;

    for(i=0;i<5;i++)
    {
        if(num>tabla[i])
        {
            menores[cont]=tabla[i];
            cont++;
        }
    }
    cont=0;
    for(i=0;i<5;i++)
    {
        if(num<tabla[i])
        {
            mayores[cont]=tabla[i];
            cont++;
        }
    }

    for(i=0;i<5;i++)
    {cout<<"Mayor: "<<mayores[i]<<"  --  ";}
     cout<<endl;
    for(i=0;i<5;i++)
    {cout<<"Menor: "<<menores[i]<<"  --  ";}

    return 0;
}
