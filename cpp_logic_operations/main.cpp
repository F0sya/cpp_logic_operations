#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	float scale; cout << "Map scale (amount of km in 1 cm): ";  SetConsoleTextAttribute(hConsole, 0x05); cin >> scale; SetConsoleTextAttribute(hConsole, 0x0F);
	float distance; cout << "Distance between dots that represent settlements on map (cm):"; SetConsoleTextAttribute(hConsole, 0x05); cin >> distance; SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "Distance between settlements: ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << scale * distance;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << " km" << endl;
}