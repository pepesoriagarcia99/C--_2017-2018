#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int vuelta (char num[20], int cont)
{
    int num_v[20];


    cout<<"contador: "<<cont<<endl;
    for(int i=0;i<cont;i++)
    {

    }
    return(num_v[20]);
}
int capicua (char num[20], int cont)
{
    int res=0;


    return(res);
}
int main()
{
    char numero[20];
    char numero_v[20];
    int cont=0;
    int res=0;

    for(int i=0;i<20;i++)
    {numero[i]='a';}

    cout<<"Introduce valor: ";
    gets(numero);

   for(int i=0;i<20;i++)
    {
        if(numero[i]!='a')
        {
            cont++;
        }
    }

    numero_v[20]=(numero[20],cont);
    for(int i=0;i<20;i++)
    {
        cout<<numer_v[i]<<"---";
    }

    res=capicua(numero[20],cont);
    cout<<res<<endl;

    return 0;
}
