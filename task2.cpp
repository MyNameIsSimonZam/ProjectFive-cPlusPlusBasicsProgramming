#include <iostream>

/* Задача 2. Банкомат.
Пользователи банкомата хотят снимать деньги. 
Но банкомат умеет выдавать только купюры по 100 рублей, 
а максимальная сумма снятия — 100 000 рублей.
Напишите программу, которая проверяет допустимость 
суммы средств, введенной пользователем.*/

void task2() {
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

