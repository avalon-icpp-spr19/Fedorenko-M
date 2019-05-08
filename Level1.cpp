#include <iostream>
#include "Extention.hpp"
using namespace std;
using namespace ext;
int main() {
	setlocale(0, "");
	int numOfSimulations = 0, counter = 0, overallSuccsess = 0;
	bool isEqual;
	cout << "¬ведите число симул€ций: " << endl;
	cin >> numOfSimulations;
	struct Date {
		int day;
		int month;
	};
	Date arrayOfBitrh[23];
	for (int i = 0; i < numOfSimulations; i++) {
		for (int j = 0; j < 23; j++) {
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
		for (int c = 0; c < 23; c++) {
			for (int j = 0; j < 23; j++) {
				isEqual = ((arrayOfBitrh[c].month == arrayOfBitrh[j].month) && (arrayOfBitrh[c].day == arrayOfBitrh[j].day) && (j != c));
				if (isEqual) {
					counter += 1;
				}
			}
		}
		if (counter >= 1) {
			overallSuccsess += 1;
			counter = 0;
		}
	}
	cout << "¬сего симул€ций проведено: " << numOfSimulations << endl;
	cout << "—овпали хот€ бы два дн€ рождени€ в " << overallSuccsess << " симул€ци€х. ѕроцент успешных: " << (static_cast<double>(overallSuccsess) / static_cast<double>(numOfSimulations)) * 100 << "%" << endl;
}
