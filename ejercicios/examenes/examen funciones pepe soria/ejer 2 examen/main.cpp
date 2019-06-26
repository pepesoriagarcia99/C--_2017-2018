#include <iostream>

using namespace std;

bool bisiesto(int a)
{
    bool es_bisiesto=false;

    if(a%4==0 && (a%100!=0 || a%100==0))
    {
        es_bisiesto=true;
        cout<<"El anio "<<a<<" si es bisiesto"<<cout;
    }
    else
    {
        cout<<"El anio "<<a<<" no es bisiesto"<<endl;
    }
    return(es_bisiesto);
}
void dia_siguiente(int d,int m, int a)
{
    d=d+1;

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    {
        if(d==32 && m==12)
        {
            d=1;
            m=1;
            a=a+1;
        }
        else if(d==32)
        {
            d=1;
            m=m+1;
        }
        bisiesto(a);
    }
    else if(m==2)
    {
        //podria contemplar el dia 29 de febrero haciendo una llamada a otra funcio que solo devolviera un bool para saber si puedo o no sumarle pero aun que
        //yo le sume, el año no va  a variar y por lo tanto voy a tener el mismo resultado si es 28 no es bisiesto y si es 29 si lo es.
        bisiesto(a);
    }
    else if(m==4 || m==6 || m==9 || m==11)
    {
        if(d==31)
        {
            d=1;
            m=m+1;;
        }
        bisiesto(a);
    }
}
int main()
{
    int d;
    int m;
    int a;

    cout<<"Dia: ";
    cin>>d;
    cout<<"Mes: ";
    cin>>m;
    cout<<"Anio: ";
    cin>>a;

    dia_siguiente(d,m,a);

    return 0;
}
