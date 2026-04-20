#include <stdio.h>

int main()
{
	int offset=0;
	char s[200001], k[200001];
	char *ps=s, *pk=k;

	scanf("%s %s", s, k);

	while(*(ps+offset) && *pk)
	{
		if(*(ps+offset) > '@')
		{
			if(*(ps+offset) == *pk)
			{
				++pk;
				++offset;
			}
			else
			{
				pk=k;
				++ps;
				offset=0;
			}
		}
		else ++ps;
	}
	putchar((*pk)?	'0':'1');
}
