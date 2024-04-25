#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Calculation of running speed." << endl;
	float length; cout << "Enter a length of distance(metres): ";  SetConsoleTextAttribute(hConsole, 0x05); cin >> length; SetConsoleTextAttribute(hConsole, 0x0F);
	float time; cout << "Enter a time: ";  SetConsoleTextAttribute(hConsole, 0x05); cin >> time; SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "Distance: "; SetConsoleTextAttribute(hConsole, 0x05); cout << length; SetConsoleTextAttribute(hConsole, 0x0F); cout << " metres" << endl;
	cout << "Time: "; SetConsoleTextAttribute(hConsole, 0x05); cout << static_cast<int>(time); SetConsoleTextAttribute(hConsole, 0x0F); cout << " m "; SetConsoleTextAttribute(hConsole, 0x05); cout << (time - (static_cast<int>(time))) * 100; SetConsoleTextAttribute(hConsole, 0x0F); cout << " sec = "; SetConsoleTextAttribute(hConsole, 0x05); cout << (static_cast<int>(time) * 60) + ((time - (static_cast<int>(time))) * 100); SetConsoleTextAttribute(hConsole, 0x0F); cout << " sec" << endl;
	cout << "Your speed: "; SetConsoleTextAttribute(hConsole, 0x05); cout << (length / 1000) / (((static_cast<int>(time) * 60) + ((time - (static_cast<int>(time))) * 100)) / 3600); SetConsoleTextAttribute(hConsole, 0x0F); cout << " km per hours" << endl;

}