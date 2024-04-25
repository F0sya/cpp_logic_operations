#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	int grn; cout << "Hryvnia:";  cin >> grn;
	int kop; cout << "Kopeks:"; cin >> kop;
	cout << grn + ((kop - (kop % 100)) / 100) << " hrn " << kop % 100 << " kop " << endl;
}