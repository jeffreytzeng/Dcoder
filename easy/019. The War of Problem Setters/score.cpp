#include <iostream>
using namespace std;

int main()
{
	int scores = 3;
	int garry[scores], sharry[scores];

	for (int name = 0; name < 2; name++) {
		for (int score = 0; score < scores; score++) {
			if (name) {
				cin >> sharry[score];
			} else {
				cin >> garry[score];
			}
		}
	}

	int garry_get = 0;
	int sharry_get = 0;

	for (int score = 0; score < scores; score++) {
		garry_get += garry[score];
		sharry_get += sharry[score];
	}

	if (garry_get == sharry_get) {
		cout << "None 0";
	} else {
		cout << (garry_get > sharry_get ?
				"Garry " + std::to_string(garry_get - sharry_get) :
				"Sharry " + std::to_string(sharry_get - garry_get));
	}
}