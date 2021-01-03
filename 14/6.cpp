#include <iostream>
using namespace std;
void main() {
	int n, k, a, b;
	cin >> n;
	k = 2;
	a = 1;
	b = 1;
	while (n > a) {
		b = a + b;
		a = b - a;
		k++;
	}
	cout << k;
}