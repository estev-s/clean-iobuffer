/***********************************************************

Title:
	Buffer I/O Cleaner - clean_iobuffer.c

About:
	Custom Header to prevent buffer overflow
	in input/output operations.

License:
	The Unlicense - please refer to <https://unlicense.org>

Author:
	Estevão Salles <mail.estevao.s@gmail.com>

************************************************************/

// Libraries/Headers:
#include <stdio.h>
#include "clean_iobuffer.h"

// --- Main ---
int clean_io(void)
{
	int x;
	int buffer;
	while ((buffer = getchar()) != '\n' && buffer != EOF)
	
		x = buffer;
		
	
}
// --- Main End ---
