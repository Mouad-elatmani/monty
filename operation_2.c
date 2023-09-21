#include "main.h"
/**
 * swap - .
 * @stack: .
 * @line_number: .
 * Return: .
*/
void swap(stack_t **stack, unsigned int line_number)
{
	int num;

	if (!(*stack) || !((*stack)->next))
	{
		free_list(stack);
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = num;
}
/**
 * add - .
 * @stack: .
 * @line_number: .
 * Return: .
*/
void add(stack_t **stack, unsigned int line_number)
{
	int number;
	stack_t *temp;

	if (!(*stack) || !((*stack)->next))
	{
		free_list(stack);
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	number = (*stack)->n;
	(*stack)->next->n += number;
	(*stack)->next->prev = NULL;
	free(temp);
	*stack = (*stack)->next;
}
/**
 * sub - .
 * @stack: .
 * @line_number: .
 * Return: .
*/
void sub(stack_t **stack, unsigned int line_number)
{
	int number;
	stack_t *tmp;

	if (!(*stack) || !((*stack)->next))
	{
		free_list(stack);
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	number = (*stack)->n;
	(*stack)->next->n -= number;
	(*stack)->next->prev = NULL;
	free(tmp);
	*stack = (*stack)->next;
}
