#include <iostream>

using namespace std;

int main()
{
    int tabla[10];
    int i;
    int opc=0;


    for(i=0;i<10;i++)
    {
        cout<<"introduce numero"<<endl;
        cin>>tabla[i];
    }

    do{

        cout<<"----------menu---------"<<endl;
        cout<<"------ 1.- Numeros pares ------"<<endl;
        cout<<"------ 2.- Mostrar los Nª que se acaban a las posiciones pares -----"<<endl;
        cout<<"------ 3.- Mostar los Nª impares ------"<<endl;
        cout<<"------ 4.- Mostrar los Nª que se acaban en posicion impar -----"<<endl;
        cout<<"------ 5.- FIN ------"<<endl;
        cin>>opc;

        if(opc<=0 || opc>5)
        {
            cout<<"ERRO"<<endl;
        }
        else
        {
           switch (opc)
            {
                case 1:
                {
                    for(i=0;i<10;i++)
                    {
                        if(tabla[i]%2==0)
                        {
                            cout<<"- "<<tabla[i]<<endl;
                        }
                        }

                break;
                }
               case 2:
                {
                     for(i=0;i<10;i++)
                    {
                        if(i%2==0)
                        {
                            cout<<"- "<<tabla[i]<<endl;
                        }
                        }
                 break;
                }
                case 3:
                {
                       for(i=0;i<10;i++)
                        {
                            if(tabla[i]%2==!0)
                            {
                                cout<<"- "<<tabla[i]<<endl;
                            }
                        }
                break;
                }
                case 4:
                {
                    for(i=0;i<10;i++)
                        {
                            if(i%2==!0)
                            {
                                cout<<"- "<<tabla[i]<<endl;
                            }
                        }

                break;
                }
            }//fin del switch
        }//fin del else
    }while(opc<5);  //fin del do while


return 0;
}//fin del main
