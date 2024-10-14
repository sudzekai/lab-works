#include <iostream>
#include <string>
#include <Windows.h>
#include <io.h>
#include <fcntl.h>

using namespace std;

void lab4_t1() { 
	int num, tmp=1;
	cout << "Задание 4.1\nВведите число, факториал которого необходимо найти: ";
	cin >> num;
	if (num > 0) {
		for (int i = 1; i <= num; i++) {
			tmp *= i;
		}
		cout << num << "! = " << tmp;
	}
	else {
		cout << "Факториал введённого числа не существует" << endl;
	}
}

void lab4_t2() { 
	double n1, n2=0;
	cout << "Задание 4.2\nВведите делимое: ";
	cin >> n1;
	while (n2 == 0) {
		cout << "Введите делитель: ";
		cin >> n2;
	}
	cout << n1<< " / "<< n2<< " = " << n1 / n2;
}

void lab4_t3() {  
	srand(time(0));
	int nstart = 1, nend = 100;
	int mind = rand() % (nend - nstart + 1) + nstart;
	int res = 0;
	cout << "Угадайте число от 1 до 100: ";
	while (res != mind) {
		cin >> res;
		if (res > mind) {
			cout << "Требуется ввести число меньшее: ";
		}
		else if (res < mind) {
			cout << "Требуется ввести число большее: ";
		}
	}
	cout << "Было загадано число " << mind;
}

void lab4_main() {
	int num;
	cout << "Введите номер задания (1-3): ";
	cin >> num;

	switch (num)
	{
	case (1):
		lab4_t1();
		break;
	case (2):
		lab4_t2();
		break;
	case (3):
		lab4_t3();
		break;
	default:
		cout << "Задание с таким номером не существует" << endl;
		break;
	}
}

// Лаба 4 ^

void lab3_t3() {
	
	double sum;
	string tt;
	cout << "Задание 3.3\nКурс: Доллар - 97.24; Евро - 106,51 \nВведите сумму в рублях и требуемую валюту: ";
	cin >> sum >> tt;
	cout << tt;
	if (tt == "евро") { 
		cout << floor(sum * 106.51 * 100) / 100 << endl;
	}
	else if (tt == "доллар") { 
		cout << floor(sum * 97.24 * 100) / 100 << endl;
	}
	else {
		cout << sum;
	}

}

int lab3_t2() {
	int year, month;
	while (true) {
		cout << "Задание 3.2 \nВведите год и номер месяца: ";
		cin >> year >> month;
		if (year % 4 == 0) {
			if (month % 2 == 0) {
				if (month == 2) {
					cout << "Год високосный, в месяце 29 дней" << endl;
				}
				else {
					cout << "Год високосный, в месяце 30 дней" << endl;
				}
			}
			else {
				cout << "Год високосный, в месяце 31 дней" << endl;
			}
		}
		else {
			if (month % 2 == 0) {
				if (month == 2) {
					cout << "Год не високосный, в месяце 28 дней" << endl;
				}
				else {
					cout << "Год не високосный, в месяце 30 день" << endl;
				}
			}
			else {
				cout << "Год не високосный, в месяце 31 дней" << endl;
			}
		}
	}
}



int lab3_t1() {
	cout << "Задание 3.1 \nВведите номер дня недели: ";
	int day;
	cin >> day;
	if (day == 6 or day == 7) {
		cout << "Это выходной" << endl;
	}
	if (day < 1 or day > 7) {
		cout << "Такой день недели не существует" << endl;
	}
	else {
		cout << "Это не выходной" << endl;
	}
	return 1;
}


void lab3_main() {
	int num;
	cout << "Введите номер задания (1-3): ";
	cin >> num;

	switch (num)
	{
	case (1):
		lab3_t1();
		break;
	case (2):
		lab3_t2();
		break;
	case (3):
		lab3_t3();
		break;
	default:
		cout << "Задание с таким номером не существует" << endl;
		break;
	}
}

//Лаба 3 ^

int main()
{
	setlocale(LC_CTYPE, "ru");
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	int num;
	cout << "Введите номер работы: ";
	cin >> num;
	switch (num)
	{
	case (3):
		lab3_main();
		break;
	case (4):
		lab4_main();
		break;
	case (5):
		break;
	default:
		cout << "Работа с таким номером не найдена" << endl;
		break;
	}
}