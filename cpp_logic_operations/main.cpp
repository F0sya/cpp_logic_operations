#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int grn; cout << "�����:";  cin >> grn;
	int kop; cout << "������:"; cin >> kop;
	cout << grn + ((kop - (kop % 100)) / 100) << " ��� " << kop % 100 << " ��� " << endl;
}