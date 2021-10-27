#include <iostream> 
using namespace std;
int main() {
	int a, b, c, d;
	cout << "podaj 4 liczby calkowite" << endl;
	cin >> a >> b >> c >> d;
	int max1, max2;
	if (a > b)
		max1 = a;
	else
		max2 = b;
	if (c > d)
		max1 = c;
	else
		max2 = d;
	if (max1 > max2)
		max1 = a;
	else
		max2 = b;

	return 0;
}