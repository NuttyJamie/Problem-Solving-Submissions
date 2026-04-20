#include <stdio.h>
#include <unistd.h>
#define L 1000003

int main()
{
	char *buf=(char *)calloc(L, char);
	char *n=buf;

	ssize_t l=read(0, &buf[666667], L);
	buf[l-1]=0;

	while(*n)
	{

