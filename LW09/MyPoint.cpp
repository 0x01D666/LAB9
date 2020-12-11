#include "MyPoint.h"

/* ���������� ����� ������� */
double MyPoint::FindSegmentLength(double x1, double y1, double x2, double y2) {
	return abs(sqrt(pow((x1 - y1), 2) + pow((x2 - y2), 2)));
}

/* ������� ������ ���������� ������ � ����������� �������� */
void MyPoint::ShowReadyTemplate(double x1, double y1, double x2, double y2, const char first_point_name, const char second_point_name) {
	cout << " ������� ��������� �������� ��� ����� " << first_point_name << "[x1]: "; cin >> x1;
	cout << " ������� �������� �������� ��� ����� " << first_point_name << "[y1]:  "; cin >> y1;
	cout << " ������� ��������� �������� ��� ����� " << second_point_name << "[x2]: "; cin >> x2;
	cout << " ������� �������� �������� ��� ����� " << second_point_name << "[y2]:  "; cin >> y2;

	cout << "\n�����:\n";
	cout << " ����� ������� " << first_point_name << second_point_name << " �����: " << fixed << setprecision(3) << FindSegmentLength(x1, y1, x2, y2) << '\n';
}

/* ������������� ���� ��������� ������ ��� ���������� ����� �������� */
void MyPoint::Init() {
	cout << "������ ������ ������� �� ������ �����?\n";
	const string segments[3] = { "AB", "AC", "AD" };
	for (unsigned int i = 0; i < 3; ++i) cout << ' ' << (i + 1) << ") " << segments[i] << '\n';
	unsigned short user_choice = 0;
	while (true) {
		cout << "��� �����: ";
		cin >> user_choice;
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
					const char first_point_name = 'A', second_point_name = 'B';
					cout << "������� " << first_point_name << second_point_name << ":" << '\n';
					ShowReadyTemplate(this->Ax, this->Ay, this->Bx, this->By, first_point_name, second_point_name);
					break;
				}
				else if (user_choice == 2) {
					const char first_point_name = 'A', second_point_name = 'C';
					cout << "������� " << first_point_name << second_point_name << ":" << '\n';
					ShowReadyTemplate(this->Ax, this->Ay, this->Cx, this->Cy, first_point_name, second_point_name);
					break;
				}
				else if (user_choice == 3) {
					const char first_point_name = 'A', second_point_name = 'D';
					cout << "������� " << first_point_name << second_point_name << ":" << '\n';
					ShowReadyTemplate(this->Ax, this->Ay, this->Dx, this->Dy, first_point_name, second_point_name);
					break;
				}
			}
		}
	}
}