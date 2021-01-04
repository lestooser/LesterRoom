#include<iostream>
using namespace std;
void main() {
	int n, i, j,i1,j1;
	int* a;
	cin >> n;
	a = new int[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				i1 = i; j1 = j;
			}
		}
	}
	cout << min(i1,j1) << ' ' << max(i1,j1);
}