#include <iostream>
#include <cstdlib>
#include <ciso646>
#include <cstdio>
#include <string>
#include <cctype>
#include <algorithm>
#define LANG_ENCODING 1251
#include <windows.h>
#include "MyNumbers.h"
#include "MyArrays.h"
#include "MyPoint.h"
using namespace std;

/* Глобальная инициалазация и вызов всех требуемых методов/переменных для работы с приложением */
void GlobalInit(void) {
	cout << "Выберите одно из заданий, представленных ниже:\n";
	const string tasks_list[3] = { "Работа с натуральными числами", "Работа с отрезками", "Работа с массивами" };
	for (int i = 0; i < 3; ++i) cout << ' ' << (i + 1) << ") " << tasks_list[i] << ".\n";
	while (true) {
		cout << "Мой выбор: ";
		unsigned short user_choice = 0; cin >> user_choice;
		if (cin.fail()) {
			cin.clear(); cin.ignore();
			cout << "Внимание! Введите целочисленное значение в диапазоне от 1 до 3!" << '\n';
		}
		else {
			if ((user_choice) <= 0 or (user_choice > 3)) {
				cin.clear(); cin.ignore();
				cout << "Внимание! Введите целочисленное значение в диапазоне от 1 до 3!" << '\n';
			}
			else {
				if (user_choice == 1) {
					system("cls");
					/* Условия задания */
					cout << "Задание №1.Условие(-я):\n";
					cout << " Составьте программу подсчета числа всех натуральных чисел, меньших М,\n";
					cout << "квадрат суммы цифр которых равен X, используя вспомогательную функцию вычисления суммы цифр числа.\n\n";

					/* Создание объекта класса MyNumbers / Вызов метода(-ов) класса MyNumbers */
					cout << "Решение:\n";
					MyNumbers* MyNums = new MyNumbers();
					MyNums->Init();
					delete MyNums;
					break;
				}
				else if (user_choice == 2) {
					system("cls");
					/* Условия задания */
					cout << "Задание №2.Условие(-я):\n";
					cout << " Описать функцию Otr(Ax,Ay,Bx,By) вещественного типа, находящую длину отрезка AB на\n";
					cout << "плоскости по координатам его концов : | AB | = sqrt((Ax - Bx)2 + (Ay - By)2) (Ax, Ay, Bx, By - вещественные параметры).\n";
					cout << "С помощью этой функции найти длины отрезков AB, AC, AD, если даны координаты точек A, B, C, D.\n\n";

					/* Создание объекта класса MyPoint / Вызов метода(-ов) класса MyPoint */
					cout << "Решение:\n";
					MyPoint* MyPt = new MyPoint();
					MyPt->Init();
					delete MyPt;
					break;
				}
				else if (user_choice == 3) {
					system("cls");
					/* Условия задания */
					cout << "Задание №3. Условие(-я):\n";
					cout << " Описать функцию Invert(A, N), меняющую порядок следования элементов массива A из N\n";
					cout << "вещественных чисел на противоположный(\"инвертирование массива\"). С помощью этой функции\n";
					cout << "инвертировать массивы A, B, C размера NA, NB, NC соответственно.\n\n";

					/* Создание объекта класса MyArrays / Вызов метода(-ов) класса MyArrays */
					cout << "Решение:\n";
					MyArrays* MyArr = new MyArrays();
					MyArr->WorkWithArrayA();
					MyArr->WorkWithArrayB();
					MyArr->WorkWithArrayC();
					delete MyArr;
					break;
				}
			}
		}
	}
}

int main() {
	/* Отключение синхронизации между потоками ввода-вывода C и C++ */
	ios_base::sync_with_stdio(false);

	/* Изменение кодировки консоли */
	SetConsoleCP(LANG_ENCODING);
	SetConsoleOutputCP(LANG_ENCODING);

	/* Заголовок консоли */
	SetConsoleTitle(L"LW09");

	/* Вызов главной функции, отвечающей за работу с заданиями и управления приложением.
	Бесконечный цикл для создания корректной работы программы при выборе продолжения/прекращения сеанса */
	GlobalInit();
	while (true) {
		cout << '\n';
		cout << "Хотите ли Вы продолжить использование приложения?\n";
		cout << "YES(Да) / NO(Нет)\n";
		cout << "Мой выбор: ";
		string user_choice; cin >> user_choice;

		/* Приведение всех буквенных литералов строки к нижнему регистру через метод стандартной библиотеки <algorithm>*/
		transform(user_choice.begin(), user_choice.end(), user_choice.begin(), tolower);

		/* Проверка условия и сравнение итоговой строки с шаблоном правильного ответа */
		const string standard_choice = "yes";
		if (user_choice != standard_choice) {
			system("cls");
			cout << "Спасибо за использование данного приложения! До встречи!" << endl;
			break;
		}
		else {
			cout << "Продолжаем использование приложения!\n";
			Sleep(1250);
			system("cls");
			GlobalInit();
		}
	}
	cin.get();
	return 0;
}