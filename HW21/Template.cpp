#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	//Задание
	int x, y;
	cout << "Задание\nВведите два числа: ";
	cin >> x >> y;
	int* px = &x, * py = &y;
	
	// Задача
	cout << "Среднее арифметическое = " << (*px + *py) / 2 << endl;

	return 0;
}