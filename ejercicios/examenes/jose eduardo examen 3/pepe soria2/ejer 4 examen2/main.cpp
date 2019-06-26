#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char nombre1[10]="";
    char nombre2[10]="";
    char nombre3[10]="";
    int i;
    int valor1,valor2,valor3=0;
    char letra;

    cout<<"Introduce primer nombre: ";
    cin>>nombre1;
    cout<<"Introduce segundo nombre: ";
    cin>>nombre2;
    cout<<"Introduce tercero nombre: ";
    cin>>nombre3;

    valor1=strlen(nombre1);
    valor2=strlen(nombre2);
    valor3=strlen(nombre3);

    if(valor1>valor2 && valor1>valor3)
    {cout<<"La palabra mayor es: "<<nombre1;}
    if(valor2>valor1 && valor2>valor3)
    {cout<<"La palabra mayor es: "<<nombre2;}
    if(valor3>valor2 && valor3>valor1)
    {cout<<"La palabra mayor es: "<<nombre1;}
    cout<<endl;

    cout<<"Introducir letra: ";
    cin>>letra;

    if(letra==nombre1[0])
    {cout<<nombre1<<" ";}
    if(letra==nombre2[0])
    {cout<<nombre2<<" ";}
    if(letra==nombre3[0])
    {cout<<nombre3<<" ";}
    cout<<" empiezan por "<<letra;

    return 0;
}
