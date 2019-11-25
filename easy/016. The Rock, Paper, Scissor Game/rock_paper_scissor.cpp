#include <iostream>
using namespace std;

int main()
{
	int turns = 0;
	string competes = "";
	cin >> turns >> competes;

	for (int turn = 0; turn < turns*2; turn += 2) {
		if (competes[turn] == competes[turn+1]) {
			cout << "Draw" << endl;
		} else if (competes[turn] == 'R') {
			cout << (competes[turn+1] == 'S' ? "Dcoder" : "You") << endl;
		} else if (competes[turn] == 'P') {
			cout << (competes[turn+1] == 'R' ? "Dcoder" : "You") << endl;
		} else {
			cout << (competes[turn+1] == 'P' ? "Dcoder" : "You") << endl;
		}
	}
}