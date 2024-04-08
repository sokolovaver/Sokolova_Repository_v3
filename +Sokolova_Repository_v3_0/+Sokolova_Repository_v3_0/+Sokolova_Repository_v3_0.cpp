#include <iostream>

using namespace std;

double inputx() {

	return 0;
}

double inputy() {

	return 0;
}

double inputz() {
	double z;
	cout << "Введите вещественное число z: ";
	cin >> z;
	return z;
}

int Summ(double x, double y, double z) {

	return 0;
}

int Average(double x, double y, double z) {

	return 0;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	int function;
	double x = 0, y = 0, z = 0;
	cout << "1 - Ввести вещественное число x\n2 - Ввести вещественное число y\n3 - Ввести вещественное число z\n4 - Найти целую часть суммы этих 3-х чисел\n5 - Найти дробную часть среднего геометрического модулей этих 3-х чисел\n";
	cout << "\nВведите номер функции: ";
	cin >> function;

	switch (function)
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