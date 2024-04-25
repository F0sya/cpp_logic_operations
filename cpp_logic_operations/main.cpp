#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	float length; cout << "Length (cm): "; SetConsoleTextAttribute(hConsole, 0x05); cin >> length; SetConsoleTextAttribute(hConsole, 0x0F);
	float width; cout << "Width (cm): "; SetConsoleTextAttribute(hConsole, 0x05); cin >> width; SetConsoleTextAttribute(hConsole, 0x0F);
	float height; cout << "Height (cm): "; SetConsoleTextAttribute(hConsole, 0x05); cin >> height; SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "Volume: ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << (length * width) * height;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << " cub.cm" << endl;
}