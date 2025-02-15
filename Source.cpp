#include <iostream>

/* Задание 1. Полёт нормальный!
Что нужно сделать
Напишите программу для аэропорта, проверяющую, правильным ли эшелоном летит самолёт.
Условие:
• скорость самолёта должна быть в диапазоне от 750 до 850 км / ч;
• высота — в диапазоне от 9 000 до 9 500 метров.   */

void pW1() {
	int airspeed;
	int altitude;
	std::cout << "The program can show you whether the plane is flying at the right echelon or not\n";
	std::cout << "Give me the airspeed: ";
	std::cin >> airspeed;
	std::cout << "Give me the altitude: ";
	std::cin >> altitude;
	if (airspeed < 750 || airspeed > 850 || altitude < 9000 || altitude > 9500) {
		std::cout << "This is not the right echelon\n";
	}
	else std::cout << "This is your ethelon\n";
}

/*Задание 2. Майские!
Напишите программу - календарь для мая.Она должна проверять
введённый номер дня и сообщать, выходной этот день или рабочий.
Условие:
• Выходными считаются все субботы и воскресенья, а также
даты с 1 по 5 и с 8 по 10 мая включительно.
• Месяц всегда начинается с понедельника.
Советы и рекомендации
• Постарайтесь не проверять каждое число отдельно.
• Некоторые условия можно объединить*/

void pW2() {
	int theDay;
	std::cout << "The program can show you whether the work day today or not\n";
	std::cout << "Give me the day: ";
	std::cin >> theDay;

	if (theDay > 31 || theDay < 1) std::cout << "This is not a day";
	else if (theDay++ % 7 == 0 || theDay % 7 == 0 || theDay <= 10) {
		std::cout << "This is a weekend\n";
	}
	else std::cout << "This is a work day\n";
}

/*Задание 3. Майские — усложнение
Что нужно сделать
В предыдущем задании вы написали программу - календарь для мая.
Теперь добавьте возможность начать месяц с любого дня недели.
Для этого нужно ввести число — номер дня недели, с которого начинается месяц.
Убедитесь, что введённое число корректно.
Советы и рекомендации
• Для начала выполните задание 2.
• Постарайтесь не проверять каждый вариант месяца отдельно.
Некоторые условия можно объединить*/

void pW3() {
	int theFirstWeekDay;
	int theDay;
	std::cout << "The program can show you whether the work day today or not\n";
	std::cout << "Give me the first day in the week: ";
	std::cin >> theFirstWeekDay;
	std::cout << "Give me the day: ";
	std::cin >> theDay;
	if (theDay > 31 || theDay < 1 || theFirstWeekDay >7 || theFirstWeekDay < 1) {
		std::cout << "Error";
	}
	else if ((theDay + 2 - theFirstWeekDay) % 7 == 0 || (theDay + 1 - theFirstWeekDay) % 7 == 0) {
		std::cout << "This is a weekend\n";
	}
	else std::cout << "This is a work day\n";
}

/*Задание 4. Банкомат — 2
Что нужно сделать
Напишите программу для банкомата.
Условие:
Однажды Вася подошёл к банкомату и захотел обналичить N рублей.
В банкомате есть купюры достоинством 100, 200, 500, 1 000, 2 000 и 5 000 рублей.
Банкомат хочет выдать Васе запрошенную сумму, обойдясь как можно меньшим числом купюр.
Напишите программу для банкомата, которая по заданному числу N :
• решает, сколько купюр каждого номинала нужно выдать(4 по 200, 1 по 1 000)
для получения суммы ровно N рублей;
• либо говорит, что выдать ровно N рублей невозможно, например если N не делится на 100.
Учтите, что банкомат не может выдать за один раз более 150 000 рублей.
При попытке запросить такую сумму должно быть выдано сообщение об ошибке.
Например, 800 рублей нужно выдать как 1 по 500, 1 по 200 и ещё 1 по 100.
Советы и рекомендации
• Используйте как деление, так и получение остатка от деления.
• Постарайтесь выдать самый оптимальный набор купюр.
• Помните, что банкомат не может выдать за один раз более 150 000 рублей*/

