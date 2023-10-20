#include "monty.h"
/**
 * isNumber - function checks if the string is number
 * @number: number we want to check
 * Return: 0 or 1 which indecates the if the value is number
 */
int isNumber(char number[])
{
	int i = 0;


	if (number[0] == '-')
		i = 1;
	for (; number[i] != 0; i++)
	{
		if (!isdigit(number[i]))
			return (0);
	}
	return (1);
}
