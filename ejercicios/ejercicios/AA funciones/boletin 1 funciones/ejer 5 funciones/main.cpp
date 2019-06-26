#include <iostream>

using namespace std;

int divisores(int num)
{
    int suma=0;
    int multiplicacion=0;

    for(int i=1;i<num;i++)
    {
        multiplicacion=num%i;
        if(multiplicacion==0)
        {
            suma=suma+i;
        }
    }
    return suma;
}
bool hermano (int num1, int num2, int res_div_num1, int res_div_num2)
{
    bool hermano;

    if(num1==res_div_num2 && num2==res_div_num1)
    {hermano=true;}
    else
    {hermano=false;}

    return hermano;
   }

int main()
{
    int num1;
    int num2;
    bool res;
    int res_div_num1;
    int res_div_num2;

    cout<<"Introduce numero 1: ";
    cin>>num1;
    cout<<"Introduce numero 2: ";
    cin>>num2;

    res_div_num1=divisores(num1);
    res_div_num2=divisores(num2);
    res=hermano(num1,num2,res_div_num1,res_div_num2);

    if(res==true)
    {cout<<"Los numeros son amigos"<<endl;}
    else
    {cout<<"Los numeros no son amigos"<<endl;}
    return 0;
}
