#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    int base[7][7];
    int num=0;




    srand(time(NULL));
    for(int y=0;y<7;y++)
    {
        for(int x=0;x<7;x++)
        {
            base[y][x]=rand()%3;
        }
    }

    for(int y=0;y<7;y++)
    {
        for(int x=0;x<7;x++)
        {
            cout<<base[y][x]<<"--";
        }
        cout<<endl;
    }



    return 0;
}
