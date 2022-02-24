#define _CRT_SECURE_NO_WARNINGS
//一个关机程序
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{ 
	char input[20] = { 0 };
	system("shutdown -s -t 60");//system执行系统命令
again:
	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)      //strcmp-比较两个字符串
	{
		system("shutdown-a");
	}
	else
	{
		goto again;
	}
	return 0;
}






//打印九九乘法表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);        //%2d向右对齐，%-2d向左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}