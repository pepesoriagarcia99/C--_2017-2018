#include <iostream>

using namespace std;

int main()
{
    int num=0;
    int i;
    int suma=0;
    int par=0;

    cout<<" introduce numero"<<endl;
    cin>>num;

    for(i=num;i>=0;i--)
    {
        suma=i+suma;
    }
    for(i=num;i>=1;i--)
    {
         if(i%2==0)
        {
            par++;
        }
         if (num%i==0)
        {
        cout<<"divisor es "<<i<<endl;
        }
    }
     cout<<"suma "<<suma<<endl;
     cout<<"pares "<<par<<endl;
    return 0;
}
