#include <stdio.h>
#include <string.h>

int my_strlen(char* str)
{
	int sum = 0;
	while(*str != '\0')
	{
		sum++;
		str += 1;
	}
	return sum;
}
//����ݹ�ʵ��
void re_str(char* str)
{
	//abcdef--����af���������￿£
	char tmp = *str;
	int len = my_strlen(str);
	
	*str = *(str + len - 1);
	//ͨ�������Ҳ��ַ���Ϊ\0ʵ���ַ������￿£
	*(str + len - 1) = '\0';
	if(my_strlen(str+1)>=2)
		re_str(str + 1);
	*(str + len - 1) = tmp;

	
}
//��������
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
int main()
{
	char arr[] = "abcdefg";
	/*int len = 0;
	len = strlen(arr);
	reserve_string(arr,len);
	printf("%s", arr);*/
	re_str(arr);
	printf("%s", arr); 

	return 0;
}


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
//	for (i = 0; i < sz - 1; i++)//����
//	{
//		int flag = 1;//������һ������
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)//�ȽϵĶ���
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
//			printf("��%d������\n", i + 1);
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
//ð������--��arr�ų�����
//void maopao(int arr[], int sz)
//{
//	int i = 0;
//	
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//������һ������
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
//			printf("��%d������\n",i);
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
