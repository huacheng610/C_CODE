#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[8] = { 1,3,5,7,9,11,13};
	int x, y, a, b, i, j;
	printf("array arr:\n");
	for (i = 0; i < 7; i++)
		printf(" % 5d", arr[i]);
	printf("\n");
	printf("请输入一个数:");
	scanf("%d", &a);
	b = arr[6];
	if (a > b)
		arr[7] = a;
	else
	{
		for (i = 0; i < 8; i++)
		{
			if (arr[i] > a)
			{
				x = arr[i];
				arr[i] = a;
				for (j = i + 1; j < 8; j++)
				{
					y = arr[j];
					arr[j] = x;
					x = y;
				}
				break;
			}
		}
	}
	printf("Now array a:\n");
	for (i = 0; i < 8; i++)
		printf("%5d", arr[i]);
	printf("\n");
	return 0;
}
