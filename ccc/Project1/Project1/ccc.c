#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	void intput(int*);
	void swap(int*);
	void output(int*);
	int a[10] = { 0 };
	printf("������ʮ������\n");
	intput(a);
	swap(a);
	output(a);
	return 0;
}
void intput(int *a)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
}

void swap(int *a)
{
	int *max,*min,temp,*p;
	max = min = a;
	for (p = a + 1; p < a+10; p++)
	{
		if (*p > *max)
			max = p;
		else if (*p < *min)
			min = p;
	}
	temp = a[0];
	a[0] =*min;
	*min = temp;
	if (max == a[0]) max = min;
	temp = a[9];
	a[9] = *max;
	*max = temp;
}
void output(int* a)
{
	int* m;
	printf("�������ʮ����Ϊ��\n");
	for (m = a; m < a+10; m++)
		printf("%5d", *m);
	printf("\n");
}






   
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void swap(char*, char*);
//	char a[10], b[20], c[30];
//	printf("�����������ַ�����\n");
//	gets(a);
//	gets(b);
//	gets(c);
//	if (strcmp(a, b) > 0) swap(a, b);
//	if (strcmp(a, c) > 0) swap(a, c);
//	if (strcmp(b, c) > 0) swap(b, c);
//	printf("��С����˳��Ϊ��\n");
//	printf("%s\n%s\n%s\n", a, b, c);
//	return 0;
//}
//void swap(char*p1, char*p2)
//{
//	char p[30];
//	strcpy(p, p1); strcpy(p1, p2); strcpy(p2, p);
//}










//#include<stdio>
//int main()
//{
//	void min(int *p1, int *p2,int *p3);
//	int a, b, c;
//	int* p1=0, * p2=0, * p3=0;
//	printf("��������������:\n");
//	scanf("%d,%d,%d", &a, &b, &c);
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	min(p1, p2, p3);
//	printf("%d %d %d",a,b,c);
//	return 0;
//}
// void min(int *p1, int *p2,int *p3)
//{ 
//	 if (*p1 > *p2)
//	 {
//		 int temp;
//		 temp = *p1;
//		 *p1 = *p2;
//		 *p2 = temp;
//	}
//	 if (*p1 > *p3)
//	 {
//		 int temp;
//		 temp = *p1;
//		 *p1 = *p3;
//		 *p3 = temp;
//	 }
//	 if (*p2 > *p3)
//	 {
//		 int temp;
//		 temp = *p2;
//		 *p2 = *p3;
//		 *p3 = temp;
//	 }
//}
//








//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void sort(char []);
//	char a[10];
//		int i,flag;
//	for (flag = 1; flag == 1;)
//	{
//		printf("������ʮ���ַ���\n");
//		scanf("%s", &a);
//		if (strlen(a) > 10)
//			printf("����������");
//		else
//			flag = 0;
//	}
//	sort(a);
//	printf("��С��������Ϊ\n ");
//	for (i = 0; i < 10; i++);
//	printf("%c", a[i]);
//	printf("\n");
//	return 0;
//}
//void sort(char a[10])
//{
//	int m, n;
//	char temp;
//	for (m = 0; m < 10; m++)
//	{
//		for (n = 0; n < 10 - m&& (a[n] != '\0');n++)
//		{
//			if (a[n] > a[n + 1])
//			{	
//				temp = a[n];
//				a[n] = a[n + 1];
//				a[n + 1] = temp;
//			}
//		}
//	}
//
//}














//#include<stdio.h>
//void swap (int arr[3][3])
//{
//	int i, j,m;
//	for (i= 0; i< 3; i++)
//	{
//		for (j=i+1; j < 3; j++)
//		{
//			m = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = m;
//		}
//	}
//}
//int main()
//{
//	void swap(int arr[3][3]);
//	int i, j,arr[3][3];
//	printf("������һ������:");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	printf("ԭ����Ϊ��\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%5d", arr[i][j]);
//		printf("\n");
//	}
//	swap(arr);
//	printf("�û��������Ϊ:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%5d", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//
//
//

////�ж�һ�����Ƿ�Ϊ����
////#include<stdio.h>
////int main()
////{
////	int m,i,n=0;
////	printf("������һ����:");
////	scanf("%d", &m);
////	for (i = 1; i <= m; i++)
////	{;
////		if (m % i == 0) n++;
////	}
////	if (n > 2)
////		printf("%d��������", m);
////	else
////		printf("%d������", m);
////	return 0;
////}