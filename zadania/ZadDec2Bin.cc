#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int decToBin(int dec)
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



int main()
{

cout<<decToBin(10)<<endl;
cout<<decToBin(11)<<endl;
cout<<decToBin(23)<<endl;

return 0;
}
