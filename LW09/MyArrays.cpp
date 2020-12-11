#include "MyArrays.h"

/* Заполнение размерности для массива */
void MyArrays::SetArraySize() { cin >> this->N; }

/* Получение данных о размености массива для дальнейших манипуляций */
int MyArrays::GetArraySize() { return (this->N); }

/* Заполнение массива значениями с клавиатуры */
void MyArrays::FillSequence(double* A, int& N) {
	for (int iterator = 0; iterator < N; ++iterator) cin >> A[iterator];
}

/* Вывод последовательности в прямой (исходной) форме */
void MyArrays::ShowDirectSequence(double* A, int& N) {
	for (int iterator = 0; iterator < N; ++iterator) cout << " [" << A[iterator] << "]\t";
}

/* Вывод последовательности в инверсированной форме */
void MyArrays::ShowInvertSequence(double* A, int& N) {
	for (int iterator = (N - 1); iterator >= 0; --iterator) cout << " [" << A[iterator] << "]\t";
}

/* Создание динамического массива вещественных чисел (А) */
void MyArrays::WorkWithArrayA(void) {
	cout << "Задайте размерность для массива [A]: ";
	SetArraySize(); int NA = GetArraySize();
	double* ptrA = new double[NA] { 0 };
	if (ptrA == nullptr) cerr << "Внимание! Ваша ОС не смогла выдать вам память из кучи!\a\n";
	cout << "Заполните массив [А]:\n"; FillSequence(ptrA, NA);
	cout << "Ваш массив [A] в прямой последовательности выглядит так:\n";
	ShowDirectSequence(ptrA, NA); cout << '\n';
	cout << "Ваш массив [A] в обратной последовательности выглядит так:\n";
	ShowInvertSequence(ptrA, NA); cout << '\n';
	delete[] ptrA;
	cout << '\n';
}

/* Создание динамического массива вещественных чисел (B) */
void MyArrays::WorkWithArrayB(void) {
	cout << "Задайте размерность для массива [B]: ";
	SetArraySize(); int NB = GetArraySize();
	double* ptrB = new double[NB] { 0 };
	if (ptrB == nullptr) cerr << "Внимание! Ваша ОС не смогла выдать вам память из кучи!\a\n";
	cout << "Заполните массив [B]:\n"; FillSequence(ptrB, NB);
	cout << "Ваш массив [B] в прямой последовательности выглядит так:\n";
	ShowDirectSequence(ptrB, NB); cout << '\n';
	cout << "Ваш массив [B] в обратной последовательности выглядит так:\n";
	ShowInvertSequence(ptrB, NB); cout << '\n';
	delete[] ptrB;
	cout << '\n';
}

/* Создание динамического массива вещественных чисел (C) */
void MyArrays::WorkWithArrayC(void) {
	cout << "Задайте размерность для массива [C]: ";
	SetArraySize(); int NC = GetArraySize();
	double* ptrC = new double[NC] { 0 };
	if (ptrC == nullptr) cerr << "Внимание! Ваша ОС не смогла выдать вам память из кучи!\a\n";
	cout << "Заполните массив [C]:\n"; FillSequence(ptrC, NC);
	cout << "Ваш массив [C] в прямой последовательности выглядит так:\n";
	ShowDirectSequence(ptrC, NC); cout << '\n';
	cout << "Ваш массив [C] в обратной последовательности выглядит так:\n";
	ShowInvertSequence(ptrC, NC); cout << '\n';
	delete[] ptrC;
	cout << '\n';
}