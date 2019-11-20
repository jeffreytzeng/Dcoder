#include <stdio.h>

int Recursion(int x) {
	if (x == 0) {
		return 1;
	} else {
		return x * Recursion(x-1);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", Recursion(n));
	return 0;
}