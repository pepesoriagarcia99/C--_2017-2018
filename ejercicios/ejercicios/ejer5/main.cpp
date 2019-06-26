#include <iostream>

using namespace std;

int main()
{
    int num=0;


    for(int i=1;i<11;i++)
    {
    cout << "Introduce numero"<<i<< endl;
    cin>>num;

      if(num>=10)
    {
        cout<<"numero "<<num<<endl;
    }
    else
    {
         cout<<"error "<<endl;
    }
    }
    return 0;
}
