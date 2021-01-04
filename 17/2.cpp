#include<iostream>
using namespace std;
void main() {
	int z = 0, i, n;
	cout << "N = "; cin >> n; cout << '\n';
	int* a;
	a = new int[n];
	for (i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		cin >> a[i];
	}
	for (i = 1; i < n-1; i++) {
		if (a[i] - a[i - 1] != a[i + 1] - a[i]) {
			z = 0;
			break;
		}
		else z = a[i] - a[i - 1];
	}
	cout << z;
}