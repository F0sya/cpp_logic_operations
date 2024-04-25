#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x0F);
	int year; cout << "Enter a year:"; cin >> year;
	bool result = ((400 - year % 400) / 400) || (((4 - year % 4) / 4) && (year % 100));
	SetConsoleTextAttribute(hConsole, 0x0B);
	cout << "\tIn ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << year;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << " year = ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << result + 365;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << " days" << endl;
}