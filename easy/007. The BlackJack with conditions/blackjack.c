#include <stdio.h>

int main()
{
	int card1 = 0;
	int card2 = 0;
	scanf("%d %d", &card1, &card2);

	card1 = (card1 == 11) ? 1 : card1;
	card2 = (card2 == 11) ? 1 : card2;

	printf("%d", card1 + card2 > 21 ? 0 : card1 + card2);

	return 0;
}