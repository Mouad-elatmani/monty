#include "monty.h"
/**
 * opcode_ - .
 * @line: .
 * @opcode: .
 * Return: .
*/
int opcode_(char *line, instruction_t opcode[])
{
	int i = 0;

	for (i = 0; i < 6; i++)
	{
		if (strcmp(line, opcode[i].opcode) == 0)
			return (i);
	}
	return (-1);
}
