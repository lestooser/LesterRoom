#include<iostream>
using namespace std;
void main() {
	int n, i, max1=0;
	int* a;
	cin >> n;
	a = new int[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 1; i < n - 1; i++) {
		if ((a[i] > a[i - 1]) and (a[i] > a[i + 1])) {
			max1 = a[i];
		}
	}
	cout << max1;
}