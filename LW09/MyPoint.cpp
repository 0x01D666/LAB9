#include "MyPoint.h"

/* Нахождение длины отрезка */
double MyPoint::FindSegmentLength(double x1, double y1, double x2, double y2) {
	return abs(sqrt(pow((x1 - y1), 2) + pow((x2 - y2), 2)));
}

/* Готовый шаблон заполнения данных о координатах отрезков */
void MyPoint::ShowReadyTemplate(double x1, double y1, double x2, double y2, const char first_point_name, const char second_point_name) {
	cout << " Задайте начальное значение для точки " << first_point_name << "[x1]: "; cin >> x1;
	cout << " Задайте конечное значение для точки " << first_point_name << "[y1]:  "; cin >> y1;
	cout << " Задайте начальное значение для точки " << second_point_name << "[x2]: "; cin >> x2;
	cout << " Задайте конечное значение для точки " << second_point_name << "[y2]:  "; cin >> y2;

	cout << "\nОтвет:\n";
	cout << " Длина отрезка " << first_point_name << second_point_name << " ровна: " << fixed << setprecision(3) << FindSegmentLength(x1, y1, x2, y2) << '\n';
}

/* Инициализация всех требуемых данных для нахождения длины отрезков */
void MyPoint::Init() {
	cout << "Длинну какого отрезка вы хотите найти?\n";
	const string segments[3] = { "AB", "AC", "AD" };
	for (unsigned int i = 0; i < 3; ++i) cout << ' ' << (i + 1) << ") " << segments[i] << '\n';
	unsigned short user_choice = 0;
	while (true) {
		cout << "Мой выбор: ";
		cin >> user_choice;
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
					const char first_point_name = 'A', second_point_name = 'B';
					cout << "Отрезок " << first_point_name << second_point_name << ":" << '\n';
					ShowReadyTemplate(this->Ax, this->Ay, this->Bx, this->By, first_point_name, second_point_name);
					break;
				}
				else if (user_choice == 2) {
					const char first_point_name = 'A', second_point_name = 'C';
					cout << "Отрезок " << first_point_name << second_point_name << ":" << '\n';
					ShowReadyTemplate(this->Ax, this->Ay, this->Cx, this->Cy, first_point_name, second_point_name);
					break;
				}
				else if (user_choice == 3) {
					const char first_point_name = 'A', second_point_name = 'D';
					cout << "Отрезок " << first_point_name << second_point_name << ":" << '\n';
					ShowReadyTemplate(this->Ax, this->Ay, this->Dx, this->Dy, first_point_name, second_point_name);
					break;
				}
			}
		}
	}
}