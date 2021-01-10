#include<iostream>
using namespace std;
void main() {
	int n, mini,maxi,min1,max1,k, i;
	int a[] = {1,5,2,4,6,8,2,9,9};
	n = sizeof(a) / sizeof(int);
	/*int* a;
	cin >> n;
	a = new int[n];
	for (i = 0; i < n; i++) {
		a[i] = rand() % 10;
	}*/
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d \t", i, a[i]);
	}
	cout << '\n' << '\n';
	mini = a[0]; maxi = a[0];
	min1 = 0; max1 = 0;
	for (i = 0; i < n; i++) {
		if (a[i] < mini) {
			mini = a[i];
			min1 = i;
		}
		else if (a[i] > maxi) {
			maxi = a[i];
			max1 = i;
		}
	}
	k = min(min1, max1);
	maxi = max(min1, max1);
	cout <<"mini = "<< k << " maxi = " << maxi;
	cout << '\n' << '\n';
	for (i = k; i < maxi; i++) {
		if (i != k) {
			a[i] = 0;
		}
	}
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d \t", i, a[i]);
	}
}