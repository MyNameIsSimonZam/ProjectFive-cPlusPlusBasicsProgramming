#include <iostream>

void task11();
void task12();
void task13();
void task211();
void task212();
void task213();
void task22();
void task23();
void task24();
void task31();
void task32();


int main() {
	int choice;
	std::cout << "Choose a task to run:\n";
	std::cout << "1. Задача 1. Координатная плоскость.\n";
	std::cout << "2. Задача 2. Банкомат.\n";
	std::cout << "3. Задача 3. Високосный год (необязательная).\n";
	std::cout << "4. Задача 1. Координатная плоскость. Логические операторы и сложные условия.\n";
	std::cout << "5. Задача 1. Банкомат. Логические операторы и сложные условия.\n";
	std::cout << "6. Задача 1. Високосный год (необязательная). Логические операторы и сложные условия.\n";
	std::cout << "7. Задача 2. Мост и перегрузка.\n";
	std::cout << "8. Задача 3. Треугольник.\n";
	std::cout << "9. Задача 4. Совпадение чисел(необязательная).\n";
	std::cout << "10. Задача 1. Военкомат.\n";
	std::cout << "11. Задача 2. — Входит... И выходит\n";
	std::cout << "12. Задача 3. Пора обедать (необязательная).\n";
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
		task11();
		break;
	case 2:
		task12();
		break;
	case 3:
		task13();
		break;
	case 4:
		task211();
		break;
	case 5:
		task212();
		break;
	case 6:
		task213();
		break;
	case 7:
		task22();
		break;
	case 8:
		task23();
		break;
	case 9:
		task24();
		break;
	case 10:
		task31();
		break;
	case 11:
		task32();
		break;
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