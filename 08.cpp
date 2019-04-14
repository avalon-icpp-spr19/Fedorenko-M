#include <iostream>
#include "Extention.hpp"
using namespace std;
int main() {
	setlocale(0, "");
	//Задание №1
	//Создать структуру Point, содержащую два поля x, y типа float.
	struct Point{
		float x;
		float y;
	};
	
	//Создать и проинициализировать переменную типа Point.
	Point variable = { 1.5, 1.5 };
	//Создать переменную типа Point и проинициализировать ее данными с клавиатуры.
	Point variable1 = {};
	cin >> variable1.x >> variable1.y;
	//Вывести на экран значения x, y вышеобъявленных переменных.
	cout << "Первая точка: " << variable.x << " " << variable.y << endl;
	cout << "Вторая точка: " << variable1.x << " " << variable1.y << endl;
	//Написать программу, которая определеяет принадлежит ли заданная точка кругу заданного радиуса.
	cout << "Введите координаты точки" << endl;
	cin >> variable.x >> variable.y;
	cout << "Введите радиус круга: " << endl;
	float radius;
	cin >> radius;
	if (sqrt(pow(variable.x,2) + pow(variable.y,2)) > radius) {
		cout << "Точка не принадлежит кругу" << endl;
	}
	else{
		cout << "Точка принадлежит кругу" << endl;
	}
	/*Координаты точки и радиус пользователь вводит с клавиатуры.
	Для хранения координат точки использовать структуру Point.
	Написать программу, которая по двум заданным точкам - концам отрезка находит точку середины отрезка.*/
	cout << "Введите координаты точки" << endl;
	cin >> variable.x >> variable.y;
	cout << "Введите координаты точки: " << endl;
	cin >> variable1.x >> variable1.y;
	Point mid;
	mid.x = (variable1.x + variable.x) / 2;
	mid.y = (variable1.x + variable.x) / 2;
	cout << "Координаты середины: " << mid.x << " " << mid.y << endl;
	/*Координаты точек пользователь вводит с клавиатуры.
	Для хранения координат точек использовать структуру Point.
	Рассчитанную точку середины отрезка также хранить как структуру Point.
	Вывести координаты полученной точки в консоль.
	Задание №2
	Создать структуру Circle, содержащую одно поле типа int - радиус и второе поле типа Point - центр окружности.*/
	struct Circle {
		int radius;
		Point middle;
	};
	//Создать и проинициализировать переменную типа Circle.
	Circle circle = { 5,10,10 };
	Circle circle1 = {};
	//Создать переменную типа Circle и проинициализировать ее данными введенными с клавиатуры.
	cin >> circle1.radius >> circle1.middle.x >> circle1.middle.y;
	//Вывести на экран данные, сохраненные в вышеобъявленных переменных.
	cout << "Первый круг: " << circle.radius << " " << circle.middle.x << " " << circle.middle.y << endl;
	cout << "Второй круг: " << circle1.radius << " " << circle1.middle.x << " " << circle1.middle.y << endl;
	/*Даны две переменные типа Circle.
	Написать программу, которая определяет пересекаются ли окружности,
	описанные данными переменными.*/
	cout << "Первый круг: " << endl;
	cin >> circle.radius >> circle.middle.x >> circle.middle.y;
	cout << "Второй круг: " << endl;
	cin >> circle1.radius >> circle1.middle.x >> circle1.middle.y;
	int differX = abs(circle.middle.x - circle1.middle.x);
	int differY = abs(circle.middle.y - circle1.middle.y);
	if ((differX > circle.radius + circle1.radius) && (differY > circle.radius + circle1.radius)) {
		cout << "Круги не пересекаются" << endl;
	}
	else {
		cout << "Круги пересекаются" << endl;
	}
	/*Задание №3
	Создать перечисление (enum) Color, для хранения 7 цветов радуги.*/
	enum Color {
		Red = 1,
		Orange = 2,
		Yellow = 3,
		Green = 4,
		Blue = 5,
		DarkBlue = 6,
		Violet = 7
	};
	/*Создать структуру Triangle, содержащее поле типа Color
	и массив для хранения трех элементов типа int (длины сторон).*/
	struct Triangle {
		Color colorOfElem;
		int side1;
		int side2;
		int side3;
	};
	//Создать и проинициализировать переменную типа Triangle корректными данными.
	Triangle triangle1 = { Red,50,60,70 };
	/*Вывести на экран данные, сохраненные в вышеобъявленной переменной.
	Значение поля Color вывести в текстовом виде. (использовать конструкцию switch).*/
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
	//Рассчитать и вывести на экран периметр вышеобъявленного треугольника.
	cout << "Периметр " << triangle1.side1 + triangle1.side2 + triangle1.side3 << endl;
	/*Задание №4
	Создать массив из 20 элеметнов типа Point.
	Проинициализировать его точками со случайными значениями координат в пределах от 0 до 100.
	Выведите на экран координаты:
	- точки с наименьшей x координатой
	- двух точек, расстояние между которыми минимально.*/
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
	cout << "Наименьшая координата x: " << minX << endl;
	cout << "Наименьшее расстояние мужду точками: " << minLenght1 << " и " << minLenght2 << endl;
	/*Задание №5
	Создать массив из 100 элементов типа Triangle.
	Проинициализировать его случайными значениями (длина стороны от 1 до 10).
	При инициализации проверять, что треугольник с такими длинами сторон может существовать.
	(Длина каждой стороны должна быть строго меньше длин суммы двух других сторон).
	Обработать полученный массив треугольников и вывести на экран следующую информацию:
	- вывести на экран все треугольники, периметр которых превышает значение, введенное с клавиатуры.
	Если подходящих треугольников нет, вывести соответствующее сообщение.
	- количество треугольников каждого цвета

	Задание №6
	Написать программу, которая проверяет правильность заданных значений даты.
	Дату хранить с использованием структуры.
	Тестовые данные				Ожидаемый результат
	1 1 1992					Дата корректна
	30 6 1992					Дата корректна
	31 7 1992					Дата коррентна
	31 9 1994					Дата некорректна
	32 1 1992					Дана некорректна
	1 13 1992					Дата некорректна
	29 2 1993					Дата некорректна
	29 2 2004					Дата корректна
	29 2 1900					Дата некоррентна
	29 2 2000					Дата корректна
	*/
}