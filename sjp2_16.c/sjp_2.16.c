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
//ʵ��һ�������ж��Ƿ�Ϊ����
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
//ʵ��һ�������ж��Ƿ�Ϊ����
//void year(int i)
//{
//	if (i % 4 == 0 && (i % 100) != 0 || i % 400 == 0)
//	{
//		printf("������\n");
//
//	}
//	else
//		printf("��������\n");
//}
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	year(i);
//	return 0;
//}
//������������
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
//	printf("����ǰ��i=%d,j=%d\n", i, j);
//	swap(&i, &j);
//	printf("������i=%d,j=%d\n", i, j);
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	//int *pa = &a;
//	//ָ�����;���ָ�������ʱ�����ڴ��м����ֽ�
//	//int ���ͷ���4���ֽ� char����1���ֽ�
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
//	//ָ�����;�����ָ��+/-ʱ�߶��ľ���
//	return 0;
//}
//Ұָ�����ָ��Ŀռ���δ֪�ģ�����ģ�����ȷ�ģ�û����ȷ���Ƶģ���û������)
//int main()
//{
//	int *p;//�ֲ�����ָ��δ��ʼ����Ϊ���ֵ��ΪҰָ��
//	*p = 20;
//}
//Խ�����Ҳ�����Ұָ�������
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
//����Ұָ��
//1.ָ���ʼ����
//2.����ָ��Խ��
//3.ָ������ʱ����ת��Ϊ��ָ��
//4��Ӧ��ʱ�ж�ָ���Ƿ�Ϊ��ָ�� if(pa!=NULL)
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;    // ++a���Ӹ�a+1�����Ϊ6���ü���֮��Ľ����c��ֵ����ˣ�a = 6  c = 6
//	b = ++c, c++, ++a, a++;  // ++c��cΪ7 c++��cֵ���� ++a��a��ֵΪ7��a++��aֵ���䣬bȡa��ֵ��7
//	// ���ʽ����ʱ��c++��a++���a��c�ֱ��1����ʱc��8��a��8��b:7
//	b += a++ + c; // a�Ⱥ�c�ӣ����Ϊ16���ڼ���b��ֵ7���ȵĽ��Ϊ23������a��1��a��ֵΪ9
//	printf("a = %d b = %d c = %d\n:", a, b, c); // a:9, b:23, c:8
//	return 0;
//}
//����������
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
//	int *p = arr;//�����arr����Ԫ�ص�ַ������ά�������Ԫ�ص�ַ�ǵ�һ��������ַ
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int *p =&a;//һ��ָ��
//	int * * pp = &p;//����ָ��
//	**pp = 20;//**p�������ҵ�a
//	printf("%d\n", a);
//}
//ָ������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int *arr[] = { &a, &b, &c };//ָ������Ķ���
//
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//pָ������Ԫ�ص�ַ
//	printf("%s\n", p);//����ӡ��Ԫ�ص�ֱַ�ӽ�abcdef��ӡ����
//	int *arr[] = { "abcdef", "hello", "bit" };
//	for (int i = 0; i <= 2; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//ָ���ȥָ��ľ���ֵΪָ��֮��ĸ���
//	ָ���ȥָ���ǰ�������ǣ�����ָ��ָ��ͬһ�������ռ�
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
//strlen�ķ���ֵΪ�޷��������������޷�������������ڵ���0��
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
//sizeof�����ʱ��ֻ���Ŀռ��С


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ���������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :����֮����������ݱ�ɣ�fedcba
//int reverse_string(char arr[])
//{
//
//}
//int strlen_(char arr[])
//{
//	int count = 0;
//	char* p = arr;//�����pָ�붨�岻����int ԭ��arrΪ��
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
//	/*int *p = &a;*///int ����4���ֽ�
//	char *p = &a;// char* ����1���ֽ�
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//-128 ��ԭ��100000000000000000000000000010000000
//	//       ����111111111111111111111111111110000000
//	//    a��ֵ  10000000
//	printf("%u\n", a);
//	//%u��ӡ�޷�������
//	//��ӡchar a,��Ҫ�������� 11111111111111111111111110000000-���ǲ���
//	//�޷�������������һ���������ԭ����ͬ
//	//�޷�����û�з���λ
//	//��ӡ%d��ӡ����ԭ��
//	//��������������з����򰴷���λ�����
//	//           ���Ϊ�޷�����ֱ�Ӱ�0�����
//}

//�жϻ����Ĵ�˻�С��
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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