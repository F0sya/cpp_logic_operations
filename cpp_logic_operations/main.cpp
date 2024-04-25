#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	float number; cout << "Number: ";  SetConsoleTextAttribute(hConsole, 0x05); cin >> number; SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "Number in money format: ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << static_cast<int>(number);
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << " hrn ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << (static_cast<int>(number * 10) % 10) * 10;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << " kop" << endl;
}