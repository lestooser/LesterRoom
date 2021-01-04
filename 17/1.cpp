#include<iostream>
using namespace std;
void main() {
	int z=0,i, n, k, l;
	cout << "N = "; cin >> n; cout << '\n';
	cout << "K = "; cin >> k; cout << '\n';
	cout << "L = "; cin >> l; cout << '\n';
	int* a;
	a = new int[n];
	for (i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		cin >> a[i];
	}
	for (i = k; i <= l; i++) {
		z += a[i];
	}
	cout << z / (l - k + 1);
}