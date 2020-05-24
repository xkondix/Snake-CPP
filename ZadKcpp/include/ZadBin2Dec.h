#include <iostream>
#include <math.h>

void zadBin2DecH(int i)
{
    int pot = 0;
    int result = 0;
    while(i>0)
    {
        result += i%10 * pow(2,pot);
        i = i/10;
        pot++;
    }

cout<<endl<<result<<endl;
}