void pW4() {
	int sum;
	std::cout << "This program show how much many ATM can give out\n";
	std::cout << "Enter desired amount (from 100 till 150 000 and multiple of 100): ";
	std::cin >> sum;
	int fiveTh;
	int twoTh;
	int oneTh;
	int fiveH;
	int twoH;
	int oneH;

	if (sum % 100 == 0) {
		if (sum <= 150000) {
			fiveTh = sum / 5000;
			sum -= fiveTh * 5000;
			twoTh = sum / 2000;
			sum -= twoTh * 2000;
			oneTh = sum / 1000;
			sum -= oneTh * 1000;
			fiveH = sum / 500;
			sum -= fiveH * 500;
			twoH = sum / 200;
			sum -= twoH * 200;
			oneH = sum / 100;
			sum -= oneH * 100;
			std::cout << fiveTh << " of five thousand " << twoTh << " of two thousand " << oneTh << " of one thousand "
				<< fiveH << " of five hundred " << twoH << " of two hundred " << oneH << " of one hundred " << "\n";
		}
		else {
			std::cout << "Failed... It's too much (150 000 maximum)\n";
		}
	}
	else {
		std::cout << "Failed... not a multiple of a hundred\n";
	}
}

/*Задание 5. Усложнение задачи про кирпич
Что нужно сделать
Напишите программу, которая проверяет, можно ли первую коробку положить внутрь второй.
Условие:
В модуле вы разобрали, как написать программу для проверки, удастся ли поместить кирпич
определённых размеров в определённое прямоугольное отверстие.
Теперь представьте, что у вас есть две коробки. Одна размером A × B × C, а другая — M × N × K.
Напишите программу, которая по шести данным числам A, B, C, M, N, K проверяет,
можно ли первую коробку положить внутрь второй.
Коробки можно как угодно переворачивать, но одна коробка должна помещаться в другую целиком.
Советы и рекомендации
• Одна коробка в другую должна помещаться по всем трём измерениям.
• Постарайтесь сделать свою программу по возможности лаконичнее*/

void pW5() {
	int a;
	int b;
	int c;
	int m;
	int n;
	int k;
	std::cout << "Enter a side of the first box: ";
	std::cin >> a;
	std::cout << "Enter b side of the first box: ";
	std::cin >> b;
	std::cout << "Enter c side of the first box: ";
	std::cin >> c;
	std::cout << "Enter m size of the second box: ";
	std::cin >> m;
	std::cout << "Enter n size of the second box: ";
	std::cin >> n;
	std::cout << "Enter k size of the second box: ";
	std::cin >> k;
	if (a < m || a < n || a < k) {
		if (b < m || b < n || b < k) {
			if (c < m || c < n || c < k) std::cout << "It's comes in\n";
			else std::cout << "It's not comes in\n";
		}
		else std::cout << "It's not comes in\n";
	}
	else std::cout << "It's not comes in\n";
}

/*Задание 6. Грустное совершеннолетие
Что нужно сделать
Напишите программу для бармена, который не умеет считать.
Условие:
Посетитель пришёл в бар и попросил кружку пива.
Напишите программу для бармена, который не умеет считать, чтобы по
заданной дате рождения посетителя и текущей дате определить,
можно ему продавать алкоголь или нет.
Программа должна попросить ввести сегодняшнюю дату и дату рождения покупателя,
после чего ответить : «можно» или «нельзя».
Учтите, что в день восемнадцатилетия алкоголь продавать посетителю ещё нельзя,
а вот на следующий день после этого — уже можно.
Советы и рекомендации
• Программа должна работать с любым годом и не должна быть привязана к определённой дате.
• Постарайтесь сделать свою программу по возможности лаконичнее*/

void pW6() {
	int dayBirth;
	int monthBirth;
	int yearBirth;
	int dayToday;
	int monthToday;
	int yearToday;
	std::cout << "This program can calculate the age of an alcoholic\n";
	std::cout << "Give me the day of your birthday: dd ";
	std::cin >> dayBirth;
	std::cout << "Give me the month of your birthday: mm ";
	std::cin >> monthBirth;
	std::cout << "Give me the year of your birthday: yyyy ";
	std::cin >> yearBirth;
	std::cout << "What is day today: dd ";
	std::cin >> dayToday;
	std::cout << "What is day today: mm ";
	std::cin >> monthToday;
	std::cout << "What is day today: yyyy ";
	std::cin >> yearToday;
	if (yearToday - yearBirth > 18) std::cout << "It's okay\n";
	else if (monthToday - monthBirth == 18) {
		if (monthToday - monthBirth > 0)   std::cout << "It's okay\n";
		else if (monthToday - monthBirth == 0) {
			if (dayToday - dayBirth > 0)   std::cout << "It's okay\n";
			else std::cout << "Get out!\n";
		}
		else std::cout << "Get out!\n";
	}
	else std::cout << "Get out!\n";
}