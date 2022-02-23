#define _CRT_SECURE_NO_WARNINGS
//求10个整数中最大值
#include<stdio.h>
int main()
{
	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++);
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}





//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//    int flag = 1;
//		for (i = 1; i <= 100; i++)
//		{
//			sum += flag * 1.0 / i;
//			flag = -flag;
//		}
//		printf("%lf\n", sum);
//	return 0;
//}
//



//编写程序数一下1到100的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}