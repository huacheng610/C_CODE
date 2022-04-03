#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define A 3
#define B 4
int main()
{
	int x, y, m, n,z, max,arr[A][B];
	printf("请输入数组:\n");
	for (x = 0; x < A; x++)
		for (y = 0; y < B; y++)
			scanf("%d", &arr[x][y]);
	for (x = 0; x < A; x++)
	{
		max = arr[x][0];
		z = 0;
		for (y = 0; y < B; y++)
			if (arr[x][y] > max)
			{
				max = arr[x][y];
				z = y;
		}
		m = 1;
		for(n=0;n<A;n++)
			if (max > arr[n][z])
			{
				m = 0;
				continue;
			}
		if (m)
		{
			printf("arr[%d][%d]=%d\n", x, z, max);
			break;
		}
	}
	if (!m)
		printf("鞍点不存在！\n");
	return 0;
}