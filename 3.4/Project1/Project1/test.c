#define _CRT_SECURE_NO_WARNINGS
//��һ�ַ���
#include<stdio.h>
int count = 0;
int Fib(int n)
{
	if (n == 3)//���Ե�����쳲��������ļ������
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	printf("count=%d\n", count);
	return 0;
}


////�ڶ��ַ���
//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}