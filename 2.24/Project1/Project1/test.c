#define _CRT_SECURE_NO_WARNINGS
//һ���ػ�����
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{ 
	char input[20] = { 0 };
	system("shutdown -s -t 60");//systemִ��ϵͳ����
again:
	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n������>:");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)      //strcmp-�Ƚ������ַ���
	{
		system("shutdown-a");
	}
	else
	{
		goto again;
	}
	return 0;
}






//��ӡ�žų˷���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);        //%2d���Ҷ��룬%-2d�������
//		}
//		printf("\n");
//	}
//	return 0;
//}