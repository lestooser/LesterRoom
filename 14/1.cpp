using namespace std;
#include<iostream>
void main() {
	int a, b, i, j;
	cin >> a >> b;
	for (i = a; i <= b; i++) {
		for (j = 0; j < i; j++) {
			cout << i;
		}
		cout << '\n';
	}
}