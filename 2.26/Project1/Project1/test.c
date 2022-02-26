#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int get_max(int x, int y)
{
	if (x>y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}




//#include<string.h>
//int main()
//{
//	char arr[] = "charlie";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//


//int main()
//{
//	char arr1 = "bit";
//	char arr2[20] = "############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}