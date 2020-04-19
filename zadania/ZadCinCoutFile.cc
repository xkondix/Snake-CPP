#include <iostream>
#include <fstream>

using namespace std;

int main()
{
//wypisanie na ekran
string imie;
cout<<"Podaj Imie: ";
cin>>imie; //jezeli bylo by to zdanie to trzba użyc getline() jak dobrze pamiętam, żeby nie pobrał tylko do białeo znaku części
cout<<imie<<endl;

//Zapis do pliku
ofstream zapis("plik.txt");
zapis<<imie;
zapis.close();

//odczyt
ifstream odczyt("dane.txt");
odczyt>>imie;

cout<<imie;

odczyt.close();

return 0;
}
