#include <stdio.h>
#include <ctype.h>

int main()
{
	int max_size = 15;
	char str[max_size+1];
	scanf("%s", str);

	for (int i = 0; i < max_size; i++) {
		str[i] = isupper(str[i]) ? tolower(str[i]) : toupper(str[i]);
	}
	printf("%s", str);
	return 0;
}