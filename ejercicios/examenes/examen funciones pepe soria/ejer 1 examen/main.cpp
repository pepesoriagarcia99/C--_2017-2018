#include <iostream>

using namespace std;

float calcular_cantidad(float cantidad,float porcentaje,char operacion)
{
    float resultado;

    if(operacion=='+')
    {
      resultado=cantidad+((cantidad*porcentaje)/100);
    }
    if(operacion=='-')
    {
        resultado=cantidad-((cantidad*porcentaje)/100);
    }
    return(resultado);
}
int main()
{
    float cantidad;
    char operacion;
    float porcentaje;
    float res;

    cout<<"Rebaja del 20%: ";
    cin>>cantidad;
    porcentaje=20;
    operacion='-';
    res=calcular_cantidad(cantidad,porcentaje,operacion);
    cout<<"Resultado: "<<res<<endl;
    cout<<endl;
    cout<<"Rebaja del 50% sobre: ";
    cin>>cantidad;
    porcentaje=50;
    operacion='-';
    res=calcular_cantidad(cantidad,porcentaje,operacion);
    cout<<"Resultado: "<<res<<endl;
    cout<<endl;
    cout<<"Aumento del 30% sobre: ";
    cin>>cantidad;
    porcentaje=30;
    operacion='+';
    res=calcular_cantidad(cantidad,porcentaje,operacion);
    cout<<"Resultado: "<<res<<endl;
    return 0;
}
