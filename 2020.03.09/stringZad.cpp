#include <iostream>
#include <string.h>
using namespace std;


int main()
{

string first = "first";
string secound = "secound";
string con = first + secound;
// wypis polaczenia
cout<<con<<endl;
// porowanie dynamiczne
cout<<(con == first+secound)<<endl;
//zastapienie co 2
for(int i = 0; i<first.length();i+=2)
{
    first[i] = '0';
}
cout<<first<<endl;

//zastapienie co 3
for(int i = 0; i<secound.length();i+=3)
{
    secound[i] = '0';
}
cout<<secound<<endl;

return 0;

}
