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

void task11() {
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

/* Задача 2. Банкомат.
Пользователи банкомата хотят снимать деньги.
Но банкомат умеет выдавать только купюры по 100 рублей,
а максимальная сумма снятия — 100 000 рублей.
Напишите программу, которая проверяет допустимость
суммы средств, введенной пользователем.*/

void task12() {
	int sum;
	std::cout << "This program show how much many ATM can give out";
	std::cout << "Enter desired amount (from 100 till 100 000 and multiple of 100): ";
	std::cin >> sum;
	if (sum <= 100000) {
		if (sum <= 0) std::cout << "Failed... 100 minimum\n";
		else if (sum % 100 != 0) std::cout << "Failed... multiple of 100\n";
		else std::cout << "Take your money " << sum << "\n";
	}
	else {
		std::cout << "Failed... It's too much (100 000 maximum)\n";
	}
}

/* *Задача 3. Високосный год (необязательная). *
Напишите программу, которая определяет количество дней в году.
Подсказка: номер года должен делиться на 4, однако
если он делится на 100, но не делится на 400, то год не високосный!*/

void task13() {
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

/* Задача 1.
Решите задачи к предыдущему уроку при помощи логических операторов.*/

void task211() {
	int x;
	int y;

	std::cout << "This program give you quorter for your coordinates\n";
	std::cout << "Enter the x coordinate: ";
	std::cin >> x;
	std::cout << "Enter the y coordinate: ";
	std::cin >> y;

	if (x > 0 && y > 0) std::cout << "Your coordinates in the first qourter\n";
	if (x < 0 && y > 0) std::cout << "Your coordinates in the second qourter\n";
	if (x < 0 && y < 0) std::cout << "Your coordinates in the third qourter\n";
	if (x > 0 && y < 0) std::cout << "Your coordinates in the fourth qourter\n";
	else std::cout << "Your coordinates on lays the borders\n";
}

void task212() {
	int sum;
	std::cout << "This program show how much many ATM can give out";
	std::cout << "Enter desired amount (from 100 till 100 000 and multiple of 100): ";
	std::cin >> sum;

	if (sum > 0 && sum <= 100000 && sum % 100 == 0) std::cout << "Take your money " << sum << "\n";
	else std::cout << "Failed... (from 100 till 100 000 and multiple of 100)\n";
}

void task213() {
	int a;
	std::cout << "Enter the year and I'll count whether it is a lip year or not: ";
	std::cin >> a;
	if (a % 4 == 0) {
		if (a % 100 == 0 && a % 400 != 0) std::cout << "It's not a leap year\n";
		else std::cout << "It's a leap year\n";
	}
	else std::cout << "It's not a leap year\n";
}

/* Задача 2.
Задача 2. Мост и перегрузка.
Через мост разрешено проезжать машинам с массой не больше 1200 килограмм.
Для контроля на каждой полосе на въезде расположены весы. Одновременно на мост въезжает 4 машины.
Напишите программу, которая получает 4 числа — массу въезжающих машин — и сообщает,
есть ли среди них хоть одна, вес которой превышает 1200 килограмм.*/

void task22() {
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

/*Задача 3. Треугольник.
У меня есть три деревянных палочки, длины этих палочек равны A, B и C.
Напишите программу, которая по данным длинам определяет, можно ли из этих трех палочек сложить треугольник. */

void task23() {
	int a;
	int b;
	int c;
	std::cout << "Enter A line: ";
	std::cin >> a;
	std::cout << "Enter B line: ";
	std::cin >> b;
	std::cout << "Enter C line: ";
	std::cin >> c;
	if (a + b <= c || b + c <= a || a + c <= b) {
		std::cout << "It's not possible to make a triangle with these lines \n";
	}
	else std::cout << "It's okay \n";
}


//Задача 4. Совпадение чисел(необязательная).
//Напишите программу, которая по трем введенным числам a, b, c определяет, 
//сколько среди них совпадающих чисел.

void task24() {
	int a;
	int b;
	int c;
	std::cout << "Enter A number: ";
	std::cin >> a;
	std::cout << "Enter B number: ";
	std::cin >> b;
	std::cout << "Enter C number: ";
	std::cin >> c;
	if (a == b && a == c) {
		std::cout << "All three numbers are equal \n";
	}
	else if (a == b || a == c) {
		std::cout << "Only two numbers are equal \n";
	}
	else std::cout << "Not equal";
}

/*Задача 1. Военкомат.
Для отбора летчиков устанавливаются жесткие критерии.
Напишите программу, проверяющую, подходит ли призывник.
Его рост должен быть не меньше 145см и не больше 165см,
вес не меньше 45кг и не больше 65кг, а количество рук и
ног должно обязательно совпадать(мы не знаем, зачем, но так требует инструкция).
При этом берут любого человека, налетавшего на самолетах больше 100 часов.
Дополнительно.
А еще зеленоглазых в летчики тоже не берут, поэтому проверьте и цвет их глаз.
Подсказка: для цвета глаз используйте строковый тип данных.Проверять строки на равенство можно так :
if (eyeColor == “серо - буро - малиновый”) { … }*/

void task31() {
	int height;
	int weight;
	int handCount;
	int legCount;
	std::string eyeColor;
	int flyHours;
	std::cout << "Enter your flying hours: ";
	std::cin >> flyHours;
	if (flyHours > 100)	std::cout << "Congrats, everything allright\n";
	else {
		std::cout << "Enter your eyeColor: ";
		std::cin >> eyeColor;
		if (eyeColor == "green" || eyeColor == "Green") {
			std::cout << "You are not suitable for us, get out \n";
		}
		else {
			std::cout << "Entera a height of Pilot: ";
			std::cin >> height;
			std::cout << "Enter a weight of Pilot: ";
			std::cin >> weight;
			std::cout << "Enter count Pilot's hands: ";
			std::cin >> handCount;
			std::cout << "Enter count Pilot's legs: ";
			std::cin >> legCount;
			if (height >= 165 || height <= 145 || weight >= 65 || weight <= 45 || handCount != legCount) {
				std::cout << "You are not suitable for us. \n";
			}
			else std::cout << "Congrats, everything allright\n";
		}
	}
}

/*Задача 2. — Входит... И выходит... И входит... Замечательно выходит!"Винни-Пух и день забот".
У Винни - Пуха есть кирпич размера A на B на C.А еще есть стена,
в которой проделано прямоугольное отверстие размера X на Y.
Прежде чем подарить все это ослику Иа, Винни - Пух хочет знать,
получится ли просунуть этот кирпич в это отверстие ? Напишите программу,
которая по данным пяти числам отвечает на этот вопрос. Разумеется,
кирпич можно поворачивать.*/

void task32() {
	int a;
	int b;
	int c;
	int x;
	int y;
	std::cout << "Enter a side: ";
	std::cin >> a;
	std::cout << "Enter b side: ";
	std::cin >> b;
	std::cout << "Enter c side: ";
	std::cin >> c;
	std::cout << "Enter x hole size: ";
	std::cin >> x;
	std::cout << "Enter y hole size: ";
	std::cin >> y;
	if (x == a || x == b || x == c) {
		if (y == a || y == b || y == c)	std::cout << "It's comes in and goes out";
		else std::cout << "It's not comes in and goes out";
	}
	if (y == a || y == b || y == c) {
		if (x == a || x == b || x == c)	std::cout << "It's comes in and goes out";
		else std::cout << "It's not comes in and goes out";
	}
	else std::cout << "It's not comes in and goes out";
}