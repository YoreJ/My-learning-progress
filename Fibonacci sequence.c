//Fibonacci sequence
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fibonacci(int x, int y, int n)
{
	int m = 0;
	if (n == 1)
		m = x;
	else if (n == 2)
		m = y;
	else
		m = (Fibonacci(x, y, (n - 1)) + Fibonacci(x, y, (n - 2)));
	return m;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("Please enter the first entry in the Fibonacci sequence:");
	scanf("%d", &a);
	printf("Please enter the second entry in the Fibonacci sequence:");
	scanf("%d", &b);
	printf("n=");
	scanf("%d", &c);
	int d = 0;
	d = Fibonacci(a, b, c);
	printf("%d\n", d);
	return 0;
