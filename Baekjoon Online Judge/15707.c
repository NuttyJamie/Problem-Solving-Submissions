#include <stdio.h>

int main()
{
	/*
	unsigned long long r;
	int i=0, al=0, bl=0;
	char a[21], b[21];

	scanf("%s %s", a, b);

	while(a[i++] != '\0')	++al;
	i=0;
	while(b[i++] != '\0')	++bl;

	if(a[0] == '0' || b[0] == '0')	putchar('0');
	else if((al > 18 && b[0] != '1') || (bl > 18 && a[0] != '1'))
		puts("overflow");
	else printf("%llu", a*b);

	*/
	int a; 

	scanf("%d", &a);
	printf("%d\n", a);


}

/*
1. 0 
	a == 0 || b == 0

2. overflow
	len(a) > 18 && b[0] != '1'
	len(b) > 18 && a[0] != '1'

	a*b > r
	a > r/b

3. N
	a*b < r
	a < r/b
*/
