#include <iostream>

using namespace std;

int main()
{
    int matriz[4][4];
    int i;
    int j;
    int opc;


    do{

    cout<<"menu"<<endl;
    cout<<"ejer 1"<<endl;
    cout<<"eje 2"<<endl;
    cout<<"ejer 3"<<endl;
    cin>>opc;

    if(opc<=0 || opc>3)
    {
        cout<<"Valor no valido"<<endl;
    }
    else
    {
        switch(opc)
        {
        case 1:
            {
                for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<"Introducir valor: ";
            cin>>matriz[i][j];
        }
    }

     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<matriz[i][j]<<"--";
        }
        cout<<endl;
    }

    for(j=0;j<4;j++)
    {
        for(i=0;i<4;i++)
        {
          matriz[i][0]=matriz[0][j];
        }
    }
                break;
            }

        case 2:
            {
                break;
            }
        case 3:
            {
                break;
            }
        }

    }
    }while(opc!=3);
    return 0;
}
