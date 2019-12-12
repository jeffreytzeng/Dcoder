#include <bits/stdc++.h>
using namespace std;

int main()
{
	int total_cases = 0;
	cin >> total_cases;
	vector<int> students(total_cases, 0);

	for (int i = 0; i < total_cases; i++) {
		cin >> students[i];
	}

	for (auto student : students) {
		cout << student/2 << " " << student/2 + student%2 << endl;
	}
}