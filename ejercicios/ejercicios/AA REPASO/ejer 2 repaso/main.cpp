#include <iostream>

using namespace std;

int main()
{
    int tabla[5];
    int i;

    for(i=0;i<5;i++)
    {
        tabla[i]=1;
    }

    for(i=0;i<5;i++)
    {
        if(i%2!=0)
        {
            tabla[i]=2;
        }
    }
     for(i=0;i<5;i++)
    {
       cout<<" - "<<tabla[i];
    }

    return 0;
}
