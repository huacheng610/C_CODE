#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
		}
	}
	return 0;
}


//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };  //��������    ��ά������п���ʡ�ԣ��в�����ʡ��
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)                             //һά�������ڴ����������           ------------------��
//	{                                                                                       //�͵�ַ           //�ߵ�ַ
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//



//int main()  
//{
//	/*char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", arr[i]);
//	}*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);              //�±����ò�����--[]���±��0��ʼ
//	}
//	return 0;
//}
//