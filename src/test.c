#include <stdio.h>
#include <stdint.h>
#include "clean_iobuffer.h"
int main(void)
{
	{

		char input[6] = {0};
		char answer[6] = {0};
		printf("type your answer: ");
		fgets(input, sizeof(input), stdin);
		clean_io();
		sscanf(input, "%s", answer);
		printf("%s\n", answer);
	}


	{
		char input[6] = {0};
		char answer[6] = {0};
		printf("type your char  number: ");
		fgets(input, sizeof(input), stdin);
		clean_io();
		sscanf(input, "%s", answer);
		printf("%s\n", answer);
	}

	{
		char input[6] = {0};
		int number = 0;
		printf("type your int number: ");
		fgets(input, sizeof(input), stdin);
		clean_io();
		sscanf(input, "%i", &number);
		printf("%i\n", number);
	}


	return 0;
}
