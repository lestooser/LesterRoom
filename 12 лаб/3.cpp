#include<locale.h>
#include<iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	string arr[] = { "����", "���", "���", "������", "����", "�����", "����", "������", "������" };
	string y;
	int a;
	cin >> a;
	if (a / 10 == 1) {
		switch (a % 10) {
		case 0: 
			y = "������";
			break;
		case 1:
			y = "�����������";
			break;
		case 2:
			y = "����������";
			break;
		case 3:
			y = "����������";
			break;
		case 4:
			y = "������������";
			break;
		case 5:
			y = "����������";
			break;
		case 6:
			y = "�����������";
			break;
		case 7:
			y = "����������";
			break;
		case 8:
			y = "������������";
			break;
		case 9:
			y = "������������";
			break;
		}
	}
	else {
		switch (a / 10)
		{
		case 2:
			y = "��������";
			break;
		case 3:
			y = "��������";
			break;
		case 4:
			y = "�����";
			break;
		default:
			break;
		}
	switch (a%10)
		{
	case 1:
		y += " " + arr[a % 10 - 1];
		break;
	case 2:
		y += " " + arr[a % 10 - 1];
		break;
	case 3:
		y += " " + arr[a % 10 - 1];
		break;
	case 4:
		y += " " + arr[a % 10 - 1];
		break;
	case 5:
		y += " " + arr[a % 10 - 1];
		break;
	case 6:
		y += " " + arr[a % 10 - 1];
		break;
	case 7:
		y += " " + arr[a % 10 - 1];
		break;
	case 8:
		y += " " + arr[a % 10 - 1];
		break;
	case 9:
		y += " " + arr[a % 10 - 1];
		break;
	default:
		break;
		}
	}
	if ((a % 10 == 1) and (a != 11))
		y += " ������� �������";
	else if ((a%10) < 5 and (a>20)) y += " ������� �������";
	else y += " ������� �������";
	cout << y;
}