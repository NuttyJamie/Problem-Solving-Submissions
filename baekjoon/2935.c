#include <stdio.h>

int main()
{
	int la, lb;
	char a[101], b[101];
	char op;

	scanf("%s %c %s", a, &op, b);

	for(la=0; a[la]; ++la);
	for(lb=0; b[lb]; ++lb);

	if(la < lb)
	{
		la^=lb;
		lb^=la;
		la^=lb;
	}

	switch(op)
	{
		case '+':
			putchar((la != lb)?	'1':'2');
			while(--la)
				putchar((la == lb)?	'1':'0');
			break;
		case '*':
			putchar('1');
			la=la+lb-2;
			while(la--)	putchar('0');
			break;
	}
}
