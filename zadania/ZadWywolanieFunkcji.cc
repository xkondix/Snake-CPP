/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Arytmetyka wskaznikow (tablice) w C++
 * v0.01
 */

//#include <stdio.h>
#include <iostream>
using namespace std;

#define ROZMIAR 10

//--- dostep za pomoca indeksu --------------------------------------
void funA(){

	int tab[ROZMIAR];
	int i;

	for(i = 0; i < ROZMIAR; i++) {
		cout <<"Wpisz wartosc: ";
		cin >> tab[i];
		//scanf("%d", &tab[i]);
		tab[i] = 2 * tab[i];  // tab[i] *= 2;
		cout <<"Tab["<<i<<"] = "<< tab[i] << endl;
		//printf("Tab[%d] = %d \n", i+1 , tab[i]);
	}
}


//--- dostep za pomoca adresu i indeksu ----------------------------
void funB(){

	int tab[ROZMIAR];
	int i;
	int k;
	for(i = 0; i < ROZMIAR; i++) {

		//scanf("%d", tab+i);      //&*(tab+i) == tab+i
		cout <<"Wpisz wartosc: ";
		cin >> *(tab+i);
		*(tab+i) = 2 * *(tab+i);  // tab[i] *= 2;
		cout <<"Tab["<<i<<"] = "<< *(tab+i) << endl;
		//printf("Tab[%d] = %d \n", i+1 , *(tab+i));
	}
}

int a(int b)
{
return b;
}



int main(){
	funA(); //1
	cout<<a(5); //2
	int aa = a(6); //3

	return 0;
}
