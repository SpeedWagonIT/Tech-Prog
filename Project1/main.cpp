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
		cout << "�������� ��������:" << endl;
		cout << "[1] ���������� �������� � �������" << endl;
		cout << "[2] ���������� �������� �������" << endl;
		cout << "[3] ����� ������� �� �����" << endl;
		cout << "[4] ���������� ���������� �������� ���������" << endl;
		cout << "[5] �������� ����� �������" << endl;
		cout << "[6] ������� ������������ ������� � ������ � ����� ����������� �� �����" << endl;
		cout << "[7] ����� �� ��������� \n " << endl;
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
	
