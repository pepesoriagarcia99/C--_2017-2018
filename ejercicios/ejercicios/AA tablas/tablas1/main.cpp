#include <iostream>

using namespace std;

int main()
{
    int tabla1[20];

     for(int i=0;i<20;i++)
     {
         if (i<10)
         {
         tabla1[i]=0;
         cout<<tabla1[i];
         }
         else
         {
             tabla1[i]=1;
         cout<<tabla1[i];
         }
     }


   /*  for(int i=11;i<20;i++)
     {
         tabla1[i]=1;
         cout<<tabla1[i];
     }
     */
    return 0;
}
