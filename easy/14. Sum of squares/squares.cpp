#include <iostream>
#include <complex>
using namespace std;

int main()
{
	int from = 0;
	int end = 0;
	cin >> from >> end;
	int total = 0;
	for (int i = from; i <= end; i++) {
		total += pow(i, 2);
	}
	cout << total;
}