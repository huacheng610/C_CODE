#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//ctrl+z  EOF--end of file->-1
	{
		putchar(ch);
	}
	return 0;
}



//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}






//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d",i);
//		i++;
//	}
//	return 0;
//}





//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}




//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch(整形表达式)
//	{
//	case 1://case(整形常量表达式)
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}


//int main()
//{
//
//	int i = 3;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//		printf("%d ,i");
//		i += 2;
//	}
//	return 0;
//}