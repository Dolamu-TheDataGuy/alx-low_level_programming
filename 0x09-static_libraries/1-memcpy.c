#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_strcat(char *dest, char *src, unsigned int n)
{
    char *yolo; 

    yolo = dest;
    while (n > 0)
    {
        *dest = *src; /* Goes to each address and copies content in src to dest*/
        dest++;
        src++;
        n--;
    }

    return (yolo);    /*yolo is used to hold the starting address of dest*/
}
