#include <iostream>
using namespace std;
/* budowa petli
while(warunek)
instrukcja;
iterator - zmienna ktora umozliwia wyznaczanie cykli petli 
*/

int n,suma,j=1;
int main() 
{
	cout << "podaj liczbe\n";
	cin >> n;
	while (j < n)
	{
		if (n % j == 0) 
		{
			suma = suma + j;
			cout << "j:" << j << " " << "suma" << suma << endl;
		}


		if (suma == n) 
		{
			cout << "liczba doskonala";
			break;
		}
		if(suma == n and j == n-1)
		{
			cout << "liczba nie jest doskonala";
			break;
		}
		j++;
	}
	return 0;
}