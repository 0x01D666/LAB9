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

/* ���������� ������������� � ����� ���� ��������� �������/���������� ��� ������ � ����������� */
void GlobalInit(void) {
	cout << "�������� ���� �� �������, �������������� ����:\n";
	const string tasks_list[3] = { "������ � ������������ �������", "������ � ���������", "������ � ���������" };
	for (int i = 0; i < 3; ++i) cout << ' ' << (i + 1) << ") " << tasks_list[i] << ".\n";
	while (true) {
		cout << "��� �����: ";
		unsigned short user_choice = 0; cin >> user_choice;
		if (cin.fail()) {
			cin.clear(); cin.ignore();
			cout << "��������! ������� ������������� �������� � ��������� �� 1 �� 3!" << '\n';
		}
		else {
			if ((user_choice) <= 0 or (user_choice > 3)) {
				cin.clear(); cin.ignore();
				cout << "��������! ������� ������������� �������� � ��������� �� 1 �� 3!" << '\n';
			}
			else {
				if (user_choice == 1) {
					system("cls");
					/* ������� ������� */
					cout << "������� �1.�������(-�):\n";
					cout << " ��������� ��������� �������� ����� ���� ����������� �����, ������� �,\n";
					cout << "������� ����� ���� ������� ����� X, ��������� ��������������� ������� ���������� ����� ���� �����.\n\n";

					/* �������� ������� ������ MyNumbers / ����� ������(-��) ������ MyNumbers */
					cout << "�������:\n";
					MyNumbers* MyNums = new MyNumbers();
					MyNums->Init();
					delete MyNums;
					break;
				}
				else if (user_choice == 2) {
					system("cls");
					/* ������� ������� */
					cout << "������� �2.�������(-�):\n";
					cout << " ������� ������� Otr(Ax,Ay,Bx,By) ������������� ����, ��������� ����� ������� AB ��\n";
					cout << "��������� �� ����������� ��� ������ : | AB | = sqrt((Ax - Bx)2 + (Ay - By)2) (Ax, Ay, Bx, By - ������������ ���������).\n";
					cout << "� ������� ���� ������� ����� ����� �������� AB, AC, AD, ���� ���� ���������� ����� A, B, C, D.\n\n";

					/* �������� ������� ������ MyPoint / ����� ������(-��) ������ MyPoint */
					cout << "�������:\n";
					MyPoint* MyPt = new MyPoint();
					MyPt->Init();
					delete MyPt;
					break;
				}
				else if (user_choice == 3) {
					system("cls");
					/* ������� ������� */
					cout << "������� �3. �������(-�):\n";
					cout << " ������� ������� Invert(A, N), �������� ������� ���������� ��������� ������� A �� N\n";
					cout << "������������ ����� �� ���������������(\"�������������� �������\"). � ������� ���� �������\n";
					cout << "������������� ������� A, B, C ������� NA, NB, NC ��������������.\n\n";

					/* �������� ������� ������ MyArrays / ����� ������(-��) ������ MyArrays */
					cout << "�������:\n";
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
	/* ���������� ������������� ����� �������� �����-������ C � C++ */
	ios_base::sync_with_stdio(false);

	/* ��������� ��������� ������� */
	SetConsoleCP(LANG_ENCODING);
	SetConsoleOutputCP(LANG_ENCODING);

	/* ��������� ������� */
	SetConsoleTitle(L"LW09");

	/* ����� ������� �������, ���������� �� ������ � ��������� � ���������� �����������.
	����������� ���� ��� �������� ���������� ������ ��������� ��� ������ �����������/����������� ������ */
	GlobalInit();
	while (true) {
		cout << '\n';
		cout << "������ �� �� ���������� ������������� ����������?\n";
		cout << "YES(��) / NO(���)\n";
		cout << "��� �����: ";
		string user_choice; cin >> user_choice;

		/* ���������� ���� ��������� ��������� ������ � ������� �������� ����� ����� ����������� ���������� <algorithm>*/
		transform(user_choice.begin(), user_choice.end(), user_choice.begin(), tolower);

		/* �������� ������� � ��������� �������� ������ � �������� ����������� ������ */
		const string standard_choice = "yes";
		if (user_choice != standard_choice) {
			system("cls");
			cout << "������� �� ������������� ������� ����������! �� �������!" << endl;
			break;
		}
		else {
			cout << "���������� ������������� ����������!\n";
			Sleep(1250);
			system("cls");
			GlobalInit();
		}
	}
	cin.get();
	return 0;
}