#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if(1==i%2)//判断是否为奇数
		printf("%d ", i);
		i++;
	}
	return 0;
}

int main()
{
	int i;
	for (i = 1; i <= 100; i += 2)//少了判断奇数，提高了效率
	{
		printf("%d ", i);

	}
	return 0;
}

//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day) //switch(整型表达式）
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		break;
//	}
//}

//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;//continue是跳过本次循环；直接到循环的判断部分，进行下一次的循环的判断
//		printf("%d ", i);
//	}
//	return 0;
//}

int main()
{
	int m;
	while ((m = getchar()) != EOF)//getchar从键盘读取一个字符转化为ASIIL码值；putchar将ASIIL码值转化为字符并打印；
		//getchar读取失败时返回EOF;让它停下按ctrl+z
	{
		putchar(m);
	}
//}

int main()
{
	int ch = 0;
	char password[10] = {0};//password本身就是一个地址，所以scanf不用取地址符号
	printf("请输入密码\n：");
	scanf("%s", password);//scanf不能读取空格和\n；getchar()会读取它们
		printf("请确认密码Y/N\n");
	while ((ch=getchar())!='\n')//清理缓冲区
	{
		 ;
	}
	ch = getchar();
	if (ch == 'Y')
		printf("确认成功\n");
	else
		printf("确认失败\n");
	
	return 0;

}

//for (;;)//for循环三个部分都可以省略；判断部分省略恒为真

//打印100个hehehe
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=0; i < 10; i++)
//	{
//		for (j=0; j < 10; j++)
//		{
//			printf("hehehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int ret = 1;
//	int i,j,sum=0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//
//	}
//	printf("%d ", sum);
//	return 0;
//
//}
//
//int main()
//{
//	int i, ret = 1, sum=0;
//	for (i = 1; i <= 3; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d ",sum);
//}


//二分查找查找有序数组的某个数
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算arr数组有多少个元素；
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//		return 0;
//}

//int main()
//{
//	int a, b, c,ret=0;
//	scanf("%d%d%d", &a, &b, &c);
//	//先用a跟b和c进行比较，然后才用b和c进行比较
//	if (b > a)
//	{
//		ret = a;
//		a = b;
//		b = ret;
//	}
//	if (c > a)
//	{
//		ret = a;
//		a = c;
//		c = ret;
//	}
//	if (c > b)
//	{
//		ret = b;
//		b = c;
//		c = ret;
//	}
//	
//
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i<=100; i++)
//	{
//		if ((i % 3) == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//打印闰年。
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//			printf("%d ", i);
//	}
//}
//


//int main()
//{
//	int count = 0;
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i %10 == 9)//检查个位数上9的个数
//			count++;
//		if (i / 10 == 9)//检查十位数上9的个数
//			count++;
//	}
//	printf("%d ", count);
//
//}


//题目1-1/2+1/3-1/4.........
//int main()
//{
//	int i, j = 1;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (1.0/ i)*j;
//		j = (-j);//奇数为正，偶数为负
//
//	}
//	printf("%.2lf ", sum);
//	return 0;
//}


//求10个数的最大值
//int main()
//{
//	int i;
//	int arr[10] = { 0 };
//	/*int arr[10] = { 1, 2, 4, 56, 7, 46, 78, 98, 123, 58 };*/
//	int max = arr[0];
//	for ( i = 0; i <= 9; i++)//
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i <= 9; i++)
//	{
//		
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d ", max);
//	return 0;
//
//}

//打印九九乘法表
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%2d=%2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int k=4;
	int sz = (sizeof(arr) / sizeof(arr[0]));
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		//int mid = (left + right) / 2;
		//这种写法求平均值可能会溢出
		//较好的平均值求法应该为
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
		{
			right = right - 1;
		}
		else if (arr[mid] < k)
		{
			left= left + 1;
		}
		else
		{
			printf("找到了，下标为：%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("对不起，找不到");
	return 0;
}