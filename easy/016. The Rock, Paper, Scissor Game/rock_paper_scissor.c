#include <stdio.h>

int main()
{
	int turns = 0;
	scanf("%d", &turns);
	char competes[turns*2];
	scanf("%s", competes);

	for (int turn = 0; turn < turns*2; turn += 2) {
		if (competes[turn] == competes[turn+1]) {
			printf("Draw\n");
		} else if (competes[turn] == 'R') {
			printf(competes[turn+1] == 'S' ? "Dcoder\n" : "You\n");
		} else if (competes[turn] == 'S') {
			printf(competes[turn+1] == 'P' ? "Dcoder\n" : "You\n");
		} else {
			printf(competes[turn+1] == 'R' ? "Dcoder\n" : "You\n");
		}
	}
	return 0;
}