#include<iostream>
using namespace std;
void main() {
	int i;
	float a,n,res;
	cin >> a >> n;
	for (i = 0; i <= n; i++) {
		res = pow(a, i);
		cout << res << ' ';
	}
}