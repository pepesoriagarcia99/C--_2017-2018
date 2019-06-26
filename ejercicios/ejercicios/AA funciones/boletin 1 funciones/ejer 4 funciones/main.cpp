#include <iostream>

using namespace std;

int suma_divisores_todos(int num)
{
    int mul=0;
    int suma=0;

        for(int i=1;i<num;i++)
        {
            mul=num%i;
            if(mul==0)
            {
                suma=suma+i;
            }
        }
    return(suma);
}
int suma_divisores_sinnum(int num)
{
    int suma;
    int mul=0;

    for(int i=0;i<num;i++)
    {
        mul=num%i;
        if(mul==0)
        {
            suma=suma+i;
        }
    }
    suma=suma-num;
    return(suma);
}
int main()
{
    int num=0;
    int opc=0;
    int res_1=0;
    int res_2=0;

    cout<<"Introduce un numero: ";
    cin>>num;
    cout<<"Introduce -1- para suma de todos los divisores o -0- para suma de divisores sin num: ";
    cin>>opc;
    if(opc==1)
    {
        res_1=suma_divisores_todos(num);
        cout<<"resultado: "<<res_1<<endl;
    }
    if(opc==0)
    {
        res_2=suma_divisores_sinnum(num);
        cout<<"resultado: "<<res_2<<endl;
    }

    return 0;
}
