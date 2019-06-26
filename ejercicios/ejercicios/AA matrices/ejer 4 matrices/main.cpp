#include <iostream>

using namespace std;

int main()
{
    int matriz[2][4];

    int j;
    int i;

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<"Introducir Valor: ";
            cin>>matriz[i][j];
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<matriz[i][j]<<"--";
        }
    cout<<endl;
    }
     cout<<endl; cout<<endl; cout<<endl; cout<<endl;

    for(j=0;j<4;j++)
    {
        for(i=0;i<2;i++)
        {
            cout<<matriz[i][j]<<"--";

        }
        cout<<endl;
    }


    return 0;
}
