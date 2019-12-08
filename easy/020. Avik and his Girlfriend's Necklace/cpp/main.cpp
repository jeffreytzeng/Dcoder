#include <bits/stdc++.h>
#include "partition.hpp"
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	PartitionArray *numbers = new PartitionArray(n);

	for (int i = 0; i < n; i++) {
		int number = 0;
		cin >> number;
		numbers->Insert(number);
	}

	numbers->Sort();
	numbers->Show();
	delete numbers;
}