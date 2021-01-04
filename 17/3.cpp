#include<iostream>
using namespace std;
void main() {
	int n, i, min1;
	int* a;
	cin >> n;
	a = new int[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	min1 = min(a[0], a[2]);
	for (i = 0; i < n-2; i+=2) {
		if (a[i] < min1) min1 = a[i];
		
	}
	cout << min1;
}