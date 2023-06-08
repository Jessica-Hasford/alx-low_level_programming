#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0
 * if there are invalid characters or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int final_val = 0;
int c;

if (b == NULL)
return (0);

for (c = 0; b[c] != '\0'; c++)
{
if (b[c] != '0' && b[c] != '1')
return (0);

final_val = final_val * 2 + (b[c] - '0');
}

return (final_val);
}
