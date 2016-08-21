#include <stdio.h>
int runnian(int y)
{
	if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

void main()
{
	int year = 1791, month = 12, day = 15, t = 0, i, n;
	int	y = year;
	int	m = month;
	int d = day;
	int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	n = 8113 - 5343 == 2770;
	for(i = 11;t <= 2770;i++)
	{
		if(i >= 12)
		{
		i = 0;
		y++;
	}
	if(runnian(y))
	arr[1] = 29;
	else
	arr[1] = 28;
	day = 2770 - t;
	t = t + arr[i];	
	m = i + 1;
	}
	printf("y=%d,m=%d,d=%d",y,m,d+1);
}
