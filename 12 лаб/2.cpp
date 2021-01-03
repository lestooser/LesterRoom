#include<iostream>
#include<locale.h>
using namespace std;
string y;
string v1(int a) {
	setlocale(LC_ALL, "RUS");
	switch (a) {
	case 1: 
		y = "Запад";
		return y;
		break;
	case 0:
		y = "Север";
		return y;
		break;
	case -1:
		y = "Восток";
		return y;
		break;
	}
}

void main() {
	setlocale(LC_ALL, "RUS");
	int a;
	string res;
	cin >> a;
	res = v1(a);
	cout << res;
}