//Tower of hanoi
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int hn(int n)
{
	int a = 1;
	if (n != 1)
	{
		a = 2 * hn(n - 1) + 1;
	}
	return a;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d",hn(n));
	return 0;
}