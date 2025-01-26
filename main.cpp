#include <iostream>

void task1();
void task2();
void task3();
void task4();
//void practicalWork1();
//void practicalWork2();
//void practicalWork3();
//void practicalWork4();
//void practicalWork5();
//void practicalWork6();
//void practicalWork7();
//void practicalWork8();
//void practicalWork9();


int main() {
	int choice;
	std::cout << "Choose a task to run:\n";
	std::cout << "1. Задача 1. Координатная плоскость.\n";
	std::cout << "2. Задача 2. Банкомат.\n";
	std::cout << "3. Задача 3. Високосный год (необязательная).\n";
	std::cout << "4. Задача 1. Логические операторы и сложные условия.\n";
	std::cout << "5. Задача 2. Мост и перегрузка.\n";
	std::cout << "6. Задача 3. Треугольник.\n";
	std::cout << "7. Задача 4. Совпадение чисел(необязательная).\n";
	std::cout << "8. Задача 1. Военкомат.\n";
	std::cout << "9. Задача 2. — Входит... И выходит\n";
	std::cout << "10. Задача 3. Пора обедать (необязательная).\n";
	std::cout << "Or choose the number of the practical work to run:\n";
	std::cout << "5. practical work 1\n";
	std::cout << "6. practical work 2\n";
	std::cout << "7. practical work 3\n";
	std::cout << "8. practical work 4\n";
	std::cout << "9. practical work 5\n";
	std::cout << "10. practical work 6\n";
	std::cout << "11. practical work 7\n";
	std::cout << "12. practical work 8\n";
	std::cout << "13. practical work 9\n";
	std::cout << "Enter your choice: ";
	std::cin >> choice;

	switch (choice) {
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	case 3:
		task3();
		break;
	case 4:
		task4();
		break;
	//case 5:
	//	practicalWork1();
	//	break;
	//case 6:
	//	practicalWork2();
	//	break;
	//case 7:
	//	practicalWork3();
	//	break;
	//case 8:
	//	practicalWork4();
	//	break;
	//case 9:
	//	practicalWork5();
	//	break;
	//case 10:
	//	practicalWork6();
	//	break;
	//case 11:
	//	practicalWork7();
	//	break;
	//case 12:
	//	practicalWork8();
	//	break;
	//case 13:
	//	practicalWork9();
	//	break;
	default:
		std::cout << "Invalid choice. Exiting...\n";
	}
	return 0;
}