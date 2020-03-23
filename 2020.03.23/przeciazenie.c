#include <stdio.h>

//g++ dziala
//gcc nie

int a(int b, int a)
{
return a*b;
}

int a()
{
return 10;
}

int main()
{
printf("%d",a());
printf("%d",a(2,3));

return 0;
}
