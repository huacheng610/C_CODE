#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int my_strlen(char* str)            
{
	int count = 0;                         
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "charlie";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}





//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{                                                                                     //�ݹ��������Ҫ������1.���������������������������������ʱ�򣬵ݹ�㲻�ڼ�����
//		print(n / 10);                                                                                      // 2.ÿ�εݹ����֮��Խ��Խ�ӽ��������������
//	}
//	printf("%d ", n % 10);
//}                                                  // �ݹ��˼���������Ѵ��»�С
//int main()
//{
//	unsigned int num = 0;
//    scanf("%d", &num);
//	print(num);
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");                              //�����ĵݹ�      �ݹ鳣���Ĵ���ջ��� stack overflow
//	main();
//	return 0;
//}





//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 5;
//	int b = 6;
//	int sum = 0;
//	sum = Add(a, b);                              //ͷ�ļ��ź�����������Դ�ļ��ź����Ķ���
//	printf("%d\n", sum);
//	return 0;
//}






//#include<stdio.h>
//int main()
//{
// printf("%d", printf("%d", printf("%d", 43)));     //��ʽ����    
// return 0;        
// }