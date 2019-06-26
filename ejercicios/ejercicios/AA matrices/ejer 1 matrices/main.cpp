#include <iostream>

using namespace std;

int main()
{
    int matriz[3][3];
    int i;
    int j;
    int suma=0;




    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

               matriz[i][j]=0;
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            //cout<<"introduce valor: ";
            //cin>>matriz[i][j];
            if(i!=j)
           {
            matriz[i][j]=1;
           }

        }
    }



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             cout<<matriz[i][j]<<"---";
            //cout<<"en la fila "<<i<<" en la columna "<<j<<" el valor: "<<matriz[i][j]<<endl;
            suma=suma+matriz[i][j];
        }
        cout<<endl;
    }


    cout<<"suma: "<<suma<<endl;
    return 0;
}
