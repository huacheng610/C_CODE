#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d", i);
	}
	return 0;
}






//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}