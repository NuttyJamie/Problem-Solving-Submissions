#include <stdio.h>

int main()
{
	int day, month, year, result=0;
	char d[10];

	for(t=0; t < 3; ++t)
	{
		scanf("%s", d);

		day=month=year=0;

		year=d[4]*100+d[5]*10+d[6];
		year+=(d[4] < 6)?	2000:1000;
		if(!(year%4) && !(year%400))
		{

		}
		else

		day=d[0]*10+d[1];
		if(0 < day && day < 32)
		{
			month=d[2]*10+d[3];

			if(0 < month && month < 13)
			{
			}
			else result=0;
		}
		printf("%d\n", result);
	}
	}
