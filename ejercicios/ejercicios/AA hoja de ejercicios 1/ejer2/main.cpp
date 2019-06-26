#include <iostream>

using namespace std;

int main()
{
    int largo=0;
    int ancho=0;
    int perimetro=0;
    int area=0;

    cout << "Introduce largo del rectangulo."<< endl;
    cin>>largo;
    cout << "Introduce ancho del rectangulo."<< endl;
    cin>>ancho;

    perimetro=2*(largo+ancho);
    cout<<"EL perimetro es: "<<perimetro<<endl;

    area=(largo*ancho);
    cout<<"EL area es: "<<area<<endl;


    return 0;
}
