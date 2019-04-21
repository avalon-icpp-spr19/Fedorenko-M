#pragma once
#include <string>
namespace ext
{
	enum Month
	{
		January = 1,
		February,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		Novemver,
		December
	};

	enum DateFormat
	{
		MonthAsInt,
		MonthAsString
	};

	enum Season
	{
		Winter,
		Spring,
		Summer,
		Autumn
	};

	struct Date
	{
		int year;
		Month month;
		int day;
	};

	/*
	Возвращает Юлианскую дату
	https://ru.wikipedia.org/wiki/%D0%AE%D0%BB%D0%B8%D0%B0%D0%BD%D1%81%D0%BA%D0%B0%D1%8F_%D0%B4%D0%B0%D1%82%D0%B0
	раздел "Вычисление номера юлианского дня (JDN) по дате григорианского календаря"
	Тестовые данные					Ожидаемый результат
	1.12.2018					2458454
	1.1.2018					2458120
	1.6.2000					2451697
	21.12.2012					2456283
	*/
	unsigned int countJND(Date date) {
		int JDN, a, y, m, day = date.day, month = date.month, year = date.year;
		a = (14 - month) / 12;
		y = year + 4800 - a;
		m = month + (12 * a) - 3;
		JDN = day + int((153 * m + 2) / 5) + int(365 * y) + int(y / 4) - int(y / 100) + int(y / 400) - 32045;
		return JDN;
	}

	/*
	Рассчитывает количество дней между двумя датами.
	При реализвации используйте CountJND
	*/
	int countDistance(Date from, Date to) {
		return countJND(to) - countJND(from);
	}

	/*
	Выводит в консоль дату в формате: dd.mm.yyyy (2.10.2001)
	Если параметр DateFormat равен MonthAsString, то вывести дату в формате: dd monthName yyyy (2 октября 2001)
	*/
	void print(Date data, DateFormat format) {
		if (format == MonthAsInt) {
			std::cout << data.day <<"." << data.month << "." << data.year << std::endl;
		}
		else {
			std::string month = "";
			switch(data.month) {
			case 1:
				month = "января";
				break;
			case 2:
				month = "февраля";
				break;
			case 3:
				month = "марта";
				break;
			case 4:
				month = "апреля";
				break;
			case 5:
				month = "мая";
				break;
			case 6:
				month = "июня";
				break;
			case 7:
				month = "июля";
				break;
			case 8:
				month = "августа";
				break;
			case 9:
				month = "сентября";
				break;
			case 10:
				month = "октября";
				break;
			case 11:
				month = "ноября";
				break;
			case 12:
				month = "декабря";
				break;
			}
			std::cout<< data.day << " " << month << " " << data.year << std::endl;
		}
	}
	/*
	Возвращает сезон (зима, весна, лето, осень) передаваемой даты
	*/
	Season getSeason(Date date) {
		switch (date.month) {
		case 1:
		case 2:
		case 12:
			return Winter;
			break;
		case 3:
		case 4:
		case 5:
			return Spring;
			break;
		case 6:
		case 7:
		case 8:
			return Summer;
			break;
		case 9:
		case 10:
		case 11:
			return Autumn;
			break;
		
		}
	}

	/*
	Меняет даты местами
	*/
	void swap(Date* lhs, Date* rhs) {
		Date* trade = nullptr;
		trade =& *lhs;
		lhs =& *rhs;
		rhs =& *trade;
	}
	/*
	Сравнивает даты на эквивалентность
	*/
	bool isSame(Date* lhs, Date * rhs) {
		return ((*lhs).day == (*rhs).day) && ((*lhs).month == (*rhs).month) && ((*lhs).year == (*rhs).year);
	}

	/*
	Возвращает указатель на большую дату
	*/
	Date* max(Date * lhs, Date * rsh) {
		if ((((*lhs).month == (*rsh).month) && ((*lhs).year == (*rsh).year) && ((*lhs).day >= (*rsh).day)) || (((*lhs).month >= (*rsh).month) && ((*lhs).year == (*rsh).year)) || ((*lhs).year >= (*rsh).year)) {
			return lhs;
		}
		else {
			return rsh;
		}

	}

	/*
	Возвращает указатель на меньшую дату
	*/
	Date * min(Date * lhs, Date * rsh);

	/*
	Возвращает указатель на минимальную дату в переданном массиве дат
	*/
	Date * getMinDate(Date dates[], int size);

	/*
	Возвращает указатель на максимальную дату в переданном массиве дат
	*/
	Date * getMaxDate(Date dates[], int size);

	/*
	Проверяет может ли существовать дата с передаваемыми значениями.
	В случае успеха возвращает true, и заполняет дату по переданному адресу.
	Если дата с переданными параметрами существовать не может,
	возвращает false.
	*/
	bool tryFillDate(Date * date, int year, int month, int day);
}
