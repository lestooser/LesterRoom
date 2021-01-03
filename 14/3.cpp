#include<iostream>
using namespace std;
void main() {
	int n,k=1,i=0;
	cin >> n;
	while (k < n) {
		k += i;
		i++;
	}
	cout << i-1 << ' ' << k;
}