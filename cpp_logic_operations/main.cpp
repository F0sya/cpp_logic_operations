#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int seconds; cout << "Enter time (s): "; SetConsoleTextAttribute(hConsole, 0x05); cin >> seconds; SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "Hours: ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << seconds / 3600 << endl;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "Minutes: ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << seconds / 60 << endl;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "Seconds : ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << seconds;
	SetConsoleTextAttribute(hConsole, 0x0F);
}