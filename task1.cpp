#include <iostream>

/* Задача 1. Координатная плоскость.
Напишите программу, которая принимает на вход координаты X,
Y некоторой точки на плоскости и отвечает, в какой четверти
плоскости лежит эта точка (а если она лежит на границе двух
четвертей — то так и отвечает “на границе”). Напомним, что
четверти на плоскости нумеруются так: первая четверть — если
обе координаты положительны, вторая — если X отрицателен,
а Y положителен, третья — если обе координаты отрицательны,
четвертая — если X положителен, а Y отрицателен.
Точка лежит на границе четвертей, если хотя бы какая-то
из ее координат равна нулю.*/

void task1() {
	int x;
	int y;

	std::cout << "This program give you quorter for your coordinates\n";
	std::cout << "Enter the x coordinate: ";
	std::cin >> x;
	std::cout << "Enter the y coordinate: ";
	std::cin >> y;

	if (x > 0) {
		if (y > 0) std::cout << "Your coordinates in the first qourter\n";
		else std::cout << "Your coordinates in the fourth qourter\n";
	}
	else if (x < 0) {
		if (y > 0) std::cout << "Your coordinates in the second qourter\n";
		else std::cout << "Your coordinates in the third qourter\n";
	}
	else {
		std::cout << "Your coordinates on lays the borders\n";
	}
}

