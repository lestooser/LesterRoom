#include<iostream>
using namespace std;
void main() {
	int n, k, i;
	int a[] = { 11,1,2,3,5,6,7,8,10,11 };
	n = sizeof(a) / sizeof(int);
	int* b;
	b = new int[n];
	k = a[0];
	for (i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << '\n';
	for (i = 1; i < n; i++) {
		if (a[i] < k) {
			b[i - 1] = a[i];
		}
		else if (a[i] >= k and a[i - 1] < k) {
			b[i - 1] = k;
			b[i] = a[i];
		}
		else b[i] = a[i];
	}
	for (i = 0; i < n; i++) {
		if (b[i] == -842150451) {
			b[i] = k;
		}
	}
	for (i = 0; i < n; i++) {
		cout << b[i] << ' ';
	}
}