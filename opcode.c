#include "main.h"
/**
 * opcode_ - .
 * @line: .
 * @opcode: .
 * Return: .
*/
int opcode_(char *line, instruction_t opcode[])
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (strcmp(line, opcode[i].opcode) == 0)
			return (i);
	}
	return (-1);
}