#include <iostream>

using namespace std;

int main()
{
   int opc;
   int tabla[5];
   int i;
   int mayor=0;
   int impares=0;
   int factorial=1;
   int num=0;
   int existe=0;


   for(i=0;i<5;i++)
   {
       cout<<"introduce numero "<<i<<endl;
       cin>>tabla[i];
   }


   do{
    cout<<"Elemento maximo"<<endl;
    cout<<"Cantidades impares"<<endl;
    cout<<"Factorial del primer numero"<<endl;
    cout<<"Cantidades repetidas"<<endl;
    cout<<"Salir"<<endl;
    cin>>opc;

    if((opc<=0) || (opc>5))
    {
        cout<<"ERROR!!!!"<<endl;
    }
    else
    {
        switch(opc)
            {
                case 1:
                {
                    for(i=0;i<5;i++)
                    {

                    }


                    break;
                }
                case 2:
                {
                   for(i=0;i<5;i++)
                    {
                        if(tabla[i]%2!=0)
                        {
                            impares++;
                        }
                    }
                    cout<<"cantidad de impares "<<impares<<endl;
                    break;
                }
                case 3:
                {
                    for(i=tabla[0];i>=1;i--)
                    {
                        factorial=i*factorial;
                    }
                    cout<<"factorial "<<factorial<<endl;
                    break;
                }
                case 4:
                {
                    cout<<"introduce numero a buscar"<<endl;
                    cin>>num;

                    for(i=0;i<5;i++)
                    {
                        if(tabla[i]==num)
                        {
                            existe++;
                        }

                    }
                    if(existe>=1)
                    {
                        cout<<"El valor existe"<<endl;
                    }
                    cout<<" numero de veces repetido "<<existe<<endl;


                    break;
                }
                case 5:
                {

                    break;
                }



            }//cerrar swich
    }//cerrar else


   }while(opc!=5);






    return 0;
}
