#include <stdio.h>

int main()
{
	int n, l, i, total=1;
	char s[51];

	scanf("%d %s", &n, s);

	for(l=0, i=0; s[i]; ++i)	++l;

	for(i=0; s[i]; ++i)
	{
		if(s[i] == 'S')	++total;
		else
		{
			++total;
			++i;
		}
	}

	printf("%d", ((l < total)?	l:total));
}
