#include <iostream>

using namespace std;

int main()
{

    char tabla1[5];
    int i=0;
    int vocales=0;
    int consonantes=0;

    for(i=0;i<5;i++)
    {
    cout << "Introducir valor "<<i << endl;
    cin>>tabla1[i];
    }


     for(i=0;i<5;i++)
    {
    cout << "Valore "<<tabla1[i] <<" ";
    }

    for(i=0;i<5;i++)
    {
        if(tabla1[i]=='a' || tabla1[i]=='e' || tabla1[i]=='i' || tabla1[i]=='o' || tabla1[i]=='u')
        {
            vocales=vocales+1;
        }
        else
        {
            consonantes=consonantes+1;
        }
    }
          cout<<endl;
        cout<<"vocales "<<vocales<<endl;
        cout<<"consonantes "<<consonantes<<endl;


    return 0;
}

