#include <bits/stdc++.h>
using namespace std;

int main()
{
	string name = "";
	cin >> name;
	string reversed_name = name;
	reverse(reversed_name.begin(), reversed_name.end());
	cout << (name == reversed_name ? "Yes" : "No");
}