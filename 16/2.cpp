#include<iostream>
using namespace std;
void main() {
	int A, d, i,n;
	int * a;
	cin >> n >> A >> d;
	a = new int[n];
	a[0] = A;
	cout << "0 : " << a[0] << '\n';
	for (i = 1; i < n; i++) {
		a[i] = a[i-1] * d;
		cout << i << " : " << a[i] << '\n';
	}
}