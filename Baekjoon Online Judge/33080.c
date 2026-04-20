#include <stdio.h>

int main()
{
	int a[200];
	int n, m, i, j, k, min, max, total=0, rating=0;

	scanf("%d %d", &n, &m);

	for(i=0; i < n; ++i)
		scanf("%d", &a[i]);

	for(i=0; i < n-2; ++i)
		for(j=i+1; j < n-1; ++j)
			for(k=j+1; k < n; ++k)
			{
				if(a[i] <= a[j] && a[i] <= a[k])		min=a[i];
				else if(a[j] <= a[i] && a[j] <= a[k])	min=a[j];
				else									min=a[k];
				if(a[i] >= a[j] && a[i] >= a[k])		max=a[i];
				else if(a[j] >= a[i] && a[j] >= a[k])	max=a[j];
				else									max=a[k];

				if(max-min <= m)
				{
					++total;
					if(rating < a[i]+a[j]+a[k])
						rating=a[i]+a[j]+a[k];
				}
			}

	if(total) 	printf("%d %d", total, rating);
	else		printf("-1");
}
