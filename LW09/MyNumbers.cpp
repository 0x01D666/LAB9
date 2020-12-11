#include "MyNumbers.h"

/* ������������� �������� ��� ���������� � */
void MyNumbers::SetValueForM() { cin >> this->M; }

/* ������������� �������� ��� ���������� � */
void MyNumbers::SetValueForX() { cin >> this->X; }

/* ��������� �������� �� ������������������ ���������� � */
int MyNumbers::GetValueForM() { return (this->M); }

/* ��������� �������� �� ������������������ ���������� � */
int MyNumbers::GetValueForX() { return (this->X); }

/* ������� ���-�� �����, ������� ������, ��� � */
int MyNumbers::CountAmountOfNumbersSmallerThenM(int& M) {
	int counter = 0;
	while (counter < M) counter++;
	return (counter);
}

/* ������� ����� ����� �� �������� ��������� ����� */
int MyNumbers::CountSumOfDigitsInTheNumber(int M) {
	int sum_counter = 0;
	while (M != 0) {
		sum_counter += M % 10;
		M /= 10;
	}
	return (sum_counter);
}

/* ������� ���-�� �����, ����� ����� �� ��������, ����������� � ������� �������, ����� � */
int MyNumbers::CountTheNumbersEqualToX(int& M, int& X) {
	int counter = 0;
	for (int i = 1; i < M; ++i) {
		if (pow(CountSumOfDigitsInTheNumber(i), 2) == X) counter++;
	}
	return (counter);
}

void MyNumbers::Init(void) {
	cout << " ������� �������� ��� ���������� [M]: "; SetValueForM();
	cout << " ������� �������� ��� ���������� [X]: "; SetValueForX();
	int M = GetValueForM(), X = GetValueForX();
	cout << "\n�����:\n";
	cout << " ���-�� ���. ����� ������� �: " << "[" << CountAmountOfNumbersSmallerThenM(M) << "]\n";
	cout << " ���-�� �����, ����� � �������� ������� ����� X: " << "[" << CountTheNumbersEqualToX(M, X) << "]\n";
}