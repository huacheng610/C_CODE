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
//	{                                                                                     //递归的两个必要条件：1.存在限制条件，当满足这个限制条件的时候，递归便不在继续。
//		print(n / 10);                                                                                      // 2.每次递归调用之后越来越接近这个限制条件。
//	}
//	printf("%d ", n % 10);
//}                                                  // 递归的思考方法：把大事化小
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
//	printf("hehe\n");                              //函数的递归      递归常见的错误：栈溢出 stack overflow
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
//	sum = Add(a, b);                              //头文件放函数的申明，源文件放函数的定义
//	printf("%d\n", sum);
//	return 0;
//}






//#include<stdio.h>
//int main()
//{
// printf("%d", printf("%d", printf("%d", 43)));     //链式访问    
// return 0;        
// }