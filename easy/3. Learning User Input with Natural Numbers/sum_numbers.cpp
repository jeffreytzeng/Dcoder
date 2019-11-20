#include <iostream>
using namespace std;

int main()
{
	int integer = 0;
	cin >> integer;

	int total = 0;

	for (int i = 0; i <= integer; i++) {
		total += i;
	}

	cout << total << endl;
}