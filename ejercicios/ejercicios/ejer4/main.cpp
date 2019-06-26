#include <iostream>

using namespace std;

int main()
{
    int num1=0;
    int num2=0;


    cout << "Introduce numero"<< endl;
    cin>>num1;
    cout << "Introduce numero"<< endl;
    cin>>num2;

    if (num1>num2)
    {
        cout<<"numero mayor "<<num1<<endl;
        cout<<"numero menor "<<num2<<endl;
    }
    else
    {
       cout<<"numero mayor "<<num2<<endl;
       cout<<"numero menor "<<num1<<endl;
    }


    return 0;
}
