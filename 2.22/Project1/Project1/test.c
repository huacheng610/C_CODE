#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//打印1000-2000间的闰年
int main()
{
	int year = 0;
	for (year = 1000; year < 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
		}
	}
	return 0;
}





//3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}



//三个数按大小排序
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (b < c)
//	{
//		int tmp= b;
//		b= c;
//		c= tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}