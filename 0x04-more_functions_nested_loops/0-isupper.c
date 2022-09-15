#include "main.h"
#include <stdio.h>

/**
 * _isupper -function to check if a character is uppercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is uppercase otherwise always 0 (Success)
 */

int _isupper(int c)
{
	if ((c >= 'A') && (C <= 'Z'))
		return (1);
	else
		return (0);
	
}
