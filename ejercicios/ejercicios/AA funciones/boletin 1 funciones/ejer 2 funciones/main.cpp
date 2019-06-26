#include <iostream>

using namespace std;

int perfecto(int num)
{
    int res=0;
    int suma=0;
    int fin=0;

    for(int i=1;i<num;i++)
    {
        res=num%i;
        if(res==0)
        {
            suma=suma+i;
        }
    }
    if(suma==num)
    {fin=1;}
    else
    {fin=0;}
   return(fin);
}
int main()
{
   int num;
   int res=0;

    cout<<"Inserta numero: ";
    cin>>num;

    res=perfecto(num);

    if(res==1)
    {cout<<"El valor es un numero perfecto"<<endl;}
    if(res==0)
    {cout<<"El valor es un numero imperfecto"<<endl;}


    return 0;
}
