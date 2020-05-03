#include <iostream>

using namespace std;

void zadIqH()
{

 int tab[] = {11,22,33,44,55}, i = 3, *q;
	q = tab;
	cout << "q[i]   = " << q[i] << endl;
	cout << "i[q]   = " << i[q] << endl;   //<-- Proszę to wyjaśnić

	//wyjasnienie
	cout<<"-------------------------------"<<endl;

	cout<<"numery pamieci i oraz q "<< &i<<" "<<q<<endl;
	cout<<"wartosci i oraz q "<<i<<" "<<*q<<endl;
    cout<<"q+1 = "<<q+1<<endl;
	cout<<"q+2 = "<<q+2<<endl;
	cout<<"q+3 = "<<q+3<<endl;
    cout<<"adres i+q = "<<q+i<<endl;
    cout<<"*q = "<<*(q+3)<<endl;
    cout<<"i[tab] = "<<i[tab]<<endl;



	cout<<"rozwiazanie *(i+q) = "<<*(i+q); // i = 3, a q = jakis tam adres -> jest to równe zapisowi q[i] lub i[q]
	//Jest to możliwe dzięki temu ze q to wskaznik, wiec nie wazne co tam damy bedzie to zapis jak powyżej.
	//Oczywiście i[tab] też zadziała, bo tablica to wskaznik na 1 element

}

