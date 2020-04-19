#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string file = "plik.txt";
	ifstream infile(file);

	if(infile)
		cout << infile.rdbuf();

	else
		clog << "nie można otworzyć pliku: "<< file << endl;
      return 0;
}
