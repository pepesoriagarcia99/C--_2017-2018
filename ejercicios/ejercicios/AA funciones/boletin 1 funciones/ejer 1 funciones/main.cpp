#include <iostream>

using namespace std;
    //ejer 1:Escribir un programa que vaya pidiendo numeros por teclado hasta que encuentre el un numero primo. el programa debera utilizar una
    //funcion definida por el usuario a la que se le pase un numeor y nos devuelva un 0 en el caso de que el numero no se a primo y un 1 en caso contrario


int primo(int num)
{
    int res;
    int i,a;

    for(int i=1;i<(num+1);i++)
        {
            if(num%i==0)
            {
                a++;
            }
         }
        if(a!=2)
        {res=0;}
        else
        {res=1;}

    return(res);
}
int main()
{
        int num,res;
        cout<<"Ingrese numero"<<endl;
        cin>>num;

        res=primo(num);

        if(res==1)
        {cout<<"No es Primo";}
        if (res==0)
        {cout<<"Si es Primo";}

    return 0;
}
