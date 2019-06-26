#include <iostream>

using namespace std;

int main()
{
    int tabla3[10];
    int i=0;
    int maax=0;

    for(i=0;i<10;i++)
    {
    cout << "Introducir numeros "<<i << endl;
    cin>>tabla3[i];
    }
    for(i=0;i<10;i++)
        {
             cout<<tabla3[i];
        }

     for(i=0;i<10;i++)
        {
        if (tabla3[i]>maax)
            {
            maax=tabla3[i];

            }

        }
         cout<<"el numero es "<<maax<<endl;

    return 0;
}
