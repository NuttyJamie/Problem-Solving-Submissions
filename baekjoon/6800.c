#include <stdio.h>

int main()
{
	int k;
	char c;

	scanf("%d ", &k);

	while(k--)
	{
		c=getchar();
		getchar();
		putchar(c);
	}
}
