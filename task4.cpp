#include <iostream>

/* Задача 1.
Решите задачи к предыдущему уроку при помощи логических операторов.*/

//void task4() {
//	int x;
//	int y;
//
//	std::cout << "This program give you quorter for your coordinates\n";
//	std::cout << "Enter the x coordinate: ";
//	std::cin >> x;
//	std::cout << "Enter the y coordinate: ";
//	std::cin >> y;
//
//	if (x > 0 && y > 0) std::cout << "Your coordinates in the first qourter\n";
//	if (x < 0 && y > 0) std::cout << "Your coordinates in the second qourter\n";
//	if (x < 0 && y < 0) std::cout << "Your coordinates in the third qourter\n";
//	if (x > 0 && y < 0) std::cout << "Your coordinates in the fourth qourter\n";
//	else std::cout << "Your coordinates on lays the borders\n";
//}

//void task4() {
//	int sum;
//	std::cout << "This program show how much many ATM can give out";
//	std::cout << "Enter desired amount (from 100 till 100 000 and multiple of 100): ";
//	std::cin >> sum;
//
//	if (sum > 0 && sum <= 100000 && sum % 100 == 0) std::cout << "Take your money " << sum << "\n";
//	else std::cout << "Failed... (from 100 till 100 000 and multiple of 100)\n";
//}

void task4() {
	int a;
	std::cout << "Enter the year and I'll count whether it is a lip year or not: ";
	std::cin >> a;
	if (a % 4 == 0) {
		if (a % 100 == 0 && a % 400 != 0) std::cout << "It's not a leap year\n";
		else std::cout << "It's a leap year\n";
	}
	else std::cout << "It's not a leap year\n";
}