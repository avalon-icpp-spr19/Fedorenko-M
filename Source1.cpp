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
	cout << "Тип переменной"<< setw(3) << "|" << setw(10) << "Размер,"<<setw(3)<<"|"<< setw(10)<<"Значение" <<setw(3)<<"|"<<setw(13)<<"Количество"<< endl;
	//Тип переменной | Размер, |          Значение          | Количество
	//			   | байт    | Минимальное | Максимальное | значимых бит
}