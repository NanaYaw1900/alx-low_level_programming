#include <stdio.h>
#include "main.h"
/**
 * Print_remaining_days - takes a date and print how many days
 * left in the year, taking leap years into acount
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && days >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", days);
		printf("remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && == 60)
		{
			printf("invalid date: %02d/%02d/%04d\", month, day - 31, year
					}
					else 
					{
					printf("day of the year: %d\n", day);
					}
					}
					}
