#include <iostream>

using namespace std;


int divisores(int num){
    int res=0;

    for(int i=1;i<num;i++)
    {
        if((num%i)==0)
        {res=res+i;}
    }
    return res;
}
int parejas (int inicio, int fin){
    int div_p;
    int div_f;

    for(int p=inicio;p<=fin;p++)
    {
        for(int f=inicio+1;f<=fin;f++)
        {
            div_p=divisores(p);
            div_f=divisores(f);
            cout<<p<<"--"<<f<<endl;
            if(div_p==f && div_f==p && p!=f)
            {
                cout<<p<<" -- "<<f<<endl;
            }
        }
    }
}
int main(){
    int inicio;
    int fin;

    cout<<"Introduce inicio: ";
    cin>>inicio;
    cout<<"Introduce fin: ";
    cin>>fin;

    parejas(inicio,fin);

    return 0;
}
