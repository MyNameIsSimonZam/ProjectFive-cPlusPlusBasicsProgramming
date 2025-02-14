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
		std::cout << "This is not the right echelon";
	}
	else std::cout << "This is your ethelon";
}
