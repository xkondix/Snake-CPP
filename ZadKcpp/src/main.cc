#include <iostream>
#include "ZadKcpp.hpp"

using namespace std;

int main()
{

ZadKccpKowalczyk* konrad = new ZadKccpKowalczyk;
int w = 0;
int l,k;
bool petl = true;
while(petl)
{
cout<<endl<<"Podaj numer zadania 1-11, zeby wyjsc nacisnij 0"<<endl;
cin>>w;

switch(w)
{
	case 1:
	{
		konrad->zadArytmetykaWskaznikow();
		break;

	}
	case 2:
	{
		l = 0;
		cout<<"podaj liczbe binarna"<<endl;
		cin>>l;
		konrad->zadBin2Dec(l);
		break;
	}
	case 3:
	{
		konrad->zadCandCPP();
		break;
	}
	case 4:
	{
		konrad->zadCinCoutFile();
		break;
	}
	case 5:
	{
		k = 0;
		cout<<"podaj liczbe 10"<<endl;
		cin>>k;
		konrad->zadDec2Bin(k);
		break;
	}
	case 6:
	{
		konrad->zadIq();
		break;
	}
	case 7:
	{
		konrad->zadPetle();
		break;
	}
	case 8:
	{
		konrad->zadPriorytetyOperatorow();
		break;
	}
	case 9:
	{
		konrad->zadPrzekazywanieTablicy();
		break;
	}
	case 10:
	{
		konrad->zadUnia();
		break;
	}
	case 11:
	{
		konrad->zadZwracanie();
		break;
	}

	case 0:
	{
		petl=false;
		break;
	}
	default:{}

	cout<<endl;
	
}


}
konrad->zadArytmetykaWskaznikow();
delete konrad;
return 0;

}
