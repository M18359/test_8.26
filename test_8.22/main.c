#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 1


//递归实现n的k次方
double Pow(int n, int k)
{
	//k>1
	//n*P(n,k-1)--n*n*P(n,k-2)---n*n...P(n,1)---n*n...n
	//k=0---1
	//k<0---1/pow()
	if (k >= 1)
		return n * Pow(n, k - 1);
	else if (k == 0)
		return 1;
	else
		return 1.0 / Pow(n,-k);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%f", ret);
	return 0;
}


//int Digitsum(unsigned int n)
//{
//	//D1234---D123 +4---D12 +3 +4--D1 +2 +3 +4--1+2+3+4
//	if (n >= 10)
//		return n % 10 + Digitsum(n / 10);
//	else
//		return n;
//}
////输入一个数，计算其各位数之和
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int ret = Digitsum(n);
//	printf("%d", ret);
//	return 0;
//}





//int my_strlen(char* str)
//{
//	int sum = 0;
//	while(*str != '\0')
//	{
//		sum++;
//		str += 1;
//	}
//	return sum;
//}
////逆序递归实现2
//void re_str2(char arr[], int left, int right)
//{
//	char tmp = 0;
//	tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if(left <= right)
//	{
//		re_str2(arr, left + 1, right - 1);
//	}
//}

//逆序递归实现1
//void re_str(char* str)
//{
//	//abcdef--先让af呼唤再向里靠拢
//	char tmp = *str;
//	int len = my_strlen(str);
//	
//	*str = *(str + len - 1);
//	//通过把最右侧字符变为\0实现字符串向里靠拢
//	*(str + len - 1) = '\0';
//	if(my_strlen(str+1)>=2)
//		re_str(str + 1);
//	*(str + len - 1) = tmp;
//}
//逆序排序
//void reserve_string(char arr[],int len)
//{
//	int i = 0;
//	for (i = 0; i < (len - 1) / 2; i++)
//	{
//		char tmp = 0;
//		tmp = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - 1 - i] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	/*int len = 0;
//	len = strlen(arr);
//	reserve_string(arr,len);
//	printf("%s", arr);*/
//
//	/*re_str(arr);
//	printf("%s", arr); */
//
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	re_str2(arr, left, right);
//	printf("%s", arr);
//	return 0;
//}


//int main()
//{
//	int arr[] = {1,2,3,4,5};
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//趟数
//	{
//		int flag = 1;//假设这一趟有序
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)//比较的对数
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("第%d趟有序\n", i + 1);
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,2,4,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//冒泡排序--把arr排成升序
//void maopao(int arr[], int sz)
//{
//	int i = 0;
//	
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//假设这一次有序
//		int j = 0;
//		for (j = i + 1; j < sz; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tmp = 0;
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("第%d次有序\n",i);
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,2,4,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}
//int main()
//{
//	//int arr[10] = { 1,2,3 };//1230000000
//	//char arr1[20] = { 'a','b','c' };//a b c 0 0 0...
//	//char arr2[20] = "abc";//a b c \0 00000...
//	//int arr3[3][4] = { 1,2,3,4,5 };
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//int arr5[][4] = { {1,2,3,4},{5,6,7,8} };
//	int i = 0;
//	int len = sizeof(arr[0]) / sizeof(arr[0][0]);
//	printf("%d", len);
//	/*for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < len; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	return 0;
//}
