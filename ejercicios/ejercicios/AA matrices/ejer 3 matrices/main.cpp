#include <iostream>

using namespace std;

int main()
{
    int i;
    int j;
    int matriz[3][3];
    int suman=0;
    int sumap=0;


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
            cout<<matriz[i][j]<<" -- ";
        }
        cout<<endl;
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(matriz[i][j]<0)
            {
                suman=suman+matriz[i][j];
            }
            else
            {
                sumap=sumap+matriz[i][j];
            }
        }
        cout<<endl;
    }

    cout<<"suma negativos: "<<suman<<endl;
    cout<<"suma positivos: "<<sumap<<endl;

    return 0;
}
