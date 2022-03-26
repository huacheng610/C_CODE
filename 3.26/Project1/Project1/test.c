#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int  n, p, i;
	for (i = 2; i <= 999; i++)
	{
		p = 0;
		for (n = 1; n < i; n++)
		{
			if ((i % n) == 0)
				p = p + n;
			if (p == i)
			{
				printf("%d, its factors are", i);
				for (n = 1; n < i; n++)
					if (i % n == 0)
						printf("%d ", n);
				printf("\n");
			}
		}
	}
	return 0;
}






//#include<stdio.h>
//int main()
//{
//	int i,m,n,p;
//	printf("水仙花数：");
//	for (i = 100; i <= 999; i++)
//	{
//		m = i / 100;
//		n = i / 10 - m * 10;
//		p = i % 10;
//		if (i == m * m * m + n * n * n + p * p * p)
//			printf("%d ", i);
//	}
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	double sum=0,temp=1;
//	int i;
//	for(i=1;i<=20;i++)
//	{
//		temp = temp * i;
//		sum = sum + temp;
//	}
//	printf("结果=%22.15e\n", sum);
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int m, n,z,p,a;
//	printf("请输入两个正整数m,n:");
//	scanf("%d,%d", &m, &n);
//	if (m > n)
//	{
//		z = n;
//		n = m;
//	    m = z;
//	}
//	p = n * m;
//	while (m != 0)
//	{
//		a = n % m;
//		n = m;
//		m = a;
//	}
//	printf("最大公约数=%d\n", n);
//	printf("最小公倍数=%d\n", p / n);
//	return 0;
//}