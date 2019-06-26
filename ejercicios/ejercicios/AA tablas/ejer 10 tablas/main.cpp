#include <iostream>

using namespace std;

int main()
{
    int tabla[10];
    int num;
    int i;
    int cont_mayores=0;
    int cont_menores=0;


    for(i=0;i<10;i++)
    {
        cout<<"introduce numero"<<endl;
        cin>>tabla[i];
    }

    cout<<"introduce tu numero"<<endl;
    cin>>num;

    for(i=0;i<10;i++)
    {
        if(tabla[i]>num)
        {
            cout<<" mayores a tu numero "<<tabla[i]<<endl;
            cont_mayores++;
        }
        if(tabla[i]<num)
        {
            cout<<" menores a tu numero "<<tabla[i]<<endl;
            cont_menores++;
        }
    }
    cout<<"cantidad de numeros mayores "<<cont_mayores<<endl;
    cout<<" cantidad de numeros menores "<<cont_menores<<endl;
    return 0;
}
