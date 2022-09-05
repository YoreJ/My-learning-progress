//不创建变量交换数值
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("bfore:a=%d b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after:a=%d b=%d\n", a, b);
	return 0;
}