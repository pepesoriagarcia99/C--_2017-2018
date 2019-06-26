#include <iostream>

using namespace std;

int main()
{
    int num=0;
    char nombre;
    int i;

    cout<<"introduce numero"<<endl;
    cin>>num;

    cout<<"introduce nombre"<<endl;
    cin>>nombre;

    for(i=0;i<num;i++)
    {
        cout<<nombre<<endl;
    }
    return 0;
}
