#include <iostream>

using namespace std;

int main()
{
     int tabla3[10];
    int i=0;
    int multi=1;

    for(i=0;i<10;i++)
    {
    cout << "Introducir numeros "<<i << endl;
    cin>>tabla3[i];
    }
    for(i=0;i<10;i++)
        {
             cout<<tabla3[i]<<endl;
        }
      for(i=0;i<10;i++)
      {
         multi=tabla3[i]*multi;
      }
    cout<<"multiplicacion "<<multi<<endl;

    return 0;
}
