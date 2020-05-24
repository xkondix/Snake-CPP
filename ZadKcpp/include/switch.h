#include <iostream>

using namespace std;

void swit(){

   typedef enum {
    konrad,
    wera,
} name;

string imie;

cout << "Podaj imie: ";
cin >> imie;
int i = 2;
if(imie == "konrad")
{
i = 0;
}
else if(imie == "wera")
{
i = 1;
}
else
{
i=2;
}

switch (i)
{
    case konrad:
    {
    cout<<"Konrad";
    break;
    }
    case wera:
    {
    cout<<"Wera";
    break;
    }
    default:
    {
    cout<<"blad";
    }
}

    }
