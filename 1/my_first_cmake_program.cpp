
#include <iostream>
#include <Windows.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	string name;
	cout << "������� ���: ";
	cin >> name;
	cout << "������������, " << name << endl;

	return 0;
}