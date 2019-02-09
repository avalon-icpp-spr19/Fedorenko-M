#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;
/* TODO
Используя заголовочный файл <limits>, std::cout, sizeof() и управляющие последовательности
cоставьте следующую таблицу
Тип переменной		|    Размер,	|	    Значение	 	 |  Количество
|     байт	|  Минимальное	|  Максимальное  | значимых бит
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
для справки использовать http://www.cplusplus.com/reference/limits/numeric_limits/
*/
int main()
{
	setlocale(0, ""); // включение адекватного отображения кириллицы в консоль
	std::cout << std::boolalpha; // настройка консоли, вывод булевых типов как true / false
	sizeof(int); // возвращает байтовый размер переменной типа int
	std::numeric_limits<int>::max(); // возвращает максимальное значение которое может хранить переменная типа int
	std::numeric_limits<int>::min(); // возвращает минимальное значение которое может хранить переменная типа int
	std::numeric_limits<int>::digits; // возвращает количество значимых бит переменной типа int
	cout << internal;
	cout << setw(18) << "Тип переменной" << setw(3) << "|" << setw(10) << "Размер," << setw(3) << "|" << setw(20) << "Значение" << setw(12) << "|" << setw(11) << "Количество" << endl;
	cout << setw(18) << "" << setw(3) << "|" << setw(8) << "байт" << setw(5) << "|" << setw(13) << "Минимальное" << setw(3) << "|" << setw(13) << "Максимальное" << setw(3) << "|" << setw(7) << "значимых байт" << endl;
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