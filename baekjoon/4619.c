#include <stdio.h>

int main()
{
	int a, b, n, d, p, i;

	while(1)
	{
		a=d=p=1;

		scanf("%d %d", &b, &n);

		if(!b)	break;

		while(d < b)
		{
			p=d;
			++a;
			for(i=0, d=1; i < n; ++i) d*=a;
		}

		d=(b-d < 0)?	d-b:b-d;
		p=(b-p < 0)?	p-b:b-p;
		printf("%d\n", (d <= p)?	a:a-1);
	}
}

