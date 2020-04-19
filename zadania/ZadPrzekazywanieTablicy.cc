#include <iostream>

using namespace std;

void printTab(int *tab, int ile) //najlepszy sposob to podac dlugosc
{
for(int i = 0; i<ile; i++)
{
cout<<tab[i]<<" ";

}

}

void printTab(string tab, int ile) //najlepszy sposob to podac dlugosc
{
for(int i = 0; i<ile; i++)
{
cout<<tab[i]<<" ";

}

}

int main()
{
string slowo = "Konrad";
int tab[4]={1,2,3,4};
printTab(tab,4);
cout<<endl;
printTab(slowo,slowo.length());

return 0;
}
