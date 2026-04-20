#include <stdio.h>

int main()
{
	long long n;

	scanf("%lld", &n);

	puts((n*n <= 100000000)?	"Accepted":"Time limit exceeded");
}
