#include<iostream>
#include<locale.h>
using namespace std;
string y;
string v1(int a) {
	setlocale(LC_ALL, "RUS");
	switch (a) {
	case 1: 
		y = "�����";
		return y;
		break;
	case 0:
		y = "�����";
		return y;
		break;
	case -1:
		y = "������";
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