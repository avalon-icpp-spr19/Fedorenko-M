#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;
/* TODO
Èñïîëüçóÿ çàãîëîâî÷íûé ôàéë <limits>, std::cout, sizeof() è óïðàâëÿþùèå ïîñëåäîâàòåëüíîñòè
cîñòàâüòå ñëåäóþùóþ òàáëèöó
Òèï ïåðåìåííîé		|    Ðàçìåð,	|	    Çíà÷åíèå	 	 |  Êîëè÷åñòâî
|     áàéò	|  Ìèíèìàëüíîå	|  Ìàêñèìàëüíîå  | çíà÷èìûõ áèò
-------------------------------------------------------------------------------------------
bool			|	1	|     false	|      true      |	1
unsigned short		|	2	|	0	|      65535	 |	16
short
unsigned int
int
unsigned long
long
unsigned long long
long long
char
float
double
äëÿ ñïðàâêè èñïîëüçîâàòü http://www.cplusplus.com/reference/limits/numeric_limits/
*/
int main()
{
	setlocale(0, ""); // âêëþ÷åíèå àäåêâàòíîãî îòîáðàæåíèÿ êèðèëëèöû â êîíñîëü
	std::cout << std::boolalpha; // íàñòðîéêà êîíñîëè, âûâîä áóëåâûõ òèïîâ êàê true / false
	sizeof(int); // âîçâðàùàåò áàéòîâûé ðàçìåð ïåðåìåííîé òèïà int
	std::numeric_limits<int>::max(); // âîçâðàùàåò ìàêñèìàëüíîå çíà÷åíèå êîòîðîå ìîæåò õðàíèòü ïåðåìåííàÿ òèïà int
	std::numeric_limits<int>::min(); // âîçâðàùàåò ìèíèìàëüíîå çíà÷åíèå êîòîðîå ìîæåò õðàíèòü ïåðåìåííàÿ òèïà int
	std::numeric_limits<int>::digits; // âîçâðàùàåò êîëè÷åñòâî çíà÷èìûõ áèò ïåðåìåííîé òèïà int
	cout << internal;
	cout << setw(18) << "Òèï ïåðåìåííîé" << setw(3) << "|" << setw(10) << "Ðàçìåð," << setw(3) << "|" << setw(20) << "Çíà÷åíèå" << setw(12) << "|" << setw(11) << "Êîëè÷åñòâî" << endl;
	cout << setw(18) << "" << setw(3) << "|" << setw(8) << "áàéò" << setw(5) << "|" << setw(13) << "Ìèíèìàëüíîå" << setw(3) << "|" << setw(13) << "Ìàêñèìàëüíîå" << setw(3) << "|" << setw(7) << "çíà÷èìûõ áàéò" << endl;
	cout << endl;
	cout << setw(18) << "bool" << setw(3) << "|" << setw(3) << sizeof(bool) << setw(3) << "|" << setw(20) << numeric_limits<bool>::min() << setw(3) << "|" << setw(20) << std::numeric_limits<bool>::max() << setw(2) << "|" << setw(4) << numeric_limits<bool>::digits << endl;
	cout << setw(18) << "unsigned short" << setw(3) << "|" << setw(3) << sizeof(unsigned short) << setw(3) << "|" << setw(20) << numeric_limits<unsigned short>::min() << setw(3) << "|" << setw(20) << std::numeric_limits<unsigned short>::max() << setw(2) << "|" << setw(4) << numeric_limits<unsigned short>::digits << endl;
	cout << setw(18) << "short" << setw(3) << "|" << setw(3) << sizeof(short) << setw(3) << "|" << setw(20) << numeric_limits<short>::min() << setw(3) << "|" << setw(20) << std::numeric_limits<short>::max() << setw(2) << "|" << setw(4) << numeric_limits<short>::digits << endl;
	cout << setw(18) << "unsigned int" << setw(3) << "|" << setw(3) << sizeof(unsigned int) << setw(3) << "|" << setw(20) << numeric_limits<unsigned int>::min() << setw(3) << "|" << setw(20) << std::numeric_limits<unsigned int>::max() << setw(2) << "|" << setw(4) << numeric_limits<unsigned int>::digits << endl;
	cout << setw(18) << "int" << setw(3) << "|" << setw(3) << sizeof(int) << setw(3) << "|" << setw(20) << numeric_limits<int>::min() << setw(3) << "|" << setw(20) << std::numeric_limits<int>::max() << setw(2) << "|" << setw(4) << numeric_limits<int>::digits << endl;
	cout << setw(18) << "unsigned long" << setw(3) << "|" << setw(3) << sizeof(unsigned long) << setw(3) << "|" << setw(20) << numeric_limits<unsigned long>::min() << setw(3) << "|" << setw(20) << std::numeric_limits<unsigned long>::max() << setw(2) << "|" << setw(4) << numeric_limits<unsigned long>::digits << endl;
	cout << setw(18) << "long" << setw(3) << "|" << setw(3) << sizeof(long) << setw(3) << "|" << setw(20) << numeric_limits<long>::min() << setw(3) << "|" << setw(20) << std::numeric_limits<long>::max() << setw(2) << "|" << setw(4) << numeric_limits<long>::digits << endl;
	cout << setw(18) << "unsigned long long" << setw(3) << "|" << setw(3) << sizeof(unsigned long long) << setw(3) << "|" << setw(20) << numeric_limits<unsigned long long>::min() << setw(3) << "|" << setw(14) << std::numeric_limits<unsigned long long>::max() << setw(2) << "|" << setw(4) << numeric_limits<unsigned long long>::digits << endl;
	cout << setw(18) << "long long" << setw(3) << "|" << setw(3) << sizeof(long long) << setw(3) << "|" << setw(20) << numeric_limits<long long>::min() << setw(3) << "|" << setw(20) << std::numeric_limits<long long>::max() << setw(2) << "|" << setw(4) << numeric_limits<long long>::digits << endl;
	cout << setw(18) << "char" << setw(3) << "|" << setw(3) << sizeof(char) << setw(3) << "|" << setw(20) << numeric_limits<char>::min() << setw(3) << "|" << setw(20) << std::numeric_limits<char>::max() << setw(2) << "|" << setw(4) << numeric_limits<char>::digits << endl;
	cout << setw(18) << "float" << setw(3) << "|" << setw(3) << sizeof(float) << setw(3) << "|" << setw(20) << numeric_limits<float>::min() << setw(3) << "|" << setw(20) << std::numeric_limits<float>::max() << setw(2) << "|" << setw(4) << numeric_limits<float>::digits << endl;
	cout << setw(18) << "double" << setw(3) << "|" << setw(3) << sizeof(double) << setw(3) << "|" << setw(20) << numeric_limits<double>::min() << setw(3) << "|" << setw(20) << std::numeric_limits<double>::max() << setw(2) << "|" << setw(4) << numeric_limits<double>::digits << endl;
	}
