#include <stdio.h>

int main()
{
	int t, i, total;
	char alp[26], s[1001];

	scanf("%d ", &t);

	while(t--)
	{
		total=2015;

		for(i=0; i < 26; ++i)	alp[i]=0;

		scanf("%s", s);

		for(i=0; s[i]; ++i) ++alp[s[i]-'A'];

		for(i=0; i < 26; ++i)
			if(alp[i])
				total-=i+'A';

		printf("%d\n", total);
	}
}
