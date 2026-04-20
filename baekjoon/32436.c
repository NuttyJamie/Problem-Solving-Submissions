#include <stdio.h>

int main()
{
	int box[4];
	int n, i, o=0;

	scanf("%d", &n);

	scanf("%d", &box[0]);

	for(i=n-2; i; --i)	scanf("%*d");

	scanf("%d", &box[1]);

	for(int j=n-2; j; --j)
		for(i=n; i; --i)	scanf("%*d");

	scanf("%d", &box[3]);

	for(i=n-2; i; --i)	scanf("%*d");

	scanf("%d", &box[2]);

	for(int min=box[0], i=1; i < 4; ++i)
		if(box[i] < min)
		{
			min=box[i];
			o=i;
		}

	printf("%d", o);

}
