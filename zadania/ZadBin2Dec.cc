#include <iostream>
#include <math.h>

using namespace std;

 int binToDec(int i)
{
    int pot = 0;
    int result = 0;
    while(i>0)
    {
        result += i%10 * pow(2,pot);
        i = i/10;
        pot++;
    }

return result;
}

int main()
{

cout<<binToDec(11010)<<endl;
cout<<binToDec(1)<<endl;
cout<<binToDec(1000)<<endl;



return 0;
}
