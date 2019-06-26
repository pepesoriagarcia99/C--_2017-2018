#include <iostream>

using namespace std;

int main()
{

   int tabla3[10];
   int num=0;

    for(int i=0;i<10;i++)
    {
    cout << "numeros "<<i<< endl;
    cin>>tabla3[i];
    }
     for(int i=0;i<10;i++)
    {
    cout << "numero es "<<tabla3[i]<<" ";
    }
    cout << "introduce tu numero "<< endl;
    cin>>num;

    for(int i=0;i<10;i++)
    {
        if(tabla3[i]>num)
            {
                 cout << "numeros mayones a tu numero "<<tabla3[i]<<endl;
            }
        if(tabla3[i]<num)
           {
               cout << "numeros menores a tu numero "<<tabla3[i]<<endl;
           }


    }
    return 0;
}
