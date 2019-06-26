#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int opc;

    cout << "Introduce el primero numero" << endl;
    cin>>num1;
    cout << "Introduce el segundo numero" << endl;
    cin>>num2;
    cout << "Introduce el tercer numero" << endl;
    cin>>num3;

    do{
        cout<<"----------menu---------"<<endl;
        cout<<"------ 1.- Maximo ------"<<endl;
        cout<<"------ 2.- Minimo -----"<<endl;
        cout<<"------ 3.- hay 2 iguales ------"<<endl;
        cout<<"------ 4.- son todos diferentes -----"<<endl;
        cout<<"------ 5.- factorial del mayor ------"<<endl;
        cout<<"------ 6.- salir ------"<<endl;
        cout<<"-Introduzca una opcion-"<<endl;
        cin>>opc;


            if (opc<=0 || opc>6)
        {
            cout<<"ERROR!!!"<<endl;
        }
        else
        {
            //implementamos las opciones del menu
            switch (opc)
            {
                case 1:
                {

                    if(num1 > num2)
                        {cout<<"El numero mayor es "<<num1<<endl;}
                    else
                        {
                    if(num2 > num3)
                    {cout<<"El numero mayor es "<<num2<<endl;}
                    else
                    {cout<<"El numero mayor es "<<num3<<endl;}
                        }
                    break;

                }
                case 2:
                {
                    if(num1 < num2 && num1 < num2)
                        {cout<<"El numero menor es "<<num1<<endl;}
                    else
                        {
                    if(num2 < num3 && num2 < num3)
                    {cout<<"El numero menor es "<<num2<<endl;}
                    else
                    {cout<<"El numero menor es "<<num3<<endl;}
                        }
                        break;
                }
                case 3:
                {

                    if(num1 = num2)
                        {cout<<"numero1 y numero 2 son iguales"<<endl;}
                    if(num2 = num3)
                    {cout<<"numer2 y numero3 son iguales"<<endl;}
                    if(num3 =num1)
                    {cout<<"numero3 y numero1 son iguales"<<endl;}
                    if(num1!=num2 || num1!=num3 || num2!=num3)
                        {
                         {cout<<"todos son diferentes"<<endl;}
                        }

                    break;
                }
                case 4:
                {

                    break;
                }
                case 5:
                {

                    break;
                }
                case 6:
                {
                    break;
                }
            }//fin del switch
        }//fin del else

    }while(opc!=6);



    return 0;

    }
