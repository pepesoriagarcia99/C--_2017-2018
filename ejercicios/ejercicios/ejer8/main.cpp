
#include <iostream>

using namespace std;

int main()
{
    float nota1=0.0;
    float nota2=0.0;
    float nota3=0.0;




    cout << "Introduce una nota alumno 1"<< endl;
    cin>>nota1;

        if (nota1>0 && nota1<4.9)
        {cout <<"suspenso"<<endl;}
            else if (nota1>4.9 && nota1<5.9)
            {cout <<"aprobado"<<endl;}
                else if (nota1>5.9 && nota1<6.9)
                {cout <<"bien"<<endl;}
                    else if (nota1>6.9 && nota1<8.9)
                    {cout <<"notable"<<endl;}
                        else if (nota1>8.9 && nota1<10)
                        {cout <<"sobresaliente"<<endl;}
                            else
                            {cout <<"ERROR"<<endl;}



    cout << "Introduce una nota alumno 2"<< endl;
    cin>>nota2;

        if (nota2>0 && nota2<4.9)
        {cout <<"suspenso"<<endl;}
            else if (nota2>4.9 && nota2<5.9)
            {cout <<"aprobado"<<endl;}
                else if (nota2>5.9 && nota2<6.9)
                {cout <<"bien"<<endl;}
                    else if (nota2>6.9 && nota2<8.9)
                    {cout <<"notable"<<endl;}
                        else if (nota2>8.9 && nota2<10)
                        {cout <<"sobresaliente"<<endl;}
                            else
                            {cout <<"ERROR"<<endl;}


    cout << "Introduce una nota alumno 3"<< endl;
    cin>>nota3;

        if (nota3>0 && nota3<4.9)
        {cout <<"suspenso"<<endl;}
            else if (nota3>4.9 && nota3<5.9)
            {cout <<"aprobado"<<endl;}
                else if (nota3>5.9 && nota3<6.9)
                {cout <<"bien"<<endl;}
                    else if (nota3>6.9 && nota3<8.9)
                    {cout <<"notable"<<endl;}
                        else if (nota3>8.9 && nota3<10)
                        {cout <<"sobresaliente"<<endl;}
                            else
                            {cout <<"ERROR"<<endl;}

    if (nota1>nota2)
    {cout <<"alumno1"<<endl;}
        else if (nota2>nota3)
        {cout <<"alumno2"<<endl;}
            else
            {cout <<"alumno3"<<endl;}
    return 0;
}
