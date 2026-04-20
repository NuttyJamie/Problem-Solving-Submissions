#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, j, l, centre, ex;
	char distinct[8], w[24];

	scanf("%s %d ", distinct, &n);

	while(n--)
	{
		scanf("%s", w);

		l=strlen(w);

		if(l > 3)
		{
			centre=0;

			for(i=0; w[i]; ++i)
				if(distinct[0] == w[i])
				{
					centre=1;
					break;
				}

			if(centre)
			{
				for(ex=1, i=0; i < l && ex; ++i)
				{
					for(j=0; distinct[j] != w[i] && j < 7; ++j);
					if(j == 7)	ex=0;
				}
				if(ex)	printf("%s\n", w);
			}
		}
	}
}
