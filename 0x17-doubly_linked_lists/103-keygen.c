#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main -  Generates a key based on a username for crackme5.
 *
 * @argc: a number of arguments passed to a program.
 * It should be 2 for correct usage.
 * @argv: a arguments passed to the program.
 * argv[1] should be the username.
 *
 * Return: Returns 0 on successful key generation,
 * and 1 if the number of arguments is incorrect.
 */
int main(int argc, char *argv[])
{
	unsigned int varindx, maxAscii;
	size_t unLength, varsumAscii_;
	char *varkCh;
	char key[7] = "      ";

	varkCh = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	unLength = strlen(argv[1]);
	key[0] = varkCh[(unLength ^ 59) & 63];
	for (varindx = 0, varsumAscii_ = 0; varindx < unLength; varindx++)
		varsumAscii_ += argv[1][varindx];
	key[1] = varkCh[(varsumAscii_ ^ 79) & 63];
	for (varindx = 0, maxAscii = 1; varindx < unLength; varindx++)
		maxAscii *= argv[1][varindx];
	key[2] = varkCh[(maxAscii ^ 85) & 63];
	for (maxAscii = argv[1][0], varindx = 0; varindx < unLength; varindx++)
		if ((char)maxAscii <= argv[1][varindx])
			maxAscii = argv[1][varindx];
	srand(maxAscii ^ 14);
	key[3] = varkCh[rand() & 63];
	for (maxAscii = 0, varindx = 0; varindx < unLength; varindx++)
		maxAscii += argv[1][varindx] * argv[1][varindx];
	key[4] = varkCh[(maxAscii ^ 239) & 63];
	for (maxAscii = 0, varindx = 0; (char)varindx < argv[1][0]; varindx++)
		maxAscii = rand();
	key[5] = varkCh[(maxAscii ^ 229) & 63];
	printf("%s\n", key);
	return (0);
}
