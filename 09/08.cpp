#include <iostream>
#include "Date.hpp"
using namespace std;
using namespace ext;
	/*������� �1
	�������� �������, ������� ������� � ������� ���� ������ 10 ����������� �����.*/
	void cubesOfTenNum() {
		for (int i = 1; i <= 10; i++) {
			cout << pow(i, 3) << " ";
		}
	}
	//�������� � ���������� ������ �������� n, ����� ��� �������� ���� n ������ ������ ����������� �����.
	void cubesOfNum (int n) {
		for (int i = 1; i <= n; i++) {
			cout << pow(i, 3) << " ";
		}
	}
	/*������� �2
	�������� �������, ������� ��������� ����� ��������.
	�� ����������� ������ ���� ����� � ������, ������� �������� � ����������.*/
	int cylinderVol(int height, int radius) {
		return height * 3.14 * pow(radius, 2);
	}
	/*������� �3
	�������� ������� min(a, b), ����������� ������� ���� �����.
	����� �������� ������� min4(a, b, c, d), ����������� ������� 4 ����� � ������� ������� min.
	�������� ������ ����� ����� �� ������� � �������� �� �������.
	�������� ������				��������� ���������
	1 2 3 4						1
	4 3 2 1						1
	9 5 1 7						1
	7 3 5 9						3 */
	int min(int firstNum, int secondNum) {
		if (firstNum > secondNum) {
			return secondNum;
		}
		else {
			return firstNum;
		}
	}
	int min4(int firstNum, int secondNum, int thirdNum, int fourthNum) {
		return min(min(min(firstNum, secondNum), thirdNum), fourthNum);
	}
int main() {
	setlocale(0, "");
	/*������� �4
	�������� � ������ ���� Date.hpp
	����������� ������� ������� ��������� � ����� Date.hpp
	��� ���������� ������� ����� ������������ ���� ��������������� �������.
	������������������ ������ ���� ���������� ������� � main().*/
	cubesOfTenNum();
	cout << endl;
	int n;
	cout << "������� �����?" << endl;
	cin >> n;
	cubesOfNum(n);
	cout << endl;
	cout << cylinderVol(100, 10) << endl;
	int firstNum = 0, secondNum = 0, thirdNum = 0, fourthNum = 0;
	cout << "������� ������ �����: ";
	cin >> firstNum >> secondNum >> thirdNum >> fourthNum;
	cout << "����������: " << min4(firstNum, secondNum, thirdNum, fourthNum) <<endl;
	Date testDate = { 2012, December , 21 };
	Date testDate1 = { 2012, December , 22 };
	cout << countJND(testDate) << endl;
	cout << countDistance(testDate, testDate1) << endl;
	print(testDate1, MonthAsInt);
	print(testDate1, MonthAsString);
	cout << getSeason(testDate1) << endl;
	swap(testDate, testDate1);
	print(testDate, MonthAsInt);
	print(testDate1, MonthAsInt);
	cout << isSame(&testDate, &testDate1) << endl;
	cout << isSame(&testDate, &testDate) << endl;
	Date unpack = *max(&testDate, &testDate1);
	print(unpack, MonthAsInt);
}