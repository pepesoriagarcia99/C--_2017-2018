#include <iostream>

using namespace std;

int suma_3(int num1, int num2, int num3)
{
 int res_3=0;

 res_3=num1+num2+num3;

 return res_3;
}
int suma_2(int num1, int num2,int num3)
{
 int res_2=0;

 res_2=(num1+num2)-num3;

 return res_2;
}
int multi(int num1, int num2,int num3)
{
 int res_multi=0;

 res_multi=num1*num2*num3;

 return res_multi;
}
int div(int num1, int num2)
{
 int res_div=0;

    if(num1<num2 && num2!=0)
    {
        res_div=num1/num2;
    }
    else
    {
        res_div=0;
    }
 return res_div;
}
int main()
{

    int num1,num2,num3;
    int res_3;//seria res a la hora de mostrarlo
    int res_2;
    int res_multi;
    int res_div;

    cout<<"Introduce numero 1: "<<endl;
    cin>>num1;
    cout<<"Introduce numero 2: "<<endl;
    cin>>num2;
    cout<<"Introduce numero 3: "<<endl;
    cin>>num3;

    res_3=suma_3(num1,num2,num3);
    res_2=suma_2(num1,num2,num3);
    res_multi=multi(num1,num2,num3);
    res_div=div(num1,num3);

    cout<<"Resultado 1: "<<res_3<<endl;
    cout<<"Resultado 2: "<<res_2<<endl;
    cout<<"Resultado 3: "<<res_multi<<endl;
    cout<<"Resultado 4: "<<res_div<<endl;

    return 0;
}
