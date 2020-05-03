#include <iostream>
using namespace std;


void zadArytmetykaWskaznikowH()
{
int tab[] = {0,2,4,6,8,10,12};
for(int i = 0; i<7; i++)
{
cout<<tab[i]<<" ";
}
cout<<endl;


int *p = tab; //p jest na tab[0]
cout<<"miejsce w pamieci tab[0] = "<<p<<endl;
cout<<"aktualna wartosc "<<*p<<endl<<endl;

cout<<"operacja p++ "<<p++<<endl; //wypisuje tab[0] adres i zwieksza p o wartosc 4 (int)
cout<<"aktualna wartosc "<<*p<<endl<<endl;

cout<<"operacja ++p "<<++p<<endl; //zwieksza i wypusje adres tab[2]
cout<<"aktualna wartosc "<<*p<<endl<<endl;

cout<<"operacja ++*p "<<++*p<<endl; //zwieksza o 1 wartosc tab[2] 4+1
cout<<"aktualna wartosc "<<*p<<endl<<endl;

cout<<"operacja ++(*p) "<<++(*p)<<endl; //zwieksza o 1 wartosc tab[2] 5+1
cout<<"aktualna wartosc "<<*p<<endl<<endl;

cout<<"operacja ++*(p) "<<++*(p)<<endl; //zwieksza o 1 wartosc tab[2] 6+1
cout<<"aktualna wartosc "<<*p<<endl<<endl;

cout<<"operacja *p++ "<<*p++<<endl; //wypisuje *p (wartosc tab[2] = 7 ), a potem zwieksza adres o 1 na tab[3]
cout<<"aktualna wartosc "<<*p<<endl<<endl;

cout<<"operacja (*p)++ "<<(*p)++<<endl; //wypisuje tab[3], a potem zwieksza wartosc tab[3] 6+1
cout<<"aktualna wartosc "<<*p<<endl<<endl;

cout<<"operacja *(p)++ "<<*(p)++<<endl; //wypisuje tab[3] = 7, a potem zwieksza adres o 1 na tab[4]
cout<<"aktualna wartosc "<<*p<<endl<<endl;

cout<<"operacja *++p "<<*++p<<endl; //zwieksza adres o 1 tab[5] i wypisuje wartosc tab[5] = 10
cout<<"aktualna wartosc "<<*p<<endl<<endl;

cout<<"operacja *(++p) "<<*(++p)<<endl; //zwieksza adres o 1 tab[6] i wypisuje wartosc tab[6] = 12
cout<<"aktualna wartosc "<<*p<<endl<<endl;

p-=6;

for(int i = 0; i<7; i++)
{
cout<<*p<<" ";
p++;
}
}
