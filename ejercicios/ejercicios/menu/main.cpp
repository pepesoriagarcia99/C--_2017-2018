#include <iostream>

using namespace std;

int main()
{
    /*crear un menu que inicialmente pida dos numeros por teclado y a continuacion, muestre lo siguiente
    -----menu-----
    -----1.- sumar -----
    -----2.- restar -----
    -----3.- salir -----
    -------------------
    */


    int num1,num2,num3,num4,num5;
    int opc;
    int suma=0;
    int resta=0;
    int pares,impares;
    int suma_pares=0;
    int suma_impares=0;
    int contar_pares=0;
    int contar_impares=0;


    cout << "Introduce el primero numero" << endl;
    cin>>num1;
    cout << "Introduce el segundo numero" << endl;
    cin>>num2;
    cout << "Introduce el tercer numero" << endl;
    cin>>num3;
    cout << "Introduce el cuarto numero" << endl;
    cin>>num4;
    cout << "Introduce el quinto numero" << endl;
    cin>>num5;

    do{
        cout<<"----------menu---------"<<endl;
        cout<<"------ 1.- sumar todos ------"<<endl;
        cout<<"------ 2.- restar todos -----"<<endl;
        cout<<"------ 3.- sumar numeros pares ------"<<endl;
        cout<<"------ 4.- sumar numeros impares -----"<<endl;
        cout<<"------ 5.- contar pares ------"<<endl;
        cout<<"------ 6.- contar impares -----"<<endl;
        cout<<"------ 7.- salir ------"<<endl;
        cout<<"-Introduzca una opcion-"<<endl;
        cin>>opc;

        //comprobar que la opcion es correcta
        if (opc<=0 || opc>7)
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
                    suma=(num1+num2+num3+num4+num5);
                    cout<<"resultado suma "<<suma<<endl;
                    break;
                }
                case 2:
                {
                    resta=(num1-num2-num3)-(num4-num5);
                    cout<<"resultado resta "<<resta<<endl;
                    break;
                }
                case 3:
                {
                    if (num1%2==0)
                    {suma_pares=suma_pares+num1;}
                    if (num2%2==0)
                    {suma_pares=suma_pares+num2;}
                    if (num3%2==0)
                    {suma_pares=suma_pares+num3;}
                    if (num4%2==0)
                    {suma_pares=suma_pares+num4;}
                    if (num5%2==0)
                    {suma_pares=suma_pares+num5;}
                    cout<<"resultado suma pares "<<suma_pares<<endl;
                    break;
                }
                case 4:
                {
                   if (num1%2!=0)
                    {suma_pares=suma_pares+num1;}
                    if (num2%2!=0)
                    {suma_pares=suma_pares+num2;}
                    if (num3%2!=0)
                    {suma_pares=suma_pares+num3;}
                    if (num4%2!=0)
                    {suma_pares=suma_pares+num4;}
                    if (num5%2!=0)
                    {suma_pares=suma_pares+num5;}
                    cout<<"resultado suma pares "<<suma_pares<<endl;
                    break;
                }
                case 5:
                {
                    if (num1%2==0)
                    {contar_pares=contar_pares+1;}
                    if (num2%2==0)
                    {contar_pares=contar_pares+1;}
                    if (num3%2==0)
                    {contar_pares=contar_pares+1;}
                    if (num4%2==0)
                    {contar_pares=contar_pares+1;}
                    if (num5%2==0)
                    {contar_pares=contar_pares+1;}
                    cout<<"cuantos pares "<<contar_pares<<endl;

                    break;
                }
                case 6:
                {
                    if (num1%2!=0)
                    {contar_impares=contar_impares+1;}
                    if (num2%2!=0)
                    {contar_impares=contar_impares+1;}
                    if (num3%2!=0)
                    {contar_impares=contar_impares+1;}
                    if (num4%2!=0)
                    {contar_impares=contar_impares+1;}
                    if (num5%2!=0)
                    {contar_impares=contar_impares+1;}
                    cout<<"cuantos impares "<<contar_impares<<endl;
                    break;
                }
                case 7:
                {
                    break;
                }
            }//fin del switch
        }//fin del else

    }while(opc!=7);
    return 0;
}
