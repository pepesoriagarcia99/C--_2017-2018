#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int suma=0;
    int resta=0;
    int multiplicacion=0;
    int division=0;

    cout << "Introduce numero 1"<< endl;
    cin>>num1;
    cout << "introduce numero 2"<< endl;
    cin>>num2;
    cout << "Introduce numero 3"<< endl;
    cin>>num3;

    suma=num1+num2+num3;
    cout<<"la suma es "<<suma<< endl;
    resta=((num1+num2)-num3);
    cout<<"la resta es "<<resta<< endl;
    multiplicacion=((num1*num2)/num3);
    cout<<"la multiplicacion es "<<multiplicacion<< endl;
    division=suma/10;
    cout<<"la division es "<<division<< endl;
    return 0;
}
