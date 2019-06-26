#include <iostream>

using namespace std;

int main()
{
    int tabla3[10];
    int i;

    for(i=0;i<10;i++)
    {
    cout << "Introducir numeros "<<i << endl;
    cin>>tabla3[i];
    }


     for(i=0;i<10;i++)
    {
    cout << " - "<<tabla3[i];
    }

    cout<<endl;
     for(i=9;i>=0;i--)
    {
    cout << " - "<<tabla3[i];
    }


    return 0;
}
