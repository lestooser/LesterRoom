#include<iostream>
using namespace std;
void main() {
	int h,n,i,m=1;
	int* a;
	cin >> n;
	a = new int[n];
	for (i = 0; i < n; i++) {
		a[i] = m;
		m += 2;
		cout << i << " : " <<  m << '\n';
	}
}