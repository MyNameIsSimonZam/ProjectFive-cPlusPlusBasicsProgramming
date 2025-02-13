#include <iostream>

/* Задача 2.
Задача 2. Мост и перегрузка.
Через мост разрешено проезжать машинам с массой не больше 1200 килограмм.
Для контроля на каждой полосе на въезде расположены весы. Одновременно на мост въезжает 4 машины.
Напишите программу, которая получает 4 числа — массу въезжающих машин — и сообщает,
есть ли среди них хоть одна, вес которой превышает 1200 килограмм.*/

void practicalWork2() {
	int firstVehicle;
	int secondVehicle;
	int thirdVehicle;
	int fourthVehicle;
	std::cout << "Enter the first vehicle mass: ";
	std::cin >> firstVehicle;
	std::cout << "Enter the second vehicle mass: ";
	std::cin >> secondVehicle;
	std::cout << "Enter the third vehicle mass: ";
	std::cin >> thirdVehicle;
	std::cout << "Enter the fourth vehicle mass: ";
	std::cin >> fourthVehicle;
	if (firstVehicle >= 1200 || secondVehicle >= 1200 || thirdVehicle >= 1200 || fourthVehicle >= 1200) {
		std::cout << "Vehicle mass is more 1200\n";
	}
	else std::cout << "Everything is okay\n";
}