#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	setlocale(0, "");
	/* ������� 1
	���� ��� ����������� ����� A, B, C. ����������, ���������� �� ����������� � ������ ���������.
	���� ����������� ����������, �������� ������ ��, ����� �������� ������ ���.
	����������� � ��� ��� �����, �� ������� �� ����� ������.
	�������� ������				��������� ���������
	1 1 1						��
	1 2 4						���
	12 7 5						���
	7 10 3						���
	4 5 8						��
	*/

	/*int A, B, C;
	cout << "������� �����:" << endl;
	cin >> A >> B >> C;
	if ((A < B + C) && (B < A + C) && (C < B + A)) {
		cout << "��" << endl;
	}
	else {
		cout << "���" << endl;
	}*/
	
	/* ������� 2
	�������� ���, ��������� ���������� ��������������� ������� ��������� �� ��������� ������������.
	��������, ��� 10, ������� ���������� �������, ��� 1 � �������, ��� 2 � �������.
	������������ ����������� switch.
	�������� ������			��������� ���������
	1					�����
	2					�����
	10					������
	101					�����
	1255					������
	*/

	/*int userNum;
	cout << "�� �����, ����� ���� �����: " << endl;
	cin >> userNum;
	userNum %= 10;
	switch (userNum) {
	case 1:
		cout << "�����" << endl;
		break;
	case 2:
	case 3:
	case 4:
		cout << "�����" << endl;
		break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 0:
		cout << "������" << endl;
		break;
	}*/

	/* ������� 3
	� ����������� ���� ����� � ������ ������������� � ������ ��� ����� ��� ���������� ������ �������:
	// �������� ������, �������� � ����������.
	// true ��� 1, false ��� 0
	bool enemyInFront;
	bool isBoss;
	int robotHealth;

	// ��� ����
	bool shouldFire = true;
	if (enemyInFront == true)
	{
	if (isBoss == true)
	{
	if (robotHealth < 50) shouldFire = false;
	if (robotHealth > 100) shouldFire = true;
	}
	}
	else
	{
	shouldFire = false;
	}

	if(shouldFire)
	{
	cout << "Fire" << endl;
	}
	��������� ��� ����, ������ ���������� �������� ���������.
	�������� ������		��������� ���������
	false false 10
	false true 60
	true false 10			Fire
	true true 10
	true true 60			Fire
	*/

	/*bool enemyInFront;
	bool isBoss;
	int robotHealth;
	cout << "������� ���������? " << endl;
	cin >> enemyInFront;
	cout << "��� ����? " << endl;
	cin >> isBoss;
	cout << "��� �� ��������? " << endl;
	cin >> robotHealth;
	if ((enemyInFront && isBoss && robotHealth > 50) || (enemyInFront && !isBoss)) {
		cout << "Fire"<<endl;
	}*/

	/* ������� 4
	�� � ����� � ����� ������ ������� ����� ������ ���������� ������� � ���������.
	��� ����� ������ ���������� ������ �� ��� ������ �� ����������� �����.
	�����������, ��� �� ����� ������ � ���, ��� �� ���� ������ �������� ���� ���������.
	�� ����������, ��� ������ �� ��� ������ ������� ������ ����������� ������ ������.
	������� ���� ������ � �������� ��������� ������ ����� �� ������� ��������������, � �������, �� ���� ������ �������� ������������ � ����������� ������.
	���� ����� ������ ��� ������ ������� ������ �� ����, �� ��������� � if - ��, � ������� ����������� ��� ������ ���.
	���������� �� ������ ������ ������, �� � �������������� ���������� �������� � ����������� ��������� ������� ��������.
	�������� ������		��������� ���������
	1 2 3				2
	5 5 5				5
	2 2 9				2
	1 5 5				5
	4 5 6				5
	*/
	
	/*int markOne, markTwo, markThree;
	cout << "������� ������ �����: " << endl;
	cin >> markOne >> markTwo >> markThree;
	if (markOne > markTwo){
		if (markOne > markThree) {
			if (markThree > markTwo){
				cout << markTwo;
			}
			else {
				cout << markThree;
			}
		}
		else {
			cout << markOne;
		}
	}
	else {
		if (markOne > markThree){
			cout << markOne;
		}
		else {
			if (markThree > markTwo) {
				cout << markTwo;
			}
			else {
				cout << markThree;
			}
		}
	}*/

	/* ������� 5
	�������� ������, ������� ��������� ����������� ������������� ���� �� ��������� ������������� ������.
	������������ ������ ������ � ������� ����, �����, ���.

	�������� ������				��������� ���������
	1 1 1992					true
	30 6 1992					true
	31 7 1992					true
	31 9 1994					false
	32 1 1992					false
	1 13 1992					false
	29 2 1993					false
	29 2 2004					true
	29 2 1900					false
	29 2 2000					true
	*/

	/*int day, month, year;
	bool isVisokosniy;
	cout << "������� ����: ";
	cin >> day >> month >> year;
	isVisokosniy = ((year % 4 == 0) && (year & 100 != 0)) || (year % 400 == 0);
	if ((month > 12) || (month < 1)) {
		cout << "false";
	}
	else{
		switch (month) {
		case 4:
		case 6:
		case 9:
		case 11:
			if (day > 30) {
			cout << "false";
			}
			else {
			cout << "true";
			}
			break;
		case 2:
			if ((isVisokosniy && day <= 29)||(day<=28)) {
				cout << "true";
			}
			else {
				cout << "false";
			}
			break;
		default:
			if (day > 31) {
				cout << "false";
			}
			else {
				cout << "true";
			}
			break;
		}
	}*/

	/* ������� 6
	��������� ����� ����� �� ���������, ����������� ��� ���������.
	���� ��� ��������� ������ ��������� �����, �������� ������, ������� ����������
	����� �� ����� ������� � ������ ������ �� ������ ����� �����.
	������ ���������� � 1. ������������ ������ ���������� ��������� � �������� ������ � ������� x1x2.
	x1 - ����� ������ �� �����������, x2 - ����� ������ �� ���������

	�������� ������				��������� ���������
	54 14						true
	11 88						true
	36 61						false
	18 71						false
	23 67						true
	*/
}
