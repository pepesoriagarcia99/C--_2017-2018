#include <iostream>

using namespace std;

int main()
{

    int a;
    int b;
    int suma=1;


    cout<<"Introduce numero"<<endl;
    cin >>a;

    for(b=1;b<=a;b++)
    {
         suma=b+suma;
    }

    cout<<"La suma es "<<suma<<endl;

    return 0;
}
