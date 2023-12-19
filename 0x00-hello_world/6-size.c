#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char sizeofchar = sizeof(char);
	int sizeofint = sizeof(int);
	long int sizeoflongint = sizeof(long int);
	long long int sizeoflonglongint = sizeof(long long int);
	float sizeoffloat = sizeof(float);

	printf("Size of a char: %zu byte(s)\n", (size_t)sizeofchar);
	printf("Size of an int: %zu byte(s)\n", (size_t)sizeofint);
	printf("Size of a long int: %zu byte(s)\n", (size_t)sizeoflongint);
	printf("Size of a long long int: %zu byte(s)\n", (size_t)sizeoflonglongint);
	printf("Size of a float: %zu byte(s)\n", (size_t)sizeoffloat);

	return (0);
}

