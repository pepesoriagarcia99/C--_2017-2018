#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    char palabra[1000]="";
    int i;

    cout<<"Introduce cadena: ";
    gets(palabra);

    for(i=0;i<1000;i++)
    {
        if(palabra[i]=='a')
            {palabra[i]='a';}
        if(palabra[i]=='b')
            {palabra[i]='ª';}
        if(palabra[i]=='c')
            {palabra[i]='!';}
        if(palabra[i]=='d')
            {palabra[i]='"';}
        if(palabra[i]=='e')
            {palabra[i]='#';}
        if(palabra[i]=='f')
            {palabra[i]='·';}
        if(palabra[i]=='g')
            {palabra[i]='~';}
        if(palabra[i]=='h')
            {palabra[i]='$';}
        if(palabra[i]=='i')
            {palabra[i]='€';}
        if(palabra[i]=='j')
            {palabra[i]='%';}
        if(palabra[i]=='k')
            {palabra[i]='¬';}
        if(palabra[i]=='l')
            {palabra[i]='&';}
        if(palabra[i]=='m')
            {palabra[i]='/';}
        if(palabra[i]=='n')
            {palabra[i]='(';}
        if(palabra[i]=='ñ')
            {palabra[i]=')';}
        if(palabra[i]=='o')
            {palabra[i]='=';}
        if(palabra[i]=='p')
            {palabra[i]='?';}
        if(palabra[i]=='q')
            {palabra[i]='¿';}
        if(palabra[i]=='r')
            {palabra[i]='¡';}
        if(palabra[i]=='s')
            {palabra[i]='^';}
        if(palabra[i]=='t')
            {palabra[i]='`';}
        if(palabra[i]=='u')
            {palabra[i]='[';}
        if(palabra[i]=='w')
            {palabra[i]='*';}
        if(palabra[i]=='x')
            {palabra[i]='+';}
        if(palabra[i]=='y')
            {palabra[i]=']';}
        if(palabra[i]=='z')
            {palabra[i]='ç';}
        if(palabra[i]==' ')
            {palabra[i]='¨';}

    }
    cout<<palabra<<endl;
    return 0;
}
