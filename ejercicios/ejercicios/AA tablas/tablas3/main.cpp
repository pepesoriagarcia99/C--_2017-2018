#include <iostream>

using namespace std;

int main()
{
    int tabla3[5];
    int i=0;
    float suma=0;
    float media=0;

    for(i=0;i<5;i++)
    {
    cout << "Introducir numeros "<<i << endl;
    cin>>tabla3[i];
    }

    for (i=0;i<5;i++)
    {
        cout<<tabla3[i]<<endl;
    }
    for (i=0;i<5;i++)
    {
        suma=suma+tabla3[i];

    }
    cout<<"suma "<<suma<<endl;
    cout<<"media "<<suma/5<<endl;

    return 0;
}
