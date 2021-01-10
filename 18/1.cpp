#include<iostream>
using namespace std;
void main() {
	int* a;
	int* b;
	int i, n, z;
	cin >> n;
	a = new int[n];
	b = new int[n];
	for (i = 0; i < n; i++) {
		a[i] = rand() % 100;
		b[i] = rand() % 100;
	}
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d\t", i, a[i]);
	}
	cout << '\n';
	for (i = 0; i < n; i++) {
		printf("b[%d] = %d\t", i, b[i]);
	}
	for (i = 0; i < n; i++) {
		z = a[i];
		a[i] = b[i];
		b[i] = z;
	}
	cout << '\n'; cout << '\n';
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d\t", i, a[i]);
	}
	cout << '\n';
	for (i = 0; i < n; i++) {
		printf("b[%d] = %d\t", i, b[i]);
	}
}