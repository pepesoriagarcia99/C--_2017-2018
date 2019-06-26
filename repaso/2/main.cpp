#include <iostream>

using namespace std;

int main()
{
    //sara tiene el valor del euro y el dolar actual
    float euros;
    float dolares;
    float resultado_dolares;
    float resultado_euros;

    cout << "Conversor de euros a dolares" << endl;
    cout<<endl;
    cout<<"Introduce euros: ";
    cin>>euros;
    resultado_dolares=(euros*1.23);
    cout<<"Dolares: "<<resultado_dolares<<endl;

    cout << "Conversor de dolares a euros" << endl;
    cout<<endl;
    cout<<"Introduce dolares: ";
    cin>>dolares;
    resultado_euros=(dolares*0.82);
    cout<<"Dolares: "<<resultado_euros<<endl;


    return 0;
}
