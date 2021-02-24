#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;//把数组arr的地址赋给数组指针变量pa
//	//&arr表示整个数组的地址，arr表示数组首元素的地址
//	int* pc = arr;
//	printf("%d\n", pa);
//	printf("%d\n", pa + 1);
//	printf("-----------------\n");
//	printf("%d\n", pc);
//	printf("%d\n", pc + 1);
//	return 0;
//}
//void print1(int arr[3][3], int row, int col)
//{
//	int i;
//	int j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[3], int row, int col)
//{
//	int i;
//	int j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d", p[i][j]);
//			//p[i]<==>p+i
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
//	print1(arr, 3, 3);
//	print2(arr, 3, 3);
//	return 0;
//}

//#include <stdio.h>
//void test(int arr[])//ok? 可以
//{}
//void test(int arr[10])//ok?
//{}
//void test(int *arr)//ok?
//{}
//void test2(int *arr[20])//ok?
//{}
//void test2(int **arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}
//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int *arr)//ok？
//{}
//void test(int* arr[5])//ok？
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int **arr)//ok？
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
//
//#include <stdio.h>
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);//算出数组有多少个元素
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}
//int main()
//{
//	int i, j, a=0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 }, *q[4], k;
//	for (k = 0; k < 4; k++)
//	{
//		q[k] = &a[k * 3];
//	}
//	//得到的结果为去q[0]=2;q[0][1]=4....
//	printf("%d\n", q[3][1]);//q[3]=q[3][0]=20  q[3][1]=22
//	return 0;
//}
//int main()
//{
//	char a='a';
//	int b=4;
//	printf("%d",a*b);
//	return 0;
//}

//void print(int a)
//{
//
//}
//int main()
//{
//	//函数指针的创建
//	void (*pa)(int a)=print
//print &print 都表示函数的地址，这两个是相同的
//	return 0;
//}
#include <stdio.h>
void test()
{
	printf("hehe\n");
}
int main()
{
	printf("%p\n", test);
	printf("%p\n", &test);
	return 0;
}