#include <string.h>
#include <stdio.h>

using namespace std;



 extern "C"  void f1() {  printf("C -> 1");}
 extern "C"  void f2() {  printf("C -> 2");}


void f3()
{
  printf("C++ -> 3");
}

void f4()
{
    printf("C++ -> 4");
}

void f5()
{
    printf("C++ -> 5");
}

int main(int argc,  char **argv){



switch(argv[1][0])
{
case '1':
{
f1();
break;
}

case '2':
{
f2();
break;
}

case '3':
{
f3();
break;
}

case '5':
{
f5();
break;
}

case '4':
{
f4();
break;
}
default:
printf("zly numer");

}

return 0;
}
