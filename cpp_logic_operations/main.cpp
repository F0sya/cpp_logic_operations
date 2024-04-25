#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int days; cout << "Amount of days:";  SetConsoleTextAttribute(hConsole, 0x05); cin >> days; SetConsoleTextAttribute(hConsole, 0x0F);
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << (days - (days % 7)) / 7; SetConsoleTextAttribute(hConsole, 0x0F); cout << " weeks "; SetConsoleTextAttribute(hConsole, 0x05); cout << days % 7;  SetConsoleTextAttribute(hConsole, 0x0F); cout << " days" << endl;
}