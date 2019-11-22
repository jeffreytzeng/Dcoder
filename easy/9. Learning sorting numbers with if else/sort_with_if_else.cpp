#include <iostream>
using namespace std;

void Swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	cin >> number1 >> number2 >> number3;

	if (number1 > number2) {
		Swap(number1, number2);

		if (number2 > number3) {
			Swap(number2, number3);

			if (number1 > number2) {
				Swap(number1, number2);
			}
		}
	} else {
		if (number2 > number3) {
			Swap(number2, number3);

			if (number1 > number2) {
				Swap(number1, number2);
			}
		}
	}

	cout << number1 << " " << number2 << " " << number3 << endl;
}