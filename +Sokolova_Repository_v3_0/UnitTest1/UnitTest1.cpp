#include "pch.h"
#include "CppUnitTest.h"
#include "C:/Users/socol/OneDrive/Документы/lab/Sokolova_Testing_VS/+Sokolova_Repository_v3_0/+Sokolova_Repository_v3_0/+Sokolova_Repository_v3_0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(negateMenuTest)
		{
			int s = -1;

			bool expected = false;

			bool actual = menuUserInput(s);

			Assert::AreEqual(expected, actual, L"Выход за пределы меню (отрицательный)");
		}

		TEST_METHOD(positiveMenuTest)
		{
			int s = 6;

			bool expected = false;

			bool actual = menuUserInput(s);

			Assert::AreEqual(expected, actual, L"Выход за пределы меню (положительный)");
		}

		TEST_METHOD(nullMenuTest)
		{
			int s = NULL;

			bool expected = false;

			bool actual = menuUserInput(s);

			Assert::AreEqual(expected, actual, L"Выход за пределы меню (NULL)");
		}

		TEST_METHOD(intsum)
		{
			double x = 2;
			double y = 2;
			double z = 2;
			double integer = 0;

			int expected = modf((x + y + z), &integer);

			int actual = Summ(x,y,z);

			Assert::AreEqual(expected, actual, L"Неправильно рассчитывается целая часть суммы вещественных чисел");
		}

		TEST_METHOD(drobsrgeom)
		{
			double x = 2;
			double y = 2;
			double z = 2;
			double integer = 0;

			int expected = 0;

			int actual = Average(x, y, z);

			Assert::AreEqual(expected, actual, L"Неправильно рассчитывается дробная часть среднего геометрического модулей 3 чисел");
		}
	};
}
