#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int u, cnt = 0;
unsigned long int curr;

for (u = 63; u >= 0; u--)
{
curr = n >> u;

if (curr & 1)
{
_putchar('1');
cnt++;
}
else if (cnt)
_putchar('0');
}
if (!cnt)
_putchar('0');
}
