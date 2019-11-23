#include <stdio.h>

int main()
{
	int total_loop = 5;

	for (int loop = 0; loop < total_loop; loop++) {
        int length = total_loop + loop;
        char line[length+1];
		// Setting every cell to blank.
        memset(line, ' ', length);
        int start = total_loop - loop - 1;
		// Filling stars in corresponding position.
        memset(line + start, '*', loop * 2 + 1);
		// Ending a line in last cell.
        memset(line + length, '\0', 1);

        puts(line);
	}
	return 0;
}