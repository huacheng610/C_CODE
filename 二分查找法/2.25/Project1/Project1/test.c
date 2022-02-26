#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>   //������arr��һ��ָ��
int binary_search(int arr[], int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)        //�ж�����������С�ڵ���
	{
		int mid = (left + right) / 2;    //(��仰������ѭ������)    //�м�Ԫ���±�
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)                       //�����ڲ���������������Ԫ�ظ������������ģ����ⲿ���Ԫ�ظ����󴫽�ȥ
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}                              //��Ҫ�����ҵõ����������Ҫ�����Ҳ��������
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;              //���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}






//��ӡ2000-2500�������
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