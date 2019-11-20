#include <iostream>
using namespace std;

int Recursion(int x) {
	if (x == 0) {
		return 1;
	} else {
		return x * Recursion(x-1);
	}
}

int main()
{
	int n = 0;
	cin >> n;
	cout << Recursion(n);
}