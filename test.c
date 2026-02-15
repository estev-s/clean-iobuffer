#include <stdio.h>
#include <stdint.h>
#include "clean_iobuffer.h"
int main(void)
{
	{

		char input[6] = {0};
		char answer = '\0';
		printf("type your answer: ");
		fgets(input, sizeof(input), stdin);
		clean_io();
		sscanf(input, "%s", &answer);
		printf("%s", answer);
		printf("\n");
	}


	{
		char input[6] = {0};
		int number = 0;
		printf("type your number: ");
		fgets(input, sizeof(input), stdin);
		clean_io();
		sscanf(input, "%i", &number);
		printf("%i", number);
		printf("\n");
	}

	return 0;
}
