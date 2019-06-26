#include <iostream>

using namespace std;

int main()
{
    int matriz[3][3];
    int i;
    int j;
    int num=0;


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Introduce valor: ";
            cin>>matriz[i][j];
        }
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<matriz[i][j]<<"--";
        }
        cout<<endl;
    }

    cout<<"Intruduce numero: ";
    cin>>num;


    for(i=0;i==num;i++)
    {
        for(j=0;j<3;j++)
        {
           cout<<matriz[i][j]<<"--";
        }
        cout<<endl;
    }

    return 0;
}
