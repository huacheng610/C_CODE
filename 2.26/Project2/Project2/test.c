#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int is_prime(int n)
{
	int j= 0;
	for (j = 2; j <n; j++)
	{
		if (n % j == 0)
			return 0;
	}
	if(j==n)
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}





//#include<stdio.h>
//void Swap(int*pa, int*pb)
//{
//	int tmp = 0;
//	tmp =*pa;
//	*pa = *pb;
//	*pb= tmp;                                             //��ʵ�δ����βε�ʱ���β���ʵ�൱��ʵ�ε�һ����ʱ���������βε��޸��ǲ���ı�ʵ�ε�
//}
//int main()
//{
//	int a = 7;
//	int b = 5; printf("a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}