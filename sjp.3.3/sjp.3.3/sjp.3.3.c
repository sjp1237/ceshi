#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”
//#include<math.h>
//int main()
//{
//	int i;
//	for (i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		int count = 0;
//		int tmp = i;//把i的值赋给tmp，防止i的值改变，使后面的判断错误
//		while (tmp)
//		{
//			//求出数字有几位数
//			count++;
//			tmp /= 10;
//		}
//		 tmp = i;
//		 //再一次将值赋给tmp，前面的tmp已经不是i
//		 //然后在进行各个数的相加
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			//pow（n,m)函数表示求n的m次方
//			//用pow函数时必须引用头文件为<math.h>
//			tmp /= 10;
//		}
//		//进行判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//写一个函数，可以逆序一个字符串的内容
//#include<string.h>
//void swap(char str[])
//{
//	int sz=strlen(str);
//	char *left = str;
//	char *right = str + sz - 1;
//	while (left < right)
//	{
//		char mid = *left;
//		*left = *right;
//		*right = mid;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[100];
//	while (gets(str) != EOF)
//	{
//		swap(str);
//		printf("%s\n", str);
//	}
//	return 0;
//}

//int main()
//{
//	char p = 'a';
//	char* pa = &p;
//	*pa = 'o';
//	printf("%c\n", p);
//	return 0;
//}
//总结：指针是一个变量，是用于存储地址的变量
//int main()
//{
//	int a = 0;//在内存中开辟一块空间
//	int* p = &a;//将a的地址存储在p,&是取地址操作符
//	*p = 9;//通过指针找到a的这块空间，然后把9存储在a，*是解引用操作符，意思是可以找到指针指向的空间
//}
//在32位机器上，指针总是是由32个0\1组成，也就是说在32为机器上，指针的大小为4个字节；因为一个0/1为一个比特位(bit)，8个比特位为一个字节
//例；1000000 00000000 11111111 11101100 这是一个指针在32位机器的内存中存储的样子
//同理在64位机器上，指针的大小为8个字节
//指针的类型
//指针的定义：类型+* 例：int* pa; char* pc
//int*是为了存放int类型的变量 char*是为了存放char变量 short*是为了存放short的变量
//指针的意义：
//int main()
//{
//	int i = 0;
//	int *pa = &i;
//	char*pc = (char*)&i;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("--------------\n");
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}
//%p是打印地址的符号
//由上面代码可以得到 pa和pc的地址相同，但pa+1是pa的地址移动4个字节；pc是pc的地址移动一个字节
//总结；指针的类型决定指针向前或向后移动的一步距离有多大
//int main()
//{
//	int a = 0x11223344;
//	int *pa = &a;
//	char *pc = (char*)&a;
//	*pc = 0;
//	//通过指针pc访问a，只访问一个字节
//	//通过指针pa访问，访问了4个字节
//	*pa = 0;
//	return 0;
//}
//总结；指针类型决定了指针在解引用时能操作该空间的几个字符
//野指针概念:野指针指向的位置是不可知的（随机的、不正确的、没有明确限制）
//指针未初始化
//int main()
//{
//	int a;
//	int* pa = &a;
//	return 0;
//}
//int main()
//{
//	int arr[10] = 0;
//	int *pa = arr;
//	for (int i = 0; i <= 11; i++)
//	{
//		*(pa + 1) = 0;
//	}
//	//当指针p超出数组arr的范围时，p就是野指针	
//	return 0;
//
//}
//指针与数组
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//可见，打印的两个地址相同
//	//所以，数组名表示的是首元素的地址
//	return 0;
//}
//二级指针
//指针是一个变量，同样它也有自己的地址，将指针的地址存储在另一个指针，存储的指针为二级指针
//二级指针的定义；
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int* *pc = &pa;
//	//将指针pa的地址存储在pc，pc为二级指针
//	//二级指针的类型为int* *
//	*pc
//	//解引用pc找到的是pa
//	*pa
//	//解引用pa找到的是a
//	**pc = 10;
//	//先解引用找到指针pa，在解引用找到a，然后将10赋给a
//	return 0;
//}
////指针数组
////指针数组是存储指针的数组
//int* arr[10]
//arr是一个存储10个元素的数组
//数组中每个元素为指针；
//每个指针的类型为整形
#include <stdio.h>
int main()
{
	int a = 10;
	printf("%d\n", a);//在内存中开辟一块空间
	int *p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
	//**将a的地址存放在p变量中，p就是一个之指针变量**。
	*p = 2;
	printf("%d\n", a);
	return 0;
}



