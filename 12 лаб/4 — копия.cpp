#include<locale.h>
#include<iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	string arr[] = { "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
	string y;
	int a;
	cin >> a;
	switch (a/100)
	{
	case 1:
		y = "сто";
		break;
	case 2:
		y = "двести";
		break;
	case 3:
		y = "триста";
		break;
	case 4:
		y = "четыреста";
		break;
	case 5:
		y = "пятьсот";
		break;
	case 6:
		y = "шестьсот";
		break;
	case 7:
		y = "семьсот";
		break;
	case 8:
		y = "восемьсот";
		break;
	case 9:
		y = "девятьсот";
		break;
	default:
		break;
	}
	if (a / 10 % 10 == 1) {
		switch (a % 10)
		{
		case 0:
			y = "десять";
			break;
		case 1:
			y += " одиннацдцать";
			break;
		case 2:
			y += " двенадцать";
			break;
		case 3:
			y += " тринадцать";
			break;
		case 4:
			y += " четырнадцать";
			break;
		case 5:
			y += " пятнадцать";
			break;
		case 6:
			y += " шестнадцать";
			break;
		case 7:
			y += " семнадцать";
			break;
		case 8:
			y += " восемнадцать";
			break;
		case 9:
			y += " девятнадцать";
			break;
		default:
			break;
		}
	}
	else {
		switch (a / 10 % 10) {
		case 2:
			y += " двадцать " + arr[a%10-1];
			break;
		case 3:
			y += " тридцать " + arr[a % 10 - 1];
			break;
		case 4:
			y += " сорок " + arr[a % 10 - 1];
			break;
		case 5:
			y += " пятьдесят " + arr[a % 10 - 1];
			break;
		case 6:
			y += " шестьдесят " + arr[a % 10 - 1];
			break;
		case 7:
			y += " семьдесят " + arr[a % 10 - 1];
			break;
		case 8:
			y += " восемьдесят " + arr[a % 10 - 1];
			break;
		case 9:
			y += " девяносто " + arr[a % 10 - 1];
			break;
		default: break;
		}
	}
	cout << y;
}