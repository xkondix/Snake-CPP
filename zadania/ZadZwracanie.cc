#include<iostream>
using namespace std;

int n=4;

int wartosc() {
	return 3;
}

int& referencje() {

    return n;
}


int* wskaznik() {
    int *w;
    w=&n;
    return w;
}

int* tab() {
    int *w;
    int tab[] = {1,2,3,4};
    w=&tab[0];
    return w;
}


int main(){

   cout<<wartosc()<<endl;
   cout<<referencje()<<endl;
   cout<<wskaznik()<<endl;
   cout<<tab()<<endl;


	return 0;
}
