#include <iostream>

using namespace std;

void zadPetleH()
{
//while a do while

int i = 1;

while(i>1)
{
cout<<"while"<<endl;
}

do
{
cout<<"do while"<<endl;

}while(i>1);

//jak widac do while wykona sie zawsze chocby jeden raz, bo warunek sprawdza na koncu

//for a while
cout<<"--------------"<<endl;

for(int j = 0; j<10; j++)
{
cout<<j<<endl;
}
cout<<"--------------"<<endl;
int licznik = 10;
while(licznik>=0)
{

  if(i%2==0)
  {
  cout<<i<<endl;
  licznik--;
  }
  else if(licznik<2)
  {
  break;
  }

  i++;

}

//for dajne nam pewnosc, ze petla sie zakonczy jak dam
//dobry warunek, a inkrementacja i dekrementacja odbedzie sie bez naszej wiedzy
//za to while daje nam wiecej mozliwosci, bo na szczywno nie mowi ile razy ma sie wykonać
//za to musimy pilnować, zeby sie zakończyła

//co do return, można nim przerywać void-y (typ funckji lub metody, ktory nic nie zwraca)


}


