#include <iostream>
#include <conio.h>
#include <windows.h>


using namespace std;

int main() {

	setlocale(LC_ALL, "RUS");

	char menu_choise;
	do
	{
		system("cls");
		cout << "Выберите действие:" << endl;
		cout << "[1] Добавление элемента в очередь" << endl;
		cout << "[2] Извлечение элемента очереди" << endl;
		cout << "[3] Вывод очереди на экран" << endl;
		cout << "[4] Вычисление количества нечетных элементов" << endl;
		cout << "[5] Создание копии очереди" << endl;
		cout << "[6] Слияние оригинальной очереди с копией и вывод результатат на экран" << endl;
		cout << "[7] Выход из программы \n " << endl;
		cin >> menu_choise;
		switch (menu_choise) {
		case '1':
			break;
		case '2':
			break;
		case '3':
			break;
		case '4':
			break;
		case '5':
			break;
		case '6':
			break;
		case '7':
			menu_choise = 7;
			break;
		default:
			break;
		}

	} while (menu_choise != 7);
		return 0;
}
	
