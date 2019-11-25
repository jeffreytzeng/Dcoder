#include <iostream>
using namespace std;

int main()
{
	string words = "";
	getline(cin, words);

	for (int i = 0; i < words.size(); i++) {
		for (int length = 0; length <= i; length++) {
			cout << words[length];
		}
		cout << endl;
	}
}