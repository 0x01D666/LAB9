#include "MyArrays.h"

/* ���������� ����������� ��� ������� */
void MyArrays::SetArraySize() { cin >> this->N; }

/* ��������� ������ � ���������� ������� ��� ���������� ����������� */
int MyArrays::GetArraySize() { return (this->N); }

/* ���������� ������� ���������� � ���������� */
void MyArrays::FillSequence(double* A, int& N) {
	for (int iterator = 0; iterator < N; ++iterator) cin >> A[iterator];
}

/* ����� ������������������ � ������ (��������) ����� */
void MyArrays::ShowDirectSequence(double* A, int& N) {
	for (int iterator = 0; iterator < N; ++iterator) cout << " [" << A[iterator] << "]\t";
}

/* ����� ������������������ � ��������������� ����� */
void MyArrays::ShowInvertSequence(double* A, int& N) {
	for (int iterator = (N - 1); iterator >= 0; --iterator) cout << " [" << A[iterator] << "]\t";
}

/* �������� ������������� ������� ������������ ����� (�) */
void MyArrays::WorkWithArrayA(void) {
	cout << "������� ����������� ��� ������� [A]: ";
	SetArraySize(); int NA = GetArraySize();
	double* ptrA = new double[NA] { 0 };
	if (ptrA == nullptr) cerr << "��������! ���� �� �� ������ ������ ��� ������ �� ����!\a\n";
	cout << "��������� ������ [�]:\n"; FillSequence(ptrA, NA);
	cout << "��� ������ [A] � ������ ������������������ �������� ���:\n";
	ShowDirectSequence(ptrA, NA); cout << '\n';
	cout << "��� ������ [A] � �������� ������������������ �������� ���:\n";
	ShowInvertSequence(ptrA, NA); cout << '\n';
	delete[] ptrA;
	cout << '\n';
}

/* �������� ������������� ������� ������������ ����� (B) */
void MyArrays::WorkWithArrayB(void) {
	cout << "������� ����������� ��� ������� [B]: ";
	SetArraySize(); int NB = GetArraySize();
	double* ptrB = new double[NB] { 0 };
	if (ptrB == nullptr) cerr << "��������! ���� �� �� ������ ������ ��� ������ �� ����!\a\n";
	cout << "��������� ������ [B]:\n"; FillSequence(ptrB, NB);
	cout << "��� ������ [B] � ������ ������������������ �������� ���:\n";
	ShowDirectSequence(ptrB, NB); cout << '\n';
	cout << "��� ������ [B] � �������� ������������������ �������� ���:\n";
	ShowInvertSequence(ptrB, NB); cout << '\n';
	delete[] ptrB;
	cout << '\n';
}

/* �������� ������������� ������� ������������ ����� (C) */
void MyArrays::WorkWithArrayC(void) {
	cout << "������� ����������� ��� ������� [C]: ";
	SetArraySize(); int NC = GetArraySize();
	double* ptrC = new double[NC] { 0 };
	if (ptrC == nullptr) cerr << "��������! ���� �� �� ������ ������ ��� ������ �� ����!\a\n";
	cout << "��������� ������ [C]:\n"; FillSequence(ptrC, NC);
	cout << "��� ������ [C] � ������ ������������������ �������� ���:\n";
	ShowDirectSequence(ptrC, NC); cout << '\n';
	cout << "��� ������ [C] � �������� ������������������ �������� ���:\n";
	ShowInvertSequence(ptrC, NC); cout << '\n';
	delete[] ptrC;
	cout << '\n';
}