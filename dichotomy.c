/////二分(折半）查找算法找有序数组中的数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	scanf("%d", &k);
	int left = 0;//左下标
	int right = sz - 1;//右下标
	while (left<=right)
	{
		
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
		if (left > right)
			printf("找不到");
	}
	return 0;
}
