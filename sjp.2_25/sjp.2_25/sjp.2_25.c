#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//size_t 无符号整形
//void test(int x)
//{
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = arr;//数组指针
//	void(*pa)(int) = test;//函数指针
//	//int (* )(int)是函数指针，作为一个类型，跟int一样都是类型；
void(*signal(int, void(*）(int))   (int)
	typedef void(*pfun_t)(int)//typedef是类型重定义，将类型类型void(*)(int)d定义为pfun_t
	//所以将上面代码改为：
	pfun_t signal(int, pfun_t);
//		//这是一个函数声明，声明函数为signal，参数有两个，一个为int，一个为函数指针，返回类型为函数指针
//
//}
//int *arr[10]//指针数组
//int （*arr[10])()//函数指针数组



//计算器
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x /y;
//}
//
//void menu()
//{
//	printf("****************************\n");
//	printf("*********1.add **2.sub******\n");
//	printf("*********3.mul***4.div******\n");
//	printf("****************************\n");
//	printf("****************************\n");
//
//
//}


//int main()
//{
//	//先打印一个菜单
//	//然后输入一个数，在判断加减乘除
//	int x, y;
//	int i=1;
//	int sum=0;
//	menu();
//	int(*arr[])(int, int) = { 0, add, sub, mul, div };//重点，易忽略=
//	//scanf("%d", &i);//要进行在一次选择时，不能放外面
//	while(i)
//	{
//		scanf("%d", &i);
//		if (i >= 1 && i<= 4)
//		{
//
//			printf("请输入两个数>:");
//			scanf("%d%d", &x, &y);
//			sum=(*arr[i])(x, y);//函数指针的解引用+
//		}
//		else if (i == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("输入错误");
//		}
	/*	printf("%d\n", sum);
	}*/



		
	//do
	//{
	//	int j, k;
	//	int sum = 0;
	//	scanf("%d", &i);
	//	switch (i)
	//	{
	//	case 0:
	//		printf("退出计算机");
	//			break;
	//	case 1:
	//		printf("请输入两个数");
	//		scanf("%d%d", &i, &j);
	//		sum=add(i,j);
	//		printf("%d\n", sum);
	//		
	//		break;
	//	case 2:
	//		printf("请输入两个数");
	//		scanf("%d%d", &i, &j);
	//		sum=sub(i, j);
	//		printf("%d\n", sum);

	//		break;
	//	case 3:
	//		printf("请输入两个数");
	//		scanf("%d%d", &i, &j);
	//		sum=mul(i, j);
	//		printf("%d\n", sum);

	//		break;
	//	case 4:
	//		printf("请输入两个数");
	//		scanf("%d%d", &i, &j);
	//		sum=div(i, j);
	//		printf("%d\n", sum);

	//		break;
	//	default:
	//		break;
	//	}
	/*} while (i);*/
	
//
////	return 0;
////}
//void test(const char *str)
//{
//
//}
//void(*ptr)(const char *str) = test;//函数指针
//void(*ptrarr[10](consr char *str)//函数指针数组
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一
//个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该
//函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或
//条件进行响应。