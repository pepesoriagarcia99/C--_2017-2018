#include <iostream>

using namespace std;

int main()
{
    int tabla[10];
    int i;
    int num=0;
    bool encontrado=false;

    for(i=0;i<10;i++)
        {
       cout<<"introducir numero"<<i<<endl;
       cin>>tabla[i];
        }

       cout<<"introducir tu numero"<<endl;
       cin>>num;
    for(i=0;i<10;i++)
        {

            cout<<"----"<<tabla[i];
            cout<<"----";
        }
            cout<<endl;
        cout<<"tu numero"<<num<<endl;

        i=0;
        while((i<10) && (encontrado==false))
        {
            if(tabla[i]==num)
            {
               encontrado=true;
            }
            else
            {
               ++i;
            }

        }

        if(encontrado==true)
        {
            cout<<"posicion "<<i<<endl;
        }
        else
        {
            cout<<"no existe "<<endl;
        }
    return 0;
}
