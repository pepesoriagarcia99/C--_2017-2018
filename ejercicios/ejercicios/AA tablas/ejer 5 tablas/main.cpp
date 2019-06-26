#include <iostream>

using namespace std;

int main()
{
    int tabla3[10];
    int i=0;
    int positivo=0;
    int negativo=0;

    for(i=0;i<10;i++)
    {
    cout << "Introducir numeros "<<i << endl;
    cin>>tabla3[i];
    }
     for(i=0;i<10;i++)
    {
    cout << "numeros "<<tabla3[i] <<" ";
    }

    for(i=0;i<10;i++)
    {
        if(tabla3[i]>0)
        {
            positivo=positivo+1;
        }
        if(tabla3[i]<=0)
        {
            negativo=negativo+1;
        }
    }
          cout<<endl;
        cout<<"positivo "<<positivo<<endl;
        cout<<"negativo "<<negativo<<endl;
    return 0;
}
