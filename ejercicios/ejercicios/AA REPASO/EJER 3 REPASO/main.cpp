#include <iostream>

using namespace std;

int main()
{
    int tabla[5];
    int i;
    bool encontrado=false;


    for(i=0;i<5;i++)
    {
        cout<<"Introduce numero de tabla "<<endl;
        cin>>tabla[i];
    }

    i=0;
    while((i<5) && (encontrado==false))
    {
        if(tabla[i]==2)
        {
            encontrado=true;
        }
        else
        {
            i++;
        }
    }
    if(encontrado==true)
    {
        cout<<" existe el valor 2"<<endl;
    }
    else{cout<<" no existe el valor 2"<<endl;}
    return 0;
}
