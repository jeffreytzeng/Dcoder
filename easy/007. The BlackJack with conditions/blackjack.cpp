#include <iostream>

using namespace std;

int main()
{
	int card1 = 0;
	int card2 = 0;
	cin >> card1 >> card2;

	if (card1 == 11) {
		card1 = 1;
	}
	if (card2 == 11) {
		card2 = 1;
	}
	cout << (card1 + card2 > 21 ? 0 : card1 + card2);
}