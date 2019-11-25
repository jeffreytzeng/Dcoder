#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	cin >> size;
	int numbers[size];

	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}

	int result = 0;

	for (int i = 0; i < size; i++) {
		result += numbers[i];
	}

	cout << result;
}