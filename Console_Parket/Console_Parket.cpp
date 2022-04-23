#include <time.h>
#include <iostream>


using namespace std;
/// <summary>
/// Функция, возвращающая целое число
/// </summary>
/// <returns></returns>
int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Программа для рассчета количества паркета на комнату.\n";

tryAgain1:

	int length;
	cout << "Введите длинну комнаты в сантиметрах : ";
	cin >> length;

	int width;
	cout << "Введите ширину комнаты в сантиметрах : ";
	cin >> width;

	try
	{
		if (length < 0) throw "Площадь не может быть отрицательным значением. Попробуйте ввести заного.";
		if (width < 0) throw "Площадь не может быть отрицательным значением. Попробуйте ввести заного.";
	}
	catch (const char* exeption)
	{
		cerr << "Error: " << exeption << "\n";
		goto tryAgain1;
	}

tryAgain:

	int selectionVariable;
	cout << "Выберите способ укладки паркета:\n 1 - Горизонтально\n 2 - Вертикально\n 3 - Выход\n";
	cin >> selectionVariable;

	switch (selectionVariable)
	{
	case(1):
	{
		int boardLength;
		cout << "Введите длинну паркетины в сантиметрах : ";
		cin >> boardLength;

		int boardWidth;
		cout << "Введите ширину паркетины в сантиметрах : ";
		cin >> boardWidth;

		double quantityByLength;
		quantityByLength = length / boardLength;

		double quantityByWidth;
		quantityByWidth = width / boardWidth;

		double restLength;
		restLength = length - (boardLength * quantityByLength);

		double restWidth;
		restWidth = width - (boardWidth * quantityByWidth);

		double total;
		total = quantityByLength * quantityByWidth;

		cout << "По длине " << quantityByLength << " штуки.\r\n По ширине " << quantityByWidth << " \r\n Итого " << total << "\r\n В остатке по длине " << restLength << "\r\n В остатке по ширине " << restWidth << "\n" << "\n";
		goto tryAgain;
	}
	case(2):
	{
		int boardLength;
		cout << "Введите длинну паркетины в сантиметрах : ";
		cin >> boardLength;

		int boardWidth;
		cout << "Введите ширину паркетины в сантиметрах : ";
		cin >> boardWidth;

		double quantityByLength;
		quantityByLength = length / boardWidth;

		double quantityByWidth;
		quantityByWidth = width / boardLength;

		double restLength;
		restLength = length - (boardWidth * quantityByLength);

		double restWidth;
		restWidth = width - (boardLength * quantityByWidth);

		double total;
		total = quantityByLength * quantityByWidth;

		cout << "По длине " << quantityByLength << " штуки.\r\n По ширине " << quantityByWidth << " \r\n Итого " << total << "\r\n В остатке по длине " << restLength << "\r\n В остатке по ширине " << restWidth << "\n" << "\n";
		goto tryAgain;
	}
	case(3):
	{
		cout << "Выход из программы.\n"; break;
	}
	default:
	{
		cout << "Ведено не корректное число. Введите 1, 2 или 3.\n";
		goto tryAgain;
	}
	}
	return 0;
}