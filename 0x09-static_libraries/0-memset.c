#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill 
 * Description: Fills the first 'n' bytes of the memory area
 * pointed to by 's' with the constant byte 'n' 
 * Returns: Pointer to memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;

    while (n > 0)
    {
        s[i] = b;
        i++;
        n--;
    }

    return (s);
}
