#include<iostream>
using namespace std;
void main() {
	int a,res, b,max1,min1;
	cin >> a >> b;
	max1 = max(a, b);
	min1 = min(a, b);
	while (true) {
		res = max1 - min1;
		max1 = max(res,min1);
		min1 = min(res, min1);
		cout << "res = " << res << " min1 = "<< min1 << " max1 = "<< max1 << '\n';
		if (min1 == max1) {
			break;
		}
	}
	cout << res;
}