#include "main.h"
/**
 * _isdigit - function
 *
 * @c: value checked
 *
 * Return: return 1 if c is a digit else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
