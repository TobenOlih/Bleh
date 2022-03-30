#include<stdio.h>
/**
 * Factorial - Calculate factorial of a number using recursion
 * @n: Number to calculate factorial
 * Return: Factorial of n
 */
unsigned long int factorial(unsigned long int n){
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

int main ()
{
	printf("%lu\n", factorial(5));
	return (0);

}