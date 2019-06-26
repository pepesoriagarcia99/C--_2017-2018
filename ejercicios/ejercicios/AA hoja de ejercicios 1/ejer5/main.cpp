#include <iostream>

using namespace std;

int main()
{
    float pesetas=0;
    float euros=166;
    float eurosdolares=1.846;
    float dolares=0;
    float cambioeuros=0;
    float cambiodolares=0;

    cout << "Introduce pesetas."<< endl;
    cin>>pesetas;


    cambioeuros=pesetas/euros;
    cout <<"Este es el cambio de pesetas a euros: "<<cambioeuros<< endl;

    dolares=euros*eurosdolares;
    cambiodolares=pesetas/dolares;
    cout <<"Este es el cambio de pesetas a dolares: "<<cambiodolares<< endl;

    return 0;
}
