#include <stdio.h>
void print_alphabet(); 
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch='a';
	For(; ch <='z'; ch++)
	{
		printf("%c",ch);
	}
	printf("\n");
}

int main(void)
{
	print_alphabet();
	return (0);
}
