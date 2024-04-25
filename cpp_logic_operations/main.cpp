#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	float radius; cout << "Radius of sphere(cm):";  SetConsoleTextAttribute(hConsole, 0x05); cin >> radius; SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "Volume of sphere: ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << (4 * 3.14 * (radius*radius*radius)) / 3;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << " cub.cm" << endl;
}