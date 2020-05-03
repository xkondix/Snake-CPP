

void zadAdresowaniePamieciH()
{
int a; //deklarowanie zmiennej -> alokowanie gdzieś miejsca w pamięci o wartości int (u mnie 4 bajty)
cout<<"adres zmiennej a = "<<&a<<endl;
cout<<"wartość zmiennej a, jak nie jest zainicjowana = "<<a<<endl; //losowa z przedziału int, która tam się znajduje

a = 5; //inicjowanie zmiennej -> podstawienie pod te miejsce w pamięci wartości 5 - > dalej zajmuje 32 bity
cout<<"wartość zmiennej a = "<<a<<endl;

}
