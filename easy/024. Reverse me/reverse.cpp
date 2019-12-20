#include <algorithm>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int num = 0;
	cin >> num;

	string str = to_string(num);
	reverse(str.begin(), str.end());
	stringstream ss(str);

	ss >> num;
	cout << num;
}
