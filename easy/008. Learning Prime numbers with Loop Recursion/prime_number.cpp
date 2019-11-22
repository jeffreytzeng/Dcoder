#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int from = 0;
	int end = 0;
	cin >> from >> end;

	vector<int> v;

	for (int number = from; number <= end; number++) {
		if (number != 1) {
			bool prime = true;
			for (int check = 2; check < number; check++) {
				if (number % check == 0) {
					prime = false;
					break;
				}
			}

			if (prime) {
				v.push_back(number);
			}
		}
	}

	for (int value : v) {
		cout << value << endl;
	}
}