/***********************************************************

Title:
	Buffer I/O Cleaner - clean_iobuffer.h

About:
	Custom Header to prevent buffer overflow
	in input/output operations.

License:
	The Unlicense - please refer to <https://unlicense.org>

Author:
	Estevão Salles <mail.estevao.s@gmail.com>

************************************************************/

/*
 			Usage Guide:
 
.. code-example1:: c
	{
		char input[100] = {0};
		printf("type your input: ");
		scanf(" %c", &input);
		clean_io(input);

	}

.. code-example2:: c
	{
		char input[100] = {0};
		char answer = '\0';
		printf("type the answer: ");
		fgets(input, sizeof(input), stdin);
		sscanf(input, " %c", &answer);
		clean_io(answer);
	}


- The clean_io() will run the cleaning function based on the 
data type of the variables and the get/parse method.

- Ideally, you should call it right after every user input in
your code. It will analyze the buffer and clean only if there's garbage.
*/

ifndef CLEAN_IOBUFFER_H
define CLEAN_IOBUFFER_H

// Libraries/Headers:
#include <stdio.h>
#include <string.h>

// Functions:
int clean_short(input);
int clean_long(input);

// --- Main ---
int clean_io(char)
{
	/* This will analyze the variable parsed
	 * and choose the cleaning function:
	 * clean_short() or clean_long(). */
	
	char input;
	if (input > 0 && input <= 5)

		clean_short(input);
	
	else if (input > 0 && <= 20 ) {

		clean_long(input);
		
	}
	else if (input > 0 && <= 3000000 ) {

		clean_long(input);
	
	}

}
// --- Main End ---

// Functions Logic

int clean_short(input)
{
	/* For inputs up to 5 Bytes max. */

	

}

int clean_long(input)
{
	/* For inputs to a maximum of 3000000 Bytes. 
	 * Why 3000000? Close to the maximum Byte size a 
	 * char variable can have.*/



}
