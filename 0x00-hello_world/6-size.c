/*
 *here is the answer
*/
#include <stdio.h>
/*
 * main - Entry point of our applicatio
 * Description: This program prints out the size
 * of each variable type in c programming
 * Return: Alwaus 0.
 */
int main(void)
	/*
	 * main - Entry poinr
	 * Description: This print out some letters
	 * Return: alway 0.
	 */
{
	/*
	 * main - Entry function
	 * Description: This print out some letters
	 * Return: always 0
	 */
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
