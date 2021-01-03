#include<iostream>
using namespace std;
void main() {
	int n, i;
	int* a;
	cout << "N = "; cin >> n; cout << '\n';
	a = new int[n];
	for (i = 0; i < n; i++) {
		printf("a[%d] : ", i+1);
		cin >> a[i];
	}
	for (i = 0; i < n; i++) 
		if (a[i]%2==1) printf("a[%d] : %d \n", i, a[i]);
	
	for (i = n; i > 0; i--) 
		if (a[i] % 2 == 0) printf("a[%d] : %d\n", i, a[i]);
	
}