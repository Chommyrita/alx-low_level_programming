#include "main.h"

/**
 * _strlen - Returns the lenght of a string.
 * @str: String.
 *
 * Retturn: lenght.
 */
size_t_strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
