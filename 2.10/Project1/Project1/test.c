#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <=n; i++)
	{
		ret = ret * i;
	}
	printf("ret=%d\n", ret);
	return 0;
}




//int main()
//{
//	int i = 0;
//	for (i=0; i < 10; i++)
//	{
//		int j = 0;
//		for (j=0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}






//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");       //forѭ�����жϲ��������ʡ�ԣ����ж��������Ǻ�Ϊ��
//	}
//	return 0;
//}
//





//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)                    //ǰ�պ�����
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}