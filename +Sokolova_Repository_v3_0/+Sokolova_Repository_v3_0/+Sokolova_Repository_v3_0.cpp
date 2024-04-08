#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double inputx() {

	return 0;
}

double inputy() {

	return 0;
}

double inputz() {

	return 0;
}

double Summ(double x, double y, double z) {
	double func = 0, integer = 0;
	func = modf((x + y + z), &integer);
	cout << endl << "Целая часть суммы вещественных чисел равна = " << integer << endl << endl;
	return 0;
}

int Average(double x, double y, double z) {

	return 0;
}


int main()
{
	setlocale(LC_ALL, "RU");
	int n = 9;
	string s;
	double x = 0, y = 0, z = 0;
	while (n != 0)
	{
		cout << "1 - Ввести вещественное число x\n2 - Ввести вещественное число y\n3 - Ввести вещественное число z\n4 - Найти целую часть суммы этих 3-х чисел\n5 - Найти дробную часть среднего геометрического модулей этих 3-х чисел\n";
		cout << "\nВведите номер функции: ";
		cin >> s;
		if (s.length() > 1 || ((s[0] != '1') && (s[0] != '2') && (s[0] != '3') && (s[0] != '4') && (s[0] != '5') && (s[0] != '0')))
		{
			do
			{
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Неправильный ввод!" << endl;
				cout << "Введите номер желаемой функции или 0, если хотите завершить программу" << endl;
				cin >> s;
			} while (s.length() > 1 && (s[0] != '1') && (s[0] != '2') && (s[0] != '3') && (s[0] != '4') && (s[0] != '5') && (s[0] != '0'));
		}
		else
			n = stof(s);

		switch (n)
		{
		case 1:
		{
			x = inputx();
			break;
		}
		case 2:
		{
			y = inputy();
			break;
		}
		case 3:
		{
			z = inputz();
			break;
		}
		case 4:
		{
			if (!(x && y && z))
			{
				cout << "\nСначала надо ввести числа!\n\n";
				break;
			}
			Summ(x, y, z);
			break;
		}
		case 5:
		{
			if (!(x && y && z))
			{
				cout << "\nСначала надо ввести числа!\n\n";
				break;
			}
			Average(x, y, z);
			break;
		}
		default:
				break;
		}
	
	} 
	return 0;
}