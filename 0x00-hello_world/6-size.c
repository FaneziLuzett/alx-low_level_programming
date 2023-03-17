#include<stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
    printf("Size of a char: %lu byte(s)", sizeof(char));
    printf("Size of int: %lu byte(s)", sizeof(int));
    printf("Size of a long int: %lu bytes(s)", sizeof(long int));
    printf("Size of a long long int: %lu bytes(s)", sizeof(long long int));
    printf("Size of a float int: %lu bytes(s)", sizeof (float int));
    return (0);
}
