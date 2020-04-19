#include <iostream>

using namespace std;

//char znak; ta sama nazwa zmiennej

union mojaUnia
{
    char znak;
    float liczba;
};

int main()
{
    //mojaUnia = { ‘ b ’, 20.34345 }; ma tylko jedno miejsce w pamieci, wiec mozna uzywac 1 zmiennej
    mojaUnia unia1 = { 'k' };
    cout<<unia1.znak<<endl;;

    mojaUnia unia2;
    unia2.liczba=2.2;
    unia2.znak='a';

    cout<<unia2.liczba<<"  "<<unia2.znak;

    return 0;
}


