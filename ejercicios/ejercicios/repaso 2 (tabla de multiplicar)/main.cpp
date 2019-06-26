#include <iostream>

using namespace std;

int main()
{
    int num=0;
    int i;

    cout<<"Que tabla de multiplicar quieres?"<<endl;
    cin>>num;

    for (i=0;i<10;i++)
    {
        cout<<i*num<<endl;
    }
    return 0;
}
