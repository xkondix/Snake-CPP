#include <iostream>
#include "Zmienna.h"
using namespace std;

static int licznik = 0;

myFloat value(myFloat f, float f1);

int main()
{

myFloat f;
f.data = 2.5;

cout<<f.data<<endl;
cout<< getInt(f)<<endl;

value(f,5.2);

cout<<f.data<<endl;

cout<<"licznik = "<<licznik;

return 0;
}

myFloat value(myFloat f, float f1)
{

    licznik++;
    f.data = f1;
    return f;
}
