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
	else if (theDay % 6 == 0 || theDay % 7 == 0 || theDay <= 10) {
		std::cout << "This is a weekend\n";
	}
	else std::cout << "This is a work day\n";
}

/*Задание 3. Майские — усложнение
Что нужно сделать
В предыдущем задании вы написали программу - календарь для мая.Теперь добавьте возможность начать месяц с любого дня недели.
Для этого нужно ввести число — номер дня недели, с которого начинается месяц.Убедитесь, что введённое число корректно.

Советы и рекомендации
• Для начала выполните задание 2.
• Постарайтесь не проверять каждый вариант месяца отдельно.Некоторые условия можно объединить*/

void pW3() {
	int theDay;
	std::cout << "The program can show you whether the work day today or not\n";
	std::cout << "Give me the day: ";
	std::cin >> theDay;

	if (theDay > 31 || theDay < 1) std::cout << "This is not a day";
	else if (theDay % 6 == 0 || theDay % 7 == 0 || theDay <= 10) {
		std::cout << "This is a weekend\n";
	}
	else std::cout << "This is a work day\n";
}