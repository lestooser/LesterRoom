#include <iostream>
using namespace std;
void main(){
	float a, s, k;
	int n, i;
	s = 0;
	cin >> a >> n;
	for (i = 0; i <= n; i++) {
		if (((i % 3 == 0)and (i!=0)) or (i == 1)) {
			s -= pow(a, i);
		}
		else s += pow(a, i);
		cout << s << ' ';
	}
}