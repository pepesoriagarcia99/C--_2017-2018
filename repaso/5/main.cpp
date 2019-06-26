#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    int tabla[10];
    int num;
    int cont;

    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        tabla[i]=rand()%9;
    }
    for(int i=0;i<10;i++)
    {
        cout<<tabla[i]<<"--";
    }
    cout<<endl;
    cout<<"Introducir numero: ";
    cin>>num;

    cont=0;
    for(int i=0;i<10;i++)
    {
        if(tabla[i]==num)
        {
            cont++;
        }
    }
    cout<<"Numero aparece: "<<cont<<endl;



    return 0;
}
