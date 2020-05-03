#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int zadDec2BinH(int dec)
{

    string result ="";
    while(dec>0)
    {
    result += dec%2 ? "1" : "0";
    dec/=2;

    }

    reverse(result.begin(),result.end()); //bit/stdc++

    return stoi(result); //stoi c++11 standard
}




