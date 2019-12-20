#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);

	int max_size = 5;
	char str[max_size + 1];
	sprintf(str, "%d", num);
    int num_length = 0;

    while (num != 0) {
      num /= 10;
      num_length++;
    }
    char str2[num_length + 1];

	for (int i = 0; i < num_length; i++) {
        char ch = str[num_length - i - 1];
        if (ch != '\0') {
          str2[i] = ch;
        }
	}
    str2[num_length] = '\0';

	num = strtoumax(str2, NULL, 10);
	printf("%d\n", num);

	return 0;
}