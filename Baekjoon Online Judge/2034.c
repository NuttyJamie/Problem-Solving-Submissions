#include <stdio.h>

int main()
{
	enum keys
	{
		A=1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0};
	int s[10001];
	int n, i, start;
	char k;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
		scanf("%d", &s[i]);

	for(k='A'; k < 'H'; ++k)
	{

		for(i=0; i < n; ++i)
		{
			s[i]%=12;


