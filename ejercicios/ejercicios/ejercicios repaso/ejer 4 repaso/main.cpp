#include <iostream>

using namespace std;

int main()
{
    int matriz[3][3];
    int num=0;


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Introduce numero: ";
            cin>>num;
            if(num>=0 || num<=9)
            {
                matriz[i][j]=num;
            }
        }
    }



    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<matriz[i][j]<<"-";
        }
        cout<<endl;
    }
    return 0;
}
