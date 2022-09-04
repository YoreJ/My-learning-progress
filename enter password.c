#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20] = { 0 };
	int i = 0;
	int n = 0;
	while (i < 3)
	{
		printf("请输入密码：");
		scanf("%s", a);
		if (strcmp(a, "123456") == 0)
		{
			printf("密码正确\n");
			break;
		}
		else if (i == 2)
		{
			printf("密码错误，机会用完，再见\n");
			break;
		}
		else
		{
			i++;
			n = 3 - i;
			printf("密码错误，请重新输入密码，你还有%d次机会\n", n);
		}
	}
	return 0;
}
