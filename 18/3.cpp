#include<iostream>
using namespace std;
void main() {
	int n, k, i;
	int* a;
	cin >> n;
	a = new int[n];
	for (i = 0; i < n; i++) {
		a[i] = rand() % 10;
	}
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d \t", i, a[i]);
	}
	cout << '\n';
	for (i = n-1; i > 0; i--) {
		if (a[i] % 2 != 0) {
			k = a[i];
			break;
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 1) a[i] += k;
	}
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d \t", i, a[i]);
	}
}