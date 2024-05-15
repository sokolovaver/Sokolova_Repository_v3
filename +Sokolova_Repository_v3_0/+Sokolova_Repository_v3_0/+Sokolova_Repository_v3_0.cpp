#include <iostream>
#include <cmath>
#include <string>
/**
	@file		+Sokolova_Repository_v3_0.cpp
	@brief		Файл с исходным кодом
	@copyright	ВоГУ
	@author		Соколова В.А.
	@date		01-05-2024
	@version	1.0.1
\par Содержит функции:
- @ref main
- @ref inputx
- @ref inputy
- @ref inputz
- @ref Summ
- @ref Average
*/
using namespace std;

bool UserInput(double input)
{
	if (input == NULL)
		return false;
	return true;
}

bool menuUserInput(int s)
{
	if (s < 1 || s > 5)
		return false;
	return true;
}
/// Возвращает число x
/**
@return вещественное число x, введённое с клавиатуры
*/
double inputx() {
	double x;
	cout << "Введите вещественное число x: ";
	cin >> x;
	return x;
}

/// Возвращает число y
/**
@return вещественное число y, введённое с клавиатуры
*/
double inputy() {
		double y;
		cout << "Введите вещественное число y: ";
		cin >> y;
		return y;
}

/// Возвращает число z
/**
@return вещественное число z, введённое с клавиатуры
*/
double inputz() {
	double z;
	cout << "Введите вещественное число z: ";
	cin >> z;
	return z;
}

/// Возвращает целую часть суммы вещественных чисел x+y+z
/**
@return целая часть суммы вещественных чисел x, y и z введённых в функциях inputx, inputy и inputz
@param x число x введённое с клавиатуры
@param y число y введённое с клавиатуры
@param z число z введённое с клавиатуры
*/
double Summ(double x, double y, double z) {
	double func = 0, integer = 0;
	func = modf((x + y + z), &integer);
	cout << endl << "Целая часть суммы вещественных чисел равна = " << integer << endl << endl;
	return 0;
}

/// Возвращает дробную часть среднего геометрического модулей вещественных чисел abs(x)*abs(y)*abs(z)
/**
@return дробная часть среднего геометрического модулей вещественных чисел x, y и z введённых в функциях inputx, inputy и inputz
@param x число x введённое с клавиатуры
@param y число y введённое с клавиатуры
@param z число z введённое с клавиатуры
*/
int Average(double x, double y, double z) {
double func = 0, integer = 0;
	func = modf(cbrt(abs(x)*abs(y)*abs(z)), &integer);
	cout << endl << "Дробная часть среднего геометрического модулей 3 чисел равна = " << func << endl << endl;
	
	return 0;
}


int main()
{
	setlocale(LC_ALL, "RU");	/// Подключение русского языка
	int n = 9;	///< Номер функции
	int s;	///< Строка для функций
	double x = NULL;	///< Число для ввода x
	double y = NULL;	///< Число для ввода y
	double z = NULL;	///< Число для ввода z
	while (true)
	{
		cout << "1 - Ввести вещественное число x\n2 - Ввести вещественное число y\n3 - Ввести вещественное число z\n4 - Найти целую часть суммы этих 3-х чисел\n5 - Найти дробную часть среднего геометрического модулей этих 3-х чисел\n";	/// Вывод пунктов меню
		cout << "\nВведите номер функции: ";	/// Сообщение с просьбой ввести функцию
		cin >> s;	/// Ввод номера нужной функции
		while (!menuUserInput(s))
		{
			cout << "\nВведите номер функции: ";
			cin >> s;
		}
		/// Свитч выполняет роль меню
		switch (s)
		{
		case 1:
		{
			while (!UserInput(x)){
				x = inputx();	/// Вызов функции ввода x и присваивание введённого числа
				break;
			}
		}
		case 2:
		{
			while (!UserInput(y)) {
				y = inputy();	/// Вызов функции ввода y и присваивание введённого числа
				break;
			}
		}
		case 3:
		{
			while (!UserInput(z)) {
				z = inputz();	/// Вызов функции ввода z и присваивание введённого числа
				break;
			}
		}
		case 4:
		{
			if (!(x && y && z))	///Проверка ввода значений для 1 вычисляемой функции
			{
				cout << "\nСначала надо ввести числа!\n\n";
				break;
			}
			Summ(x, y, z);	/// Вызов функции вывода целой части суммы x, y, z и вывод результата
			break;
		}
		case 5:
		{
			if (!(x && y && z))	///Проверка ввода значений для 2 вычисляемой функции
			{
				cout << "\nСначала надо ввести числа!\n\n";
				break;
			}
			Average(x, y, z);	/// Вызов функции вывода дробной части среднего геометрического модулей x, y, z и вывод результата
			break;
		}
		default:

			break;
		}

	}
	return 0;

		}
	
	
