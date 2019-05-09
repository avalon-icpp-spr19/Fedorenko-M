#include <iostream>
#include "Extention.hpp"
using namespace std;
using namespace ext;
int main() {
	setlocale(0, "");
	int numOfSimulations = 0, counter = 0, overallSuccsess = 0, percentage = 0, numberOfMembers = 1;
	double totalPercentage = 0;
	bool isEqual, isBigger;
	cout << "Введите желаемый процент: " << endl;
	cin >> percentage;
	cout << "Введите число симуляций для каждой группы: " << endl;
	cin >> numOfSimulations;
	struct Date {
		int day;
		int month;
	};
	while (percentage >= totalPercentage) {
		Date* arrayOfBitrh = new Date[numberOfMembers];
		for (int i = 0; i < numOfSimulations; i++) {
			for (int j = 0; j < numberOfMembers; j++) {
				arrayOfBitrh[j].month = GetRandomValue(1, 12);
				switch (arrayOfBitrh[j].month) {
				case 4:
				case 6:
				case 9:
				case 11:
					arrayOfBitrh[j].day = GetRandomValue(1, 30);
					break;
				case 2:
					arrayOfBitrh[j].day = GetRandomValue(1, 28);
					break;
				default:
					arrayOfBitrh[j].day = GetRandomValue(1, 31);
					break;
				}
			}
			for (int c = 0; c < numberOfMembers; c++) {
				for (int j = 0; j < numberOfMembers; j++) {
					isEqual = ((arrayOfBitrh[c].month == arrayOfBitrh[j].month) && (arrayOfBitrh[c].day == arrayOfBitrh[j].day) && (j != c));
					if (isEqual) {
						overallSuccsess += 1;
						break;
					}
				}
				if (isEqual) {
					break;
				}
			}
		}
		totalPercentage = (static_cast<double>(overallSuccsess) / static_cast<double>(numOfSimulations)) * 100;
		if (totalPercentage > percentage) {
			cout << "Данная вероятность достигается в группе размером в " << numberOfMembers << " человек, причем процент совпадение равен " << totalPercentage << "%" << endl;
		}
		else {
			cout << "При числе человек в группе равном " << numberOfMembers << " процент совпадение равен " << totalPercentage << "%" << endl;
		}
		overallSuccsess = 0;
		numberOfMembers += 1;
		delete[] arrayOfBitrh;
	}
}