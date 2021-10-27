#include <iostream> 
using namespace std;
int main() {
	//instrukcje sterujace
	/*
	 if(warunek)
	 instrukcja
	v2
	if(warunek)
	 instrukcja
	 else
	instrukcja nr2
	v3
	warunek?instrukcja1 : instrukcja 2 
	*/
	//Np1.
	int liczba;
	cout << "podaj liczbe calkowita" << endl;
	cin >> liczba;
		//operatory porowania
		// == != < <= > =>;

	if (liczba >= 0)
		cout << "liczba jest nieujemna" << endl;
		else
			cout << "liczba jest ujemna" << endl; 
		return 0;
		
		
		
		
}