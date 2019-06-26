#include <iostream>

using namespace std;

int main()
{

    int tabla3[10];
    int i=0;

    for(i=0;i<10;i++)
    {
    cout << "Introducir numeros "<<i << endl;
    cin>>tabla3[i];
    }


    for(i=0;i<10;i++)
    {

      if(tabla3[i]%2==0)
      {
      cout<<"numero par "<<tabla3[i]<<endl;
      }
    }

    return 0;
}
