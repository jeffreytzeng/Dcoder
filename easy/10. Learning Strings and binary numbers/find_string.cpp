#include <iostream>
using namespace std;

int main()
{
	string a = "";
	string b = "";
	cin >> a >> b;
	cout << (a.find(b) != string::npos ? 1 : 0);
}