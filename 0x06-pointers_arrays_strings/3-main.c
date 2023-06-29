#include "main.h"
#include <stdio.h>

/**
 * main - A function that compares two strings.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%s\n", char * _strcat(s1, s2));
    printf("%s\n", char * _strcat(s2, s1));
    printf("%s\n", char * _strcat(s1, s1));
    return (0);
}
