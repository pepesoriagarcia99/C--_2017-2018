#include <iostream>

using namespace std;

int main()
{
    int tabla[10];
    int i;
    int num=0;
    int c=0;
    int menor=0;

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



    for(i=0;i<10;i++)
    {
        if(tabla[i]>num)
        {
            c++;
        }
        else
        {
            menor=tabla[i]+menor;
        }

    }

    cout<<" -mayores "<<c<<endl;
     cout<<" -suma menores "<<menor<<endl;

    return 0;
}
