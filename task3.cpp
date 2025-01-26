#include <iostream>

/* *Задача 3. Високосный год (необязательная). *
Напишите программу, которая определяет количество дней в году.
Подсказка: номер года должен делиться на 4, однако
если он делится на 100, но не делится на 400, то год не високосный!*/

void task3() {
	int a;
	std::cout << "Enter the year and I'll count whether it is a lip year or not: ";
	std::cin >> a;
	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 != 0) std::cout << "It's not a leap year\n";
			else std::cout << "It's a leap year\n";
		}
		else std::cout << "It's a leap year\n";
	}
	else std::cout << "It's not a leap year\n";
}

