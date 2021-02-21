#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int c, b, sum;
	scanf("%d%d", &c, &b);
	sum = add(c, b);
	printf("%d\n", sum);
	return 0;
}
size_t my_strlen (const char * str)

//int main()
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//}

//{ 
//	printf("%d\n", 'a');
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');
//	printf("%c", '\v');//\t 水平制表符 空字符
//	//printf("\a\a");//\a会响
//	printf(" ");
//	printf("%c", '\123');// \ddd八进制 \xdd十六进制最后都转化为十进制，然后在于相应的ASII码值对应 \123表示一个字符
//}
//{
//printf("\328");//注意八进制没有8这个数字，所以\328算两个字符
//}

//{
//	int input = 0;
//	printf("加入比特学习\n");
//		printf("你要好好学习吗（1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("拿个好offer\n");
//	else
//	printf("回家卖红薯");
//	
//}

//{
//	int arr2[10] = { 1, 2, 3 };//不完全初始化
//}

//{
/*int a = 3;
int b = 5;
int c = 0;
c = a&b;
printf("%d\n", c);*/

 &二进制位与，要有两个1才为1；
1001
1100
1000
|二进制位或只要有1就是1，两个同时为0才为0；
1001
1100
1101
^异或 相同为0；不相同为1
0110
1010
1100
}

//{
//	int a = 10;
//	int b;
//	/*b = a++;*///后置++先使用 再++
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//10
//	printf("%d\n", a++);//10
//	printf("%d\n", a);//11
//}

//{
//	b = (++a) + (++a) + (++a);//不能写出这样的代码
//}

//{
//	int a = 0;
//	int b = 1;
//	int c = a&&b;
//	printf("%d\n", c);
//		
//}

//{
//	int a = (a=1, 2, 3,a+ 4);//逗号表达式会从左到右依次计算
//	printf("%d\n", a);
//
//}


//int main()
//{
//	int a,b,c;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//		a = b;
//	printf("%d\n", a);
//	return 0;
//
//}
//

//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int c;
//	int b = 20;
//	c = max(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//
void test()
{
	static int a = 1;//stastic改变变量的生命周期，每进一次函数a都不会在重新改变为1；作用域没有改变
	a++;
	printf("%d ", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		i++;
		test();
	}
//}

extern int gva; //extern 声明外部符号
int main()
{
	printf("%d\n", gva);
}
全局变量具有外部链接属性，其它源文件可以通过声明使用
stastic修饰全局变量后，把外部链接属性改为内部链接属性

extern int add(int x, int y);//声明外部函数

register //把a的值建议储存在寄存器里，寄存器不能取地址；
register int a=9；

#define 定义
#define max 10
#define str"hello bit"
#define nex'a'
#define add(x,y)(x+y)//宏定义无类型
//
int main()
{
	int a = 0;
	printf("%p/n", &a);//%p按照地址的格式打印出来
	//&a取出a的地址
	//出来的是a的首地址
	int* pa = &a;//pa是存放地址的-把pa叫做指针变量 *告诉我们的是pa是指针
	*pa;//解引用操作
}

//结构体创建
//struct stu
//{
//	//描述学生属性
//	char name[20];//名字 字符串
//	short age;//年龄
//
//	char sex[10];
//};
//int main()
//{    //结构体成员的初始化和变量的创建
//	struct stu s1={ "张三",20,"男" };
//	printf("%s %d %s\n", s1.name, s1.age, s1.sex);//s1.name...
//}

//#include<stdio.h>
//int main()
{
	int i = 1;
	while (i <= 3)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if ((a + b>c) && (a + c>b) && (b + c>a))//判断是否为三角形
		{
			if (a == b&&b == c)//判断是否为等边三角形
				printf("Equilateral triangle!\n");
			else if ((a == b) && (a != c) || (a == c) && (a != b) || (b == c) && (a != b))//判断是否为等腰三角形
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
			printf("Not a triangle!");
		i++;
	}
	return 0;
}


//#include<stdio.h>
//int main()
//{
//	int o=0, j=0;
//	int N = 0;
//	int i = 1;
//	scanf("%d", &N);
//	while (i <= N)
//	{
//		if (i % 2 == 0)//判断是否为偶数
//			o+=1;
//		else
//			j+=1;
//		i++;
//	}
//	printf("%d %d",o,j);
//}

//0-数字0
//'0'-ASCII码值为48
//'/0'-的值为0 与0的本质相同
//null 空指针-0

//
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)//scanf读取失败返回的值为EOF;
//	{
//		if (a >= 140)
//			printf("你是个小天才\n");
//	}
//
//	return 0;
//}

int main()
{
	int a = 1;
	int b = 3;
	if (a==2)
	if (b ==3)
		printf("heheh\n");
	else
		//else跟最近的if相匹配
		printf("hahaha\n");
	return 0;

}
//ebp esp eax ebx ecx edx是常见的寄存器，ebx和esp经常用来存放地址
