#include <iostream>

using namespace std;

int suma(int num1,int num2)
{
    int res=0;
    res=num1+num2;
    return(res);
}
int mayor(int a1,int a2,int  a3,int a4,int a5)
{
    int mayor=0;
    int tabla[5];

    tabla[0]=a1;
    tabla[1]=a2;
    tabla[2]=a3;
    tabla[3]=a4;
    tabla[5]=a5;

    for(int i=0;i<5;i++)
    {
        if(tabla[i]>mayor)
        {
            mayor=tabla[i];
        }
    }
    return(mayor);
}
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;

    int z;
    int r=0;

    cout<<"Introduce numero 1: ";
    cin>>a;
    cout<<"Introducir numero 2: ";
    cin>>b;
    cout<<"Introducir numero 3: ";
    cin>>c;
    cout<<"Introducir numero 4: ";
    cin>>d;
    cout<<"Introducir numero 5: ";
    cin>>e;


    z=suma(a,b);
    r=mayor(a,b,c,d,e);

    cout<<"suma: "<<z<<endl;
    cout<<"Maximo: "<<r<<endl;

    return 0;
}
