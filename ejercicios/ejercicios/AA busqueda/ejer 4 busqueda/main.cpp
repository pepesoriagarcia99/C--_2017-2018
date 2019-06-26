#include <iostream>

using namespace std;

int main()
{
    int tabla[10];
    int i;
    int suma=0;


    for(i=0;i<10;i++)
        {
       cout<<"introducir numero"<<i<<endl;
       cin>>tabla[i];
        }
    for(i=0;i<10;i++)
        {
            cout<<"----"<<tabla[i];cout<<"----";
        }
            cout<<endl;
    for (i=0;i<10;i++)
    {
        if(tabla[i]%2==0)
        {
            suma=tabla[i]+suma;
        }
    }

    cout<<"media "<<suma/i<<endl;
    return 0;
}
