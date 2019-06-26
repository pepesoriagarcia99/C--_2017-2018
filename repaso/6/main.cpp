#include <iostream>

using namespace std;

int main()
{
    int suma=0;
    int multiplo3=0;


    for(int i=0;i<100;i++)
    {
        if(i%2!=0)
        {
            suma=suma+i;
        }
    }
    for(int i=0;i<100;i++)
    {
        multiplo3=i*3;
        multiplo3=multiplo3+multiplo3;
    }
    cout<<"multiplos de 3: "<<multiplo3<<endl;
    cout<<"suma impares: "<<suma<<endl;
    return 0;
}
