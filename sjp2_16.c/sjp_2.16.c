#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int calc_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m, n;
//	while (scanf("%d %d", &m, &n) == 2)
//	{
//		printf("%d\n", calc_diff_bit(m, n));
//	}
//	return 0;
//}
#include<math.h>
//实现一个函数判断是否为素数
//void judge(int i)
//{
//	int j;
//	for (j= 2; j <= sqrt(i); j++)
//	{
//		if (i%j != 0)\
//		{
//			printf("%d ", i);
//			break;
//		}
//		
//	}
//}
//int main()
//{
//	int i;
//	for (i = 101; i <= 200; i += 2)
//	{
//		judge(i);
//	}
//
//	printf("\n");
//	return 0;
//}
//实现一个函数判断是否为闰年
//void year(int i)
//{
//	if (i % 4 == 0 && (i % 100) != 0 || i % 400 == 0)
//	{
//		printf("是闰年\n");
//
//	}
//	else
//		printf("不是闰年\n");
//}
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	year(i);
//	return 0;
//}
//交换两个整数
//void swap(int* i, int *j)
//{
//	int ret = *i;
//	*i = *j;
//	*j = ret;
//}
//
//int main()
//{
//	int i = 100;
//	int j = 200;
//	printf("交换前：i=%d,j=%d\n", i, j);
//	swap(&i, &j);
//	printf("交换后：i=%d,j=%d\n", i, j);
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	//int *pa = &a;
//	//指针类型决定指针解引用时访问内存中几个字节
//	//int 类型访问4个字节 char访问1个字节
//	char* pa = &a;
//	*pa = 0;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int *pa = arr;
//	char *pc = arr;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("-------------------------\n");
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//指针类型决定了指针+/-时走多大的距离
//	return 0;
//}
//野指针就是指向的空间是未知的（随机的，不正确的，没有明确限制的）（没有主人)
//int main()
//{
//	int *p;//局部变量指针未初始化，为随机值，为野指针
//	*p = 20;
//}
//越界访问也会出现野指针的问题
//int main()
//{
//	int arr[10] = { 0 };
//	int *pa = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(pa + i) = 5;
//	}
//	return 0;
//}
//避免野指针
//1.指针初始化，
//2.避免指针越界
//3.指针闲置时将它转化为空指针
//4。应用时判断指针是否为空指针 if(pa!=NULL)
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;    // ++a：加给a+1，结果为6，用加完之后的结果给c赋值，因此：a = 6  c = 6
//	b = ++c, c++, ++a, a++;  // ++c：c为7 c++：c值不变 ++a：a的值为7，a++：a值不变，b取a的值：7
//	// 表达式结束时，c++和a++会给a和c分别加1，此时c：8，a：8，b:7
//	b += a++ + c; // a先和c加，结果为16，在加上b的值7，比的结果为23，最后给a加1，a的值为9
//	printf("a = %d b = %d c = %d\n:", a, b, c); // a:9, b:23, c:8
//	return 0;
//}
//交换两个数
//int main()
//{
//	int i = 100;
//	int j = 200;
//	printf("i=%d,j=")
//	i = i^j;
//	j = i^j;
//	i = i^j;
//	printf("i=%d,j=%d\n", &i, &j);
//
//
//
//	return 0;
//}
//int main()
//{
//	int arr[2][3] = { 0 };
//	int *p = arr;//这里的arr是首元素地址，但二维数组的首元素地址是第一行整个地址
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int *p =&a;//一级指针
//	int * * pp = &p;//二级指针
//	**pp = 20;//**p解引用找到a
//	printf("%d\n", a);
//}
//指针数组
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int *arr[] = { &a, &b, &c };//指针数组的定义
//
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//p指针存的首元素地址
//	printf("%s\n", p);//当打印首元素地址直接将abcdef打印出来
//	int *arr[] = { "abcdef", "hello", "bit" };
//	for (int i = 0; i <= 2; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//指针减去指针的绝对值为指针之间的个数
//	指针减去指针的前提条件是：两个指针指向同一块连续空间
//	return 0;
//
//}
//strlen_my(const char* str)
//{
//	const char* star = str;
//	while (*str)
//	{
//		str++;
//
//	}
//	return str - star;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen_my(arr);
//	printf("%d ", len);
//	return 0;
//}
//strlen的返回值为无符号整数，两个无符号整数相减大于等于0；
//void print(int i)
//{
//	int j = 0;
//	int k = 0;
//	for (j = 1; j<= i; j++)
//	{
//		for (k = 1; k <= j; k++)
//		{
//			printf("%d*%d=%2d ", j, k, k * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}

//int main()
//{
//	int i;
//	int arr[7] = { 0 };
//	for (i = 0; i <= 6; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//sizeof计算的时候只关心空间大小


//编写一个函数 reverse_string(char * string)（递归实现）
//实：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :逆序之后数组的内容变成：fedcba
//int reverse_string(char arr[])
//{
//
//}
//int strlen_(char arr[])
//{
//	int count = 0;
//	char* p = arr;//这里的p指针定义不能用int 原本arr为。
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	int ret=strlen_(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int a=1;
//	/*int *p = &a;*///int 访问4个字节
//	char *p = &a;// char* 访问1个字节
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//-128 的原码100000000000000000000000000010000000
//	//       补码111111111111111111111111111110000000
//	//    a的值  10000000
//	printf("%u\n", a);
//	//%u打印无符号整形
//	//打印char a,需要整形提升 11111111111111111111111110000000-还是补码
//	//无符号整数跟正数一样：补码跟原码相同
//	//无符号数没有符号位
//	//打印%d打印的是原码
//	//整形提升，如果有符号则按符号位来填充
//	//           如果为无符号则直接按0来填充
//}

//判断机器的大端或小端
//#include <stdio.h>
//int check_sys()
//{
//	int i = 1;
//	return (*(char *)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d", a, b, c);
	return 0;
}