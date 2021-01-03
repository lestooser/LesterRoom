#include<iostream>
using namespace std;
void main() {
	int A, b, n,i;
	int* a;
	cin >> n >> A >> b;
	a = new int[n];
	a[0] = A;
	a[1] = b;
	cout << "0 : " << a[0] << '\n';
	cout << "1 : " << a[1] << '\n';
	b += A;
	for (i = 2; i < n; i++) {
		a[i] = b;
		b *= 2;
		cout << i << " : " << a[i] << '\n';
	}
}