#include <stdio.h>

int main()
{
	int n, aiueo=0;
	char s[51];

	scanf("%d %s", &n, s);

	for(int i=0; i < n; ++i)
	{
		if( s[i] == 'a' ||
			s[i] == 'i' ||
			s[i] == 'u' ||
			s[i] == 'e' ||
			s[i] == 'o')
			++aiueo;
	}

	printf("%d", aiueo);
}
