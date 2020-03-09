#include <iostream>

namespace constants
{
float pi = 3.14;

}

using namespace std;
using namespace constants;


int main()
{
cout<< pi<<std::endl;
std::cout<<constants::pi*2;

return 0;
}
