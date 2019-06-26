#include <iostream>

using namespace std;

int main()
{
    int matriz[4][3];
    int i;
    int j;
    int mayor=0;



    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"introduce valor: ";
            cin>>matriz[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<matriz[i][j]<<"--";
        }
        cout<<endl;
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            if(mayor<matriz[i][j])
            {
                mayor=matriz[i][j];
            }
        }

    }
    cout<<"Numero mayor: "<<mayor<<endl;

     for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            if(matriz[i][j]==mayor)
            {
              cout<<"Mayor: "<<"fila: "<<i<<" "<<"columna: "<<j<<endl;
            }
        }

    }
    return 0;
}
