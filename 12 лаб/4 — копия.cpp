#include<locale.h>
#include<iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	string arr[] = { "����", "���", "���", "������", "����", "�����", "����", "������", "������" };
	string y;
	int a;
	cin >> a;
	switch (a/100)
	{
	case 1:
		y = "���";
		break;
	case 2:
		y = "������";
		break;
	case 3:
		y = "������";
		break;
	case 4:
		y = "���������";
		break;
	case 5:
		y = "�������";
		break;
	case 6:
		y = "��������";
		break;
	case 7:
		y = "�������";
		break;
	case 8:
		y = "���������";
		break;
	case 9:
		y = "���������";
		break;
	default:
		break;
	}
	if (a / 10 % 10 == 1) {
		switch (a % 10)
		{
		case 0:
			y = "������";
			break;
		case 1:
			y += " ������������";
			break;
		case 2:
			y += " ����������";
			break;
		case 3:
			y += " ����������";
			break;
		case 4:
			y += " ������������";
			break;
		case 5:
			y += " ����������";
			break;
		case 6:
			y += " �����������";
			break;
		case 7:
			y += " ����������";
			break;
		case 8:
			y += " ������������";
			break;
		case 9:
			y += " ������������";
			break;
		default:
			break;
		}
	}
	else {
		switch (a / 10 % 10) {
		case 2:
			y += " �������� " + arr[a%10-1];
			break;
		case 3:
			y += " �������� " + arr[a % 10 - 1];
			break;
		case 4:
			y += " ����� " + arr[a % 10 - 1];
			break;
		case 5:
			y += " ��������� " + arr[a % 10 - 1];
			break;
		case 6:
			y += " ���������� " + arr[a % 10 - 1];
			break;
		case 7:
			y += " ��������� " + arr[a % 10 - 1];
			break;
		case 8:
			y += " ����������� " + arr[a % 10 - 1];
			break;
		case 9:
			y += " ��������� " + arr[a % 10 - 1];
			break;
		default: break;
		}
	}
	cout << y;
}