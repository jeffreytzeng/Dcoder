#include <stdio.h>

int main()
{
	int max_length = 20;
	char words[max_length];
	scanf("%s", words);

	int stop = 0;

	for (int i = 0; i < max_length; i++) {
		for (int length = 0; length <= i; length++) {
			printf("%c", words[length]);

			if (words[length+1] == '\0') {
				stop = 1;
				break;
			}
		}

		if (stop) {
			break;
		} else {
			printf("\n");
		}
	}
	return 0;
}
	