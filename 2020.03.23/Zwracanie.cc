#include <iostream>
#include <iterator>
using namespace std;


void swapA(int a, int b) { // Przekazywanie zmiennych
	cout <<"\n---> Przez wartosc:"<< endl;
	int temp = a;
	a = b;
	b = temp;
	}

void swapB(int &a, int &b) { //Przekazywanie przez referencje
	cout <<"\n---> Przez referencje:"<< endl;
	int temp = a;
	a = b;
	b = temp;
	    cout <<"-------------------"<< endl;

}


void swapC(int *a, int *b) { //Przekazywanie przez wskaznik
	cout <<"\n---> Przez wskaznik:"<< endl;
	int *temp = a;
	a = b;
	b = temp;
    cout <<"-------------------"<< endl;

}


//---------------------------------
void przekaz1D(int tab[],int s){ ///Przekazywanie tablic 1D


    for (int i = 0; i<s; i++){
        cout << i << "\t" << tab[i] << endl;
     }
     tab[0]=1111;
    cout <<"-------------------"<< endl;

}


void przekaz1Dwsk(int *tab,int s){ ///Przekazywanie tablic 1D

    for (int i = 0; i<s; i++){
        cout << i << "\t" << tab[i] << endl;
    }

    cout <<"-------------------"<< endl;
}


//--------------------------------
void przekaz2D(int tab[3][3]) {///Przekazywanie tablic 2D
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3;j++) {
			cout <<"("<< i <<", "<< j <<")\t"<< tab[i][j] << endl;
		}
	}
  cout <<"-------------------"<< endl;
}




int main() {

	int tablica1D[6] = {1,2,3,4,5,6};

    // nazwa tablicy to wskaźnik na tablica[0]
    przekaz1D(tablica1D,6);
    przekaz1Dwsk(tablica1D,6);

      for (int i = 0; i<6; i++){
        cout << i << "\t" << tablica1D[i] << endl;
    }


    //--------------------------------------
	int tablica2D[3][3];

	//Wypelnienie tablicy 2D
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3;j++){
			tablica2D[i][j] = i+j;
		}
	}
	przekaz2D(tablica2D);

	return 0;
}
