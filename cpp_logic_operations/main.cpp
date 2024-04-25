#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int grn; cout << "Гривні:";  cin >> grn;
	int kop; cout << "Копійки:"; cin >> kop;
	cout << grn + ((kop - (kop % 100)) / 100) << " грн " << kop % 100 << " коп " << endl;
}