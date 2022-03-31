#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - number is prime?
 * @n: integer parameter
 * @m: integer parameter
 * Return: return boolean
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if ((m / 2) > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}


/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisor(3, n));
	}
}
