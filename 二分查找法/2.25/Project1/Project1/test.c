#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>   //本质上arr是一个指针
int binary_search(int arr[], int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)        //判断条件必须是小于等于
	{
		int mid = (left + right) / 2;    //(这句话必须在循环里面)    //中间元素下标
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)                       //函数内部求参数部分数组的元素个数是做不到的，在外部求好元素个数后传进去
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}                              //既要处理找得到的情况，又要处理找不到的情况
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;              //传递过去的是数组arr首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}






//打印2000-2500间的闰年
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for(year=2000;year<=2500;year++)
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	return 0;
//}