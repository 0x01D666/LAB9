#include "MyNumbers.h"

/* Инициализация значения для переменной М */
void MyNumbers::SetValueForM() { cin >> this->M; }

/* Инициализация значения для переменной Х */
void MyNumbers::SetValueForX() { cin >> this->X; }

/* Получение значения из инициализированной переменной М */
int MyNumbers::GetValueForM() { return (this->M); }

/* Получение значения из инициализированной переменной Х */
int MyNumbers::GetValueForX() { return (this->X); }

/* Подсчет кол-ва чисел, которые меньше, чем М */
int MyNumbers::CountAmountOfNumbersSmallerThenM(int& M) {
	int counter = 0;
	while (counter < M) counter++;
	return (counter);
}

/* Подсчет суммы чисел из разрядов исходного числа */
int MyNumbers::CountSumOfDigitsInTheNumber(int M) {
	int sum_counter = 0;
	while (M != 0) {
		sum_counter += M % 10;
		M /= 10;
	}
	return (sum_counter);
}

/* Подсчет кол-ва чисел, сумма чисел из разрядов, возведенная в квадрат которых, ровна Х */
int MyNumbers::CountTheNumbersEqualToX(int& M, int& X) {
	int counter = 0;
	for (int i = 1; i < M; ++i) {
		if (pow(CountSumOfDigitsInTheNumber(i), 2) == X) counter++;
	}
	return (counter);
}

void MyNumbers::Init(void) {
	cout << " Введите значение для переменной [M]: "; SetValueForM();
	cout << " Введите значение для переменной [X]: "; SetValueForX();
	int M = GetValueForM(), X = GetValueForX();
	cout << "\nОтвет:\n";
	cout << " Кол-во нат. чисел меньших М: " << "[" << CountAmountOfNumbersSmallerThenM(M) << "]\n";
	cout << " Кол-во чисел, сумма в квадрате которых равна X: " << "[" << CountTheNumbersEqualToX(M, X) << "]\n";
}