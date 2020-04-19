#include <iostream>

using namespace std;


int main()
{

//wypis na ekran
string napis = "Konrad";
char napis1[] = "Konrad";
char *napis2 = "Konrad";
char znak = 'k';
int i = 10;
float j = 10.4;

//c
printf("ala ma kota \n");
printf("%s \n", napis); //nie ma stringow w c
printf("%s \n", napis1);
printf("%s \n", napis2);
printf("%c \n", znak);
printf("%d \n", i);
printf("%f \n", j);

cout<<"------------------------"<<endl;

//c++
cout<<"ala ma kota"<<endl;
cout<<napis<<endl;
cout<<napis1<<endl;
cout<<napis2<<endl;
cout<<znak<<endl;
cout<<i<<endl;
cout<<j<<endl;

cout<<"------------------------"<<endl;
cout<<"------------------------"<<endl;

//zapis

int varInt;
int varInt2;

cout<<"Podaj liczbe: ";
scanf("%i", &varInt);
cin>>varInt2;

//w c jak przy odczycie, rozne litery zalezne od tego co chcemy odczytac, a c++ cin, czyli strumien

return 0;
}
