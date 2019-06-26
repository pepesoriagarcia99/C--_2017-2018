#include <iostream>

using namespace std;

int main()
{
    float nota1,nota2,nota3;
    float media1,media2,media3;
    float suma;

    cout<<"Introduce nota 1: ";
    cin>>nota1;
    cout<<"Introduce nota 2: ";
    cin>>nota2;
    cout<<"Introduce nota 3: ";
    cin>>nota3;

    media1=(nota1*30)/100;
    media2=(nota2*50)/100;
    media3=(nota3*20)/100;

    suma=media1+media2+media3;

    cout<<"nota final: "<<suma<<endl;
    return 0;
}
