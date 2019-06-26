#include <iostream>

using namespace std;

int main()
{
    int tabla[100];
    int i=0;
    int cont=0;
    int suma=0;
    int mayor=0;
    int media=0;


    while(tabla[cont]!=0 || cont<8)
    {
    cout<<"Valor: ";
    cin>>tabla[i];

    cont++;
    }


    for(i=0;i<10;i++)
    {suma=suma+tabla[i];}

    media=suma/cont;

    for(i=0;i<10;i++)
    {
        if(tabla[i]>mayor)
        {
            mayor=tabla[i];
        }
    }

    cout<<"media"<<media<<endl;
    cout<<"suma"<<suma<<endl;
    cout<<"contador"<<cont<<endl;
    cout<<"mayor"<<mayor<<endl;

    return 0;
}
