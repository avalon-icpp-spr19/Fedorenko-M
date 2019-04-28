#include <iostream>
#include "Extention.hpp"
using namespace std;
int main() {
	setlocale(0, "");
	//������� �1
	//������� ��������� Point, ���������� ��� ���� x, y ���� float.
	struct Point{
		float x;
		float y;
	};
	
	//������� � ������������������� ���������� ���� Point.
	Point variable = { 1.5, 1.5 };
	//������� ���������� ���� Point � ������������������� �� ������� � ����������.
	Point variable1 = {};
	cin >> variable1.x >> variable1.y;
	//������� �� ����� �������� x, y ��������������� ����������.
	cout << "������ �����: " << variable.x << " " << variable.y << endl;
	cout << "������ �����: " << variable1.x << " " << variable1.y << endl;
	//�������� ���������, ������� ����������� ����������� �� �������� ����� ����� ��������� �������.
	cout << "������� ���������� �����" << endl;
	cin >> variable.x >> variable.y;
	cout << "������� ������ �����: " << endl;
	float radius;
	cin >> radius;
	if (sqrt(pow(variable.x,2) + pow(variable.y,2)) > radius) {
		cout << "����� �� ����������� �����" << endl;
	}
	else{
		cout << "����� ����������� �����" << endl;
	}
	/*���������� ����� � ������ ������������ ������ � ����������.
	��� �������� ��������� ����� ������������ ��������� Point.
	�������� ���������, ������� �� ���� �������� ������ - ������ ������� ������� ����� �������� �������.*/
	cout << "������� ���������� �����" << endl;
	cin >> variable.x >> variable.y;
	cout << "������� ���������� �����: " << endl;
	cin >> variable1.x >> variable1.y;
	Point mid;
	mid.x = (variable1.x + variable.x) / 2;
	mid.y = (variable1.x + variable.x) / 2;
	cout << "���������� ��������: " << mid.x << " " << mid.y << endl;
	/*���������� ����� ������������ ������ � ����������.
	��� �������� ��������� ����� ������������ ��������� Point.
	������������ ����� �������� ������� ����� ������� ��� ��������� Point.
	������� ���������� ���������� ����� � �������.
	������� �2
	������� ��������� Circle, ���������� ���� ���� ���� int - ������ � ������ ���� ���� Point - ����� ����������.*/
	struct Circle {
		int radius;
		Point middle;
	};
	//������� � ������������������� ���������� ���� Circle.
	Circle circle = { 5,10,10 };
	Circle circle1 = {};
	//������� ���������� ���� Circle � ������������������� �� ������� ���������� � ����������.
	cin >> circle1.radius >> circle1.middle.x >> circle1.middle.y;
	//������� �� ����� ������, ����������� � ��������������� ����������.
	cout << "������ ����: " << circle.radius << " " << circle.middle.x << " " << circle.middle.y << endl;
	cout << "������ ����: " << circle1.radius << " " << circle1.middle.x << " " << circle1.middle.y << endl;
	/*���� ��� ���������� ���� Circle.
	�������� ���������, ������� ���������� ������������ �� ����������,
	��������� ������� �����������.*/
	cout << "������ ����: " << endl;
	cin >> circle.radius >> circle.middle.x >> circle.middle.y;
	cout << "������ ����: " << endl;
	cin >> circle1.radius >> circle1.middle.x >> circle1.middle.y;
	int differX = abs(circle.middle.x - circle1.middle.x);
	int differY = abs(circle.middle.y - circle1.middle.y);
	if ((differX > circle.radius + circle1.radius) && (differY > circle.radius + circle1.radius)) {
		cout << "����� �� ������������" << endl;
	}
	else {
		cout << "����� ������������" << endl;
	}
	/*������� �3
	������� ������������ (enum) Color, ��� �������� 7 ������ ������.*/
	enum Color {
		Red = 1,
		Orange = 2,
		Yellow = 3,
		Green = 4,
		Blue = 5,
		DarkBlue = 6,
		Violet = 7
	};
	/*������� ��������� Triangle, ���������� ���� ���� Color
	� ������ ��� �������� ���� ��������� ���� int (����� ������).*/
	struct Triangle {
		Color colorOfElem;
		int side1;
		int side2;
		int side3;
	};
	//������� � ������������������� ���������� ���� Triangle ����������� �������.
	Triangle triangle1 = { Red,50,60,70 };
	/*������� �� ����� ������, ����������� � ��������������� ����������.
	�������� ���� Color ������� � ��������� ����. (������������ ����������� switch).*/
	switch (triangle1.colorOfElem) {
	case 1:
		cout << "Red " << triangle1.side1 << " " << triangle1.side2 << " " << triangle1.side3 << endl;
		break;
	case 2:
		cout << "Orange " << triangle1.side1 << " " << triangle1.side2 << " " << triangle1.side3 << endl;
		break;
	case 3:
		cout << "Yellow " << triangle1.side1 << " " << triangle1.side2 << " " << triangle1.side3 << endl;
		break;
	case 4:
		cout << "Green " << triangle1.side1 << " " << triangle1.side2 << " " << triangle1.side3 << endl;
		break;
	case 5:
		cout << "Blue " << triangle1.side1 << " " << triangle1.side2 << " " << triangle1.side3 << endl;
		break;
	case 6:
		cout << "Dark Blue " << triangle1.side1 << " " << triangle1.side2 << " " << triangle1.side3 << endl;
		break;
	case 7:
		cout << "Violet " << triangle1.side1 << " " << triangle1.side2 << " " << triangle1.side3 << endl;
		break;
	}
	//���������� � ������� �� ����� �������� ���������������� ������������.
	cout << "�������� " << triangle1.side1 + triangle1.side2 + triangle1.side3 << endl;
	/*������� �4
	������� ������ �� 20 ��������� ���� Point.
	������������������� ��� ������� �� ���������� ���������� ��������� � �������� �� 0 �� 100.
	�������� �� ����� ����������:
	- ����� � ���������� x �����������
	- ���� �����, ���������� ����� �������� ����������.*/
	Point Mas[20];
	Point input = {};
	int minX = 0, minLenght1 = 0, minLenght2 = 1;
	for (int i = 0; i < 20; i++) {
		input.x = ext::GetRandomValue(0, 100);
		input.y = ext::GetRandomValue(0, 100);
		Mas[i] = input;
	}
	for (int i = 0; i < 20; i++) {
		if (Mas[i].x < Mas[minX].x) {
			minX = i;
		}
		for (int j = 0; j < 20; j++) {
			if ((i != j) && ((sqrt(pow(Mas[minLenght1].x - Mas[minLenght2].x, 2) + pow(Mas[minLenght1].y - Mas[minLenght2].y, 2))) > (sqrt(pow(Mas[i].x - Mas[j].x, 2) + pow(Mas[i].y - Mas[j].y, 2))))) {
				minLenght1 = i;
				minLenght2 = j;
			}
		}
	}
	cout << "���������� ���������� x: " << minX << endl;
	cout << "���������� ���������� ����� �������: " << minLenght1 << " � " << minLenght2 << endl;
	/*������� �5
	������� ������ �� 100 ��������� ���� Triangle.
	������������������� ��� ���������� ���������� (����� ������� �� 1 �� 10).
	��� ������������� ���������, ��� ����������� � ������ ������� ������ ����� ������������.
	(����� ������ ������� ������ ���� ������ ������ ���� ����� ���� ������ ������).
	���������� ���������� ������ ������������� � ������� �� ����� ��������� ����������:
	- ������� �� ����� ��� ������������, �������� ������� ��������� ��������, ��������� � ����������.
	���� ���������� ������������� ���, ������� ��������������� ���������.
	- ���������� ������������� ������� �����

	������� �6
	�������� ���������, ������� ��������� ������������ �������� �������� ����.
	���� ������� � �������������� ���������.
	�������� ������				��������� ���������
	1 1 1992					���� ���������
	30 6 1992					���� ���������
	31 7 1992					���� ���������
	31 9 1994					���� �����������
	32 1 1992					���� �����������
	1 13 1992					���� �����������
	29 2 1993					���� �����������
	29 2 2004					���� ���������
	29 2 1900					���� �����������
	29 2 2000					���� ���������
	*/
}