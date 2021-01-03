#include<locale.h>
#include<iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	string arr[] = { "одно", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
	string y;
	int a;
	cin >> a;
	if (a / 10 == 1) {
		switch (a % 10) {
		case 0: 
			y = "десять";
			break;
		case 1:
			y = "одиннадцать";
			break;
		case 2:
			y = "двенадцать";
			break;
		case 3:
			y = "тринадцать";
			break;
		case 4:
			y = "четырнадцать";
			break;
		case 5:
			y = "пятнадцать";
			break;
		case 6:
			y = "шестнадцать";
			break;
		case 7:
			y = "семнадцать";
			break;
		case 8:
			y = "восемнадцать";
			break;
		case 9:
			y = "девятнадцать";
			break;
		}
	}
	else {
		switch (a / 10)
		{
		case 2:
			y = "двадцать";
			break;
		case 3:
			y = "тридцать";
			break;
		case 4:
			y = "сорок";
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
		y += " учебное задание";
	else if ((a%10) < 5 and (a>20)) y += " учебных задания";
	else y += " учебных заданий";
	cout << y;
}