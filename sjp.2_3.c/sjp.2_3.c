#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "陈梓恩，情人节快乐！！！！！\0";
	char arr2[] = "****************************";
	int left = 0; 
	int right = strlen(arr1) - 1;//strlen需要引用头文件为#include<string.h>
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);//单位是毫秒 !!!!!!!!!注意S为大写，需引用头文件为#include<windows.h>
		system("cls");//system执行系统命令的，cls清空屏幕的意思
	}
	printf("%s\n", arr2);

	return 0;
}

//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	printf("请输入密码： \n");
//	for (i = 0; i <3; i++)
//	{
//		scanf("%s", password);
//		//假设密码为123456
//		if (strcmp(password, "123456") ==0)//strcmp的头文件为#include<string.h> 
//			//两个字符串比较不能用==，用strcmp
//		{
//			printf("确认成功，密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i = 3)
//	{
//		printf("你的号已被屏蔽\n");
//	}
//
//	return 0;
//}

//void play()
//{
//	printf("请输入你猜的值：\n");
//	int b = 0;
//	 int ret= rand()%100+1;//使随机数在1到100之间//rand的使用需要srand的配合,需要引入头文件为#include<stdib.h>
//	 while (1)
//	 {
//		 scanf("%d", &b);
//		 if (b > ret)
//		 {
//			 printf("猜大了\n");
//		 }
//		 else if (b < ret)
//		 {
//			 printf("猜小了\n");
//
//		 }
//		 else
//		 {
//			 printf("恭喜你，猜对了\n");
//			 break;
//		 }
//	 }
//
//	 
//}
//
//
//
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*********1.play**************\n");
//	printf("*********0.exit**************\n");
//	printf("*****************************\n");
//}
//int main()
//{
////整个过程只设置一次
//	srand((unsigned)time(NULL));//time(指针变量）//需要引入头文件为#include<time.h> //time是时间戳 是从计算机开始到现在的时间 单位为秒
//	int i = 0;
//	menu();
//	do
//	{
//		printf("请选择是否需要玩游戏（1/0)：\n");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			play();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择");
//		}
//	} while (i);
//	return 0;
//}
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	while(1)
//	{
//		system("shutdown -s -t 60");
//		char arr1[20] = "";
//		printf("你的电脑将在一分后关闭，输入：“沈家鹏是大帅逼”则取消关机\n");
//		scanf("%s", arr1);
//		if (strcmp(arr1, "沈家鹏是大帅逼") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}

//sqrt()开方的库函数 需要引入头文件#include<math.h>

//int main()
//{
//	int a, b, c;
//	while (scanf("%d%d%d", &a, &b, &c) != EOF)
//	{
//		printf("sjp");
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[20] = "abcde mmmm";
//	memset(arr1, 'e', 5);
//	//打印出来为eeeee mmmm
//	printf("%s", arr1);
//	return 0;
//}

//void swap(int* x, int* y)
//{
//	int z = *x;//*x是直接根据地址找到x的空间相应的值
//	*x = *y;
//	*y = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d，b=%d\n", a, b);
//	swap(&a, &b);
//	//如果不传地址，则想x，y会开辟相应的地址，则a，b均不会改变
//	printf("交换后:a=%d,b=%d\n", a, b);
//	return 0;
//}

//函数的实参可以是常量，变量，表达式，函数，但必须是一个确定的值
//实参传递给形参，形参是实参的临时拷贝，对形参的修改不会改变实参； 传地址时，形参可通过地址找到实参并将它修改
//当一个函数想要改变外部的值时，需要传地址过去

//int prime(int i)
//{                            
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//		{
//			break;
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int i = 1;
//	for (i = 100; i <= 200; i++)
//	{
//		if ((prime(i)) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int binary_search(int arr[],int k,int sz)
////数组传参的时候传的是首元素的地址，不会把整个数组传过去
//{
//	 int left = 0;
//	 int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left=left + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right=right - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	if (left>right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == (-1))
//	{
//		printf("对不起，找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d", ret);
//	}
//}

//
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	while (scanf("%d %d %d", &i, &j, &k) !=EOF);
//	{
//		if (i<j)
//		{
//			i = j;
//		}
//		if (i<k)
//		{
//			i = k;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	while(a%b != 0)
//	{
//		int c = a%b;
//		a = b;
//		b = c;
//
//	}
//	printf("最大公约数为:%d\n", b);
//
//	return 0;
//}
//
//打印100-200之间的素数
//int main()
//{
//	int i,j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			else
//			{
//				printf("%d ", i);
//				break;
//			}
//		}
//	}
//	return 0;
//
//}
//int prime_number(int i)
//{
//	int k;
//	for (k = 2; k <=sqrt(i); k++)
//	{
//		if (i%k != 0)
//		{
//			return 1;//返回1表示是素数，返回0表示不是素数
//		}
//		else
//		{
//			return 0;
//		}
//	}
//}
//int main()
//{
//	int i,j;
//	for (i = 100; i <= 200; i++)
//	{
//		j= prime_number(i);
//		if (j == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//
//	return 0;
//}
//int year(int i)
//{"
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 ==0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i,k;
//	scanf("%d", &i);
//	 k = year(i);
//	if (k == 1)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}
//void swap(int* i, int* k)
//{
//	int p = *i;
//	*i = *k;
//	*k = p;
//}
//int main()
//{
//	int i = 100;
//	int k = 200;
//	printf("交换前i=%d,k=%d\n", i, k);
//	swap(&i, &k);
//	printf("交换后i=%d,k=%d\n", i, k);
//	return 0;
//}
//-1的原码10000000000000000000000000000001
//反码，符号位不动，其余相反1111111111111111110
//补码，反码加一1111111111111111111111111
//符号操作符是用补码进行运算
//zz这三个操作符只能作用于整形，符号位也一起运算
//按（二进制位）或|；一个1位1
//按位与&;两个1为1
//按为异或^;相同为0，相异为1

//!逻辑反操作符
//int main()
//{
//	int sort = 0;//假设sort为假
//	if (!sort)//！sort为真
//	{
//
//	}
//}
//sizeof是一个操作符，不是一个函数；可以省略括号 
//&&逻辑与，只关注真假，两个真才为真
//int main()
//{
//	int a = 5;
//	int b = 6;
//	int c = a&&b;//c为1
//}
//逗号表达式，从左向右依次执行，整个表达式的结果为最后一个表达式的结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a = a + 12, b, b = a + 2);
//	printf("%d\n", c);
//	return 0;
//}