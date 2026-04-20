#include <stdio.h>

int main()
{
	int p, q, x, y;

	scanf("%d %d", &p, &q);

	for(x=1; x <= p; ++x)
		for(y=1; y <= q; ++y)
			if(!(p%x) && !(q%y))
				printf("%d %d\n", x, y);
}
