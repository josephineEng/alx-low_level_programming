/*
 * File: 0-isupper.c
 * Auth: Brennan D Baraban
 */

#include "main.h"


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
