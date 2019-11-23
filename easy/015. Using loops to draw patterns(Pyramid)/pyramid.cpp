#include <iostream>
using namespace std;

int main()
{
	int total_loop = 5;
	for (int loop = 0; loop < total_loop; loop++) {
		cout << string(total_loop - loop - 1, ' ')
			 << string(loop * 2 + 1, '*')
			 << endl;
	}
}