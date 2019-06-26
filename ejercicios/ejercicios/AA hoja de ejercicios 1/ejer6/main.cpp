#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a=0,b=0,c=0;
    float raiz=0;
    float x1=0;
    float x2=0;


    cout << "Introduce numero a"<< endl;
    cin>>a;
    cout << "Introduce numero b"<< endl;
    cin>>b;
    cout << "Introduce numero c"<< endl;
    cin>>c;

    raiz=(sqrt(b*b)-(4*a*c));

    if (raiz<0)
    {
        x1=((-b+raiz)/2*a);
        x2=((-b-raiz)/2*a);
        cout <<x1<< endl;
        cout <<x2<< endl;
    }
    else
    {
        cout << "Error"<< endl;
    }


    return 0;
}
