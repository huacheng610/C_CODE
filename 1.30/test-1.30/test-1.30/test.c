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
//	switch (day)//switch(���α��ʽ)
//	{
//	case 1://case(���γ������ʽ)
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
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