#include <iostream>
using namespace std;
int main() {
	int ppop = 0, pop = 1, fib = 0, n;
	cout << "podaj liczbe" << endl;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		fib = ppop + pop;
		pop = pop;
		pop = fib;
	}
	
	return 0;
	//definiowanie zmienych definiowanie stalych if