#include <stdio.h>
#include <string.h>
#include<Windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "hello,I am Yu Jiang";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1)-1;
	int mid = (left + right) / 2;
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		left++;
		right--;
		if (left <= right)
			system("cls");
		else
			break;
	}
	return 0;
}