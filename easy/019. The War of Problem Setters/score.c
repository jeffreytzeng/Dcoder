#include <stdio.h>

int main()
{
	int scores = 3;
	int garry[scores], sharry[scores];

	for (int name = 0; name < 2; name++) {
		for (int score = 0; score < scores; score++) {
			if (name) {
				scanf("%d", &sharry[score]);
			} else {
				scanf("%d", &garry[score]);
			}
		}
	}

	int garry_get = 0;
	int sharry_get = 0;

	for (int i = 0; i < scores; i++) {
		garry_get += garry[i];
		sharry_get += sharry[i];
	}

	if (garry_get == sharry_get) {
		printf("None 0");
	} else {
		garry_get > sharry_get ? printf("Garry %d", garry_get - sharry_get) :
							     printf("Sharry %d", sharry_get - garry_get);
	}

	return 0;
}
	