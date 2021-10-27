#include <iostream> 
using namespace std;
int main() {
	int a, b, c;
	cout << "podaj 3 liczby calkowite" << endl;
	cin >> a >> b >> c;
	int max1;
	if (a > b)
		max1 = a;
	else
		max1 = b;
	if (c > b)
		max1 = c;
	else
		max1 = b;
	if (c > a)
		max1 = c;
	else
		max1 = a;
	if (a==b && b==c)
		cout << "to te same liczby" << endl;
	else
	cout << max1 << endl;
	// && do laczenia rownosci, rownosci 
	return 0;
}