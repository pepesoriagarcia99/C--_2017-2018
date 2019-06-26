#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    int base[7][7]; //matriz de numeros
    char base_char[7][7]; //matriz de figuras
    int opc=0;  //opcion del menu
    int puntos=0;  //puntos del jugador
    int num_buscado=0; //valor seleccionado
    int valor_x,valor_y; //valores de matriz buscada
    int valor_x_s,valor_y_s;//valores para sustitucion en matriz
    char direccion; //direccion vertical o horizontal
    int cont_v=0; //contador vertical
    int cont_h=0; //contador horizontal
    int i=0; //contador para movimineto de x e y
    char jugar;//para seguir jugando S o N
    bool play=true;//Lo que selecciona la respuesta anterior

    do
    {
        cout<<" -------------------------------|Candy Fesac|-------------------------------------------------------- "<<endl;
        cout<<"|------------------------------ 1.- opcion 1 --------------------------------------------------------|"<<endl;
        cout<<"|------------------------------ 2.- opcion 2 --------------------------------------------------------|"<<endl;
        cout<<"|------------------------------ 3.- Salir -----------------------------------------------------------|"<<endl;
        cout<<" ---------------------------------------------------------------------------------------------------- "<<endl;
        cout<<"Introduce opcion: ";
        cin>>opc;
        system("cls");
        if (opc<=0 || opc>3)//solo permite valores entre 1 y 3
        {
            cout<<"Opcion no disponible.."<<endl;
        }
        else
        {
          switch(opc)
          {
            case 1:
            {
                play=true;
                //rellena tabla valores aleatorios entre 1 y 3
                srand(time(NULL));
                for(int y=0;y<7;y++)
                {
                    for(int x=0;x<7;x++)
                    {base[y][x]=rand()%3;}
                }

                while(play==true)
                {
                    cout<<"|-------------------------------------------------------------------------|"<<endl;
                    cout<<"|------------------------------|Candy Fesac|------------------------------|"<<endl;
                    cout<<"|-------------------------------------------------------------------------|"<<endl;
                    /*for(int y=0;y<7;y++)
                    {
                        for(int x=0;x<7;x++)
                        {
                            cout<<base[y][x]<<"--";  //muestro tabla con numeros
                        }
                    cout<<endl;
                    }*/

                    for(int y=0;y<7;y++)//muestro tabla de simbolos (por estetica)
                    {
                        for(int x=0;x<7;x++)
                        {
                            if(base[y][x]==0)
                            {base_char[y][x]='x';}
                            if(base[y][x]==1)
                            {base_char[y][x]='o';}
                            if(base[y][x]==2)
                            {base_char[y][x]='#';}
                            if(base[y][x]==8)
                            {base_char[y][x]=' ';}
                            cout<<base_char[y][x]<<"  ";
                        }
                    cout<<endl;
                    }
                    cout<<"Introduce fila: ";//valor y
                    cin>>valor_y;
                    cout<<"Introducir columna: ";//valor x
                    cin>>valor_x;

                    cout<<"Forma elegida: "<<base_char[valor_y][valor_x]<<endl;//muestro la forma elegida en la otra tabla (por mera informacion)

                    num_buscado=base[valor_y][valor_x];//le doy valor a numero buscado
                    //cout<<"numero buscado: "<<num_buscado<<endl; //muestro numero buscado (pruebas)
                    cout<<"Introducir direccion (opciones -h- horizontal y -v- vertical): ";//direccion derecha a izquierda o de arriva a abajo
                    cin>>direccion;

                    if(direccion=='h' || direccion=='H')//direccion horizontal
                    {
                        cont_h=0;//variable a 0 para evitar fallo en siguiente vuelta
                        i=0;//variable i a 0 para a la siguiente vez que valla a llamar horizontal no falle
                        while(base[valor_y][valor_x+i]==num_buscado)//while cuenta caracteres
                        {
                            cont_h++;//contador de filas horizontales
                            i++;//contador que mueve lo que se cuenta 1
                        }//cierre del while
                        if(cont_h==3)//si el contador suma 3 3 puntos
                        {
                            puntos=puntos+3;//sumo 3 puntos para cuando llegue a 15 cierre
                            cout<<"Conseguite 3 puntos"<<endl;//mensaje 3 puntos
                        }//cierre del if
                        if(cont_h>3 && cont_v<5)
                        {
                            puntos=puntos+5;
                            cout<<"Consegiste 5 puntos"<<endl;
                        }//cierre del if
                    }//cierre de direccion
                    if(direccion=='v' || direccion=='V')//inicio del vertical
                    {
                        cont_v=0;//variable a 0 para evitar fallo en siguiente vuelta
                        i=0;//variable a 0 para evitar fallo en siguiente vuelta
                        while(base[valor_y+i][valor_x]==num_buscado)
                        {
                            cont_v++;//suma 1 a contador vertical
                            i++;//mueve el numero que se comprueba
                        }//cierre del while
                        if(cont_v==3)//si contador v es 3 3 puntos
                        {
                            puntos=puntos+3;
                            cout<<"Conseguite 3 puntos"<<endl;//mensaje 3 puntos
                        }//cierre del if
                        if(cont_v>3 && cont_v<5)
                        {
                            puntos=puntos+5;
                            cout<<"Consegiste 5 puntos"<<endl;
                        }//cierre del if
                    }//cierre del if vertical
                    if(direccion!='v' && direccion!='V' && direccion!='h' && direccion!='H')
                    {cout<<"Opcion no disconible, Opciones disponibles: --V-- 0 --H--"<<endl;}

                    //cout<<"contador vertical: "<<cont_v<<endl;//muestro contadores (pruebas)
                    //cout<<"contador horizontal: "<<cont_h<<endl;
                    cout<<"Puntos: "<<puntos<<endl;
                    cout<<"¿Quieres seguir jugando? S o N "<<endl;//opcion para seguir jugando
                    cin>>jugar;
                    if(jugar=='s' || jugar=='S')
                    {play=true;}
                    else
                    {cout<<"Opcion no disponible"<<endl;}
                    if(jugar=='n' || jugar=='N')
                    {play=false;}
                    else
                    {cout<<"Opcion no disponible"<<endl;}
                     system("cls");
                }//cierre del while jugando
            break;
            }//cierre case 1
//------------------------------------------------------------------------------------case------------------------------------------------------------------------
            case 2:
            {
                play=true;
                //rellena tabla valores aleatorios entre 1 y 3
                srand(time(NULL));
                for(int y=0;y<7;y++)
                {
                    for(int x=0;x<7;x++)
                    {base[y][x]=rand()%3;}
                }

                while(play==true)
                {
                    cout<<"|-------------------------------------------------------------------------|"<<endl;
                    cout<<"|------------------------------|Candy Fesac|------------------------------|"<<endl;
                    cout<<"|-------------------------------------------------------------------------|"<<endl;
                    for(int y=0;y<7;y++)//muestro tabla de simbolos (por estetica)
                    {
                        for(int x=0;x<7;x++)
                        {
                            if(base[y][x]==0)
                            {base_char[y][x]='x';}
                            if(base[y][x]==1)
                            {base_char[y][x]='o';}
                            if(base[y][x]==2)
                            {base_char[y][x]='#';}
                            if(base[y][x]==8)
                            {base_char[y][x]=' ';}
                            cout<<base_char[y][x]<<"  ";
                        }
                    cout<<endl;
                    }
                    cout<<"Introduce fila: ";//valor y
                    cin>>valor_y;
                    cout<<"Introducir columna: ";//valor x
                    cin>>valor_x;

                    valor_y_s=valor_y;
                    valor_x_s=valor_x;

                    num_buscado=base[valor_y][valor_x];//le doy valor a numero buscado
                    //cout<<"numero buscado: "<<num_buscado<<endl; //muestro numero buscado (pruebas)
                    cout<<"Introducir direccion (opciones -h- horizontal y -v- vertical): ";//direccion derecha a izquierda o de arriva a abajo
                    cin>>direccion;

                    if(direccion=='h' || direccion=='H')//direccion horizontal
                    {
                        cont_h=0;//variable a 0 para evitar fallo en siguiente vuelta
                        i=0;//variable i a 0 para a la siguiente vez que valla a llamar horizontal no falle
                        while(base[valor_y][valor_x+i]==num_buscado)//while cuenta caracteres
                        {
                            cont_h++;//contador de filas horizontales
                            i++;//contador que mueve lo que se cuenta 1
                        }//cierre del if
                        if(cont_h==3)//si el contador suma 3 3 puntos
                        {
                            //-------------------------------------------------------------------------------------------------------
                            i=0;//variable i a 0 para a la siguiente vez que valla a llamar horizontal no falle
                            while(base[valor_y_s][valor_x_s+i]==num_buscado)//while sustitucion de caracteres
                            {
                                base[valor_y_s][valor_x_s+i]=8;//en los valores hacertados los pone a 8
                                i++;//contador que mueve lo que se cuenta 1
                            }//cierre del while sustitucion
                            //-------------------------------------------------------------------------------------------------------
                            puntos=puntos+3;//sumo 3 puntos para cuando llegue a 15 cierre
                            cout<<"Conseguite 3 puntos"<<endl;//mensaje 3 puntos
                        }//cierre del if
                        if(cont_h>3 && cont_v<5)
                        {
                            //-------------------------------------------------------------------------------------------------------
                            i=0;//variable i a 0 para a la siguiente vez que valla a llamar horizontal no falle
                            while(base[valor_y_s][valor_x_s+i]==num_buscado)//while sustitucion de caracteres
                            {
                                base[valor_y_s][valor_x_s+i]=8;//en los valores hacertados los pone a 8
                                i++;//contador que mueve lo que se cuenta 1
                            }//cierre del while sustitucion
                            //-------------------------------------------------------------------------------------------------------
                            puntos=puntos+5;
                            cout<<"Consegiste 5 puntos"<<endl;
                        }//cierre del if
                    }//cierre de direccion
                    if(direccion=='v' || direccion=='V')//inicio del vertical
                    {
                        cont_v=0;//variable a 0 para evitar fallo en siguiente vuelta
                        i=0;//variable a 0 para evitar fallo en siguiente vuelta
                        while(base[valor_y+i][valor_x]==num_buscado)
                        {
                            cont_v++;//suma 1 a contador vertical
                            i++;//mueve el numero que se comprueba
                        }//cierre del while
                        if(cont_v==3)//si contador v es 3 3 puntos
                        {
                            //-------------------------------------------------------------------------------------------------------
                            i=0;//variable i a 0 para a la siguiente vez que valla a llamar horizontal no falle
                            while(base[valor_y_s+i][valor_x_s]==num_buscado)//while sustitucion de caracteres
                            {
                                base[valor_y_s+i][valor_x_s]=8;//en los valores hacertados los pone a 8
                                i++;//contador que mueve lo que se cuenta 1
                            }//cierre del while sustitucion
                            //-------------------------------------------------------------------------------------------------------

                            puntos=puntos+3;
                            cout<<"Conseguite 3 puntos"<<endl;//mensaje 3 puntos
                        }//cierre del if
                        if(cont_v>3 && cont_v<5)
                        {
                            //-------------------------------------------------------------------------------------------------------
                            i=0;//variable i a 0 para a la siguiente vez que valla a llamar horizontal no falle
                            while(base[valor_y_s+i][valor_x_s]==num_buscado)//while sustitucion de caracteres
                            {
                                base[valor_y_s+i][valor_x_s]=8;//en los valores hacertados los pone a 8
                                i++;//contador que mueve lo que se cuenta 1
                            }//cierre del while sustitucion
                            //-------------------------------------------------------------------------------------------------------

                            puntos=puntos+5;
                            cout<<"Consegiste 5 puntos"<<endl;
                        }//cierre del if
                    }//cierre del if vertical
                    if(direccion!='v' && direccion!='V' && direccion!='h' && direccion!='H')
                    {cout<<"Opcion no disconible, Opciones disponibles: --V-- 0 --H--"<<endl;}

                    //cout<<"contador vertical: "<<cont_v<<endl;//muestro contadores (pruebas)
                    //cout<<"contador horizontal: "<<cont_h<<endl;
                    cout<<"Puntos: "<<puntos<<endl;
                    cout<<"¿Quieres seguir jugando? S o N "<<endl;//opcion para seguir jugando
                    cin>>jugar;
                    if(jugar=='s' || jugar=='S')
                    {play=true;}
                    else
                    {cout<<"Opcion no disponible"<<endl;}
                    if(jugar=='n' || jugar=='N')
                    {play=false;}
                    else
                    {cout<<"Opcion no disponible"<<endl;}
                     system("cls");

                //---------------------------------------------------en ubicaciones vacias pone valores aleatorios
                     srand(time(NULL));
                     for(int y=0;y<7;y++)
                     {
                         for(int x=0;x<7;x++)
                         {
                             if(base[y][x]==8)
                             {
                                 base[y][x]=rand()%3;
                             }
                         }
                     }
                }//cierre del while jugando
            break;
            }//cierre case 2
            case 3:
            {break;}//cierre case 3
          }//opciones
        }//cierre del else
    }while(opc!=3);

    return 0;
}
