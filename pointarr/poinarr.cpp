#include <iostream>
using namespace std;

void link(int *num, int n) {
	int power = 1;
	cout << "������� �����: ";
	cin >> *num;
	cout << "������� �������: ";
	cin >> n;
	for (int i = 0; i < n; i++) 
		power *= *num;
	cout << "����� " << *num << " � ������� " << n << " = " << power;
}


int main() {
	setlocale(LC_ALL, "ru");

	// ������ 1
	int arr[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *parr = arr;
	cout << "����������� ������ \n[";
	for (int i = 0; i < 10; i++)
		cout << *(parr + i) << ", ";
	cout << "\b\b]\n";
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (*(parr + i) % 2 == 0)
		swap(*(parr + i), *(parr + i - 1));
	}
	cout << "�������� ������ \n[";
	for (int i = 0; i < 10; i++)
	cout << *(parr + i) << ", ";
	cout << "\b\b]\n";
	cout << endl;
	// ������ 2

	int n;
	int *pn = &n;
	link(pn, n);

	return 0;
}