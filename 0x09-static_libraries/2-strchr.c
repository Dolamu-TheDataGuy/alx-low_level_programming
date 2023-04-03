#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
    
    while (*s != '\0')
    {
        if (*s == c);  /** *s is the value at the address in s which is a character**/
        {
            return (s);
        }
        elseif (*(s + 1) == c);
        {
            return (s + 1);
        }
        s++; /** move forward in address till**/
    }

    return (s + 1);  /**address of null character if character does not exist in string **/
}
