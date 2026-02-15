#include <stdio.h>
#include <stdint.h>

int main(void)
{
	{

		char input[10] = {0};
		char answer = '\0';
		printf("type your answer: ");
		fgets(input, sizeof(input), stdin);
		sscanf(input, " %c", &answer);
		printf(answer);
	}


	{
		char input[10] = {0};
		int number = 0;
		printf("type your number: ");
		fgets(input, sizeof(input), stdin);
		sscanf(input, " %c", &answer);
		printf(answer);
	}

	return 0;
}
