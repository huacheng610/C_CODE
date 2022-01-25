#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	return 0;
////}
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "天官赐福",46.8 };
	struct Book* pb = &b1;
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	/*
	/*	printf("书名:%s\n", b1.name);
	printf("价格%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格:%d\n", b1.price);*/
	/*double d = 3.14;
	double* pd = &d;
	printf("%d\n", sizeof(pd));*/
	/**pd = 5.58;
	printf("%lf\n", d);
	printf(" % lf\n", *pd);*/
	/*int a = 10;
	int* p = &a;
	*p = 20;
	printf("a=%d\n", a);*/
	return 0;
}