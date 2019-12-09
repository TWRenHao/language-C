#include<stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

int month_day(struct date d);
int isLeap(struct date d);

int main(int argc, char const *argv[])
{
	struct date tomorrow, today;

	printf("Today's date is (please input year/month/day):\n");
	scanf("%i %i %i", &today.year, &today.month, &today.day);

	if(today.day != month_day(today))
	{
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if(today.month == 12)
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else
	{
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}

	printf("Tomorrow's date is %i-%i-%i.\n",
		tomorrow.year, tomorrow.month, tomorrow.day);

    return 0;
}

int month_day(struct date d)
{
	int days;

	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if(d.month == 2 && isLeap(d) == 1)
	{
		days = 29;
	}
	else
	{
		days = daysPerMonth[d.month - 1];
	}
	return days;
}

int isLeap(struct date d)
{
	int leap = 0;

	if((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
	{
		leap = 1;
	}
	return leap;
}
