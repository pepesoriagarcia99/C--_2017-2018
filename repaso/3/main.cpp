#include <iostream>

using namespace std;

int main()
{
    float valor_producto;
    char tipo_iva;
    float iva;
    float valor_con_iva;

    cout<<"Introduce valor del producto: ";
    cin>>valor_producto;
    cout<<"tipo de iva (<a>iva general, <b>iva reducido, <c>iva superreducido): ";
    cin>>tipo_iva;

    if(tipo_iva=='a' || tipo_iva=='A')
    {
        cout<<"Iva general(21%)"<<endl;
        iva=(valor_producto*21)/100;
        cout<<"valor sumado: "<<iva<<endl;
        valor_con_iva=valor_producto+iva;
        cout<<"valor final: "<<valor_con_iva<<endl;

    }
    if(tipo_iva=='b' || tipo_iva=='B')
    {
        cout<<"Iva reducido(10%)"<<endl;
        iva=(valor_producto*10)/100;
        cout<<"valor sumado: "<<iva<<endl;
        valor_con_iva=valor_producto+iva;
        cout<<"valor final: "<<valor_con_iva<<endl;
    }
    if(tipo_iva=='b' || tipo_iva=='B')
    {
        cout<<"Iva superreducido(4%)"<<endl;
        iva=(valor_producto*4)/100;
        cout<<"valor sumado: "<<iva<<endl;
        valor_con_iva=valor_producto+iva;
        cout<<"valor final: "<<valor_con_iva<<endl;
    }

    return 0;
}
