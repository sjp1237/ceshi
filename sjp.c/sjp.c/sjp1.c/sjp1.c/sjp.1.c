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
//	printf("%c", '\v');//\t ˮƽ�Ʊ�� ���ַ�
//	//printf("\a\a");//\a����
//	printf(" ");
//	printf("%c", '\123');// \ddd�˽��� \xddʮ���������ת��Ϊʮ���ƣ�Ȼ��������Ӧ��ASII��ֵ��Ӧ \123��ʾһ���ַ�
//}
//{
//printf("\328");//ע��˽���û��8������֣�����\328�������ַ�
//}

//{
//	int input = 0;
//	printf("�������ѧϰ\n");
//		printf("��Ҫ�ú�ѧϰ��1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�ø���offer\n");
//	else
//	printf("�ؼ�������");
//	
//}

//{
//	int arr2[10] = { 1, 2, 3 };//����ȫ��ʼ��
//}

//{
/*int a = 3;
int b = 5;
int c = 0;
c = a&b;
printf("%d\n", c);*/

 &������λ�룬Ҫ������1��Ϊ1��
1001
1100
1000
|������λ��ֻҪ��1����1������ͬʱΪ0��Ϊ0��
1001
1100
1101
^��� ��ͬΪ0������ͬΪ1
0110
1010
1100
}

//{
//	int a = 10;
//	int b;
//	/*b = a++;*///����++��ʹ�� ��++
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//10
//	printf("%d\n", a++);//10
//	printf("%d\n", a);//11
//}

//{
//	b = (++a) + (++a) + (++a);//����д�������Ĵ���
//}

//{
//	int a = 0;
//	int b = 1;
//	int c = a&&b;
//	printf("%d\n", c);
//		
//}

//{
//	int a = (a=1, 2, 3,a+ 4);//���ű��ʽ����������μ���
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
	static int a = 1;//stastic�ı�������������ڣ�ÿ��һ�κ���a�����������¸ı�Ϊ1��������û�иı�
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

extern int gva; //extern �����ⲿ����
int main()
{
	printf("%d\n", gva);
}
ȫ�ֱ��������ⲿ�������ԣ�����Դ�ļ�����ͨ������ʹ��
stastic����ȫ�ֱ����󣬰��ⲿ�������Ը�Ϊ�ڲ���������

extern int add(int x, int y);//�����ⲿ����

register //��a��ֵ���鴢���ڼĴ�����Ĵ�������ȡ��ַ��
register int a=9��

#define ����
#define max 10
#define str"hello bit"
#define nex'a'
#define add(x,y)(x+y)//�궨��������
//
int main()
{
	int a = 0;
	printf("%p/n", &a);//%p���յ�ַ�ĸ�ʽ��ӡ����
	//&aȡ��a�ĵ�ַ
	//��������a���׵�ַ
	int* pa = &a;//pa�Ǵ�ŵ�ַ��-��pa����ָ����� *�������ǵ���pa��ָ��
	*pa;//�����ò���
}

//�ṹ�崴��
//struct stu
//{
//	//����ѧ������
//	char name[20];//���� �ַ���
//	short age;//����
//
//	char sex[10];
//};
//int main()
//{    //�ṹ���Ա�ĳ�ʼ���ͱ����Ĵ���
//	struct stu s1={ "����",20,"��" };
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
		if ((a + b>c) && (a + c>b) && (b + c>a))//�ж��Ƿ�Ϊ������
		{
			if (a == b&&b == c)//�ж��Ƿ�Ϊ�ȱ�������
				printf("Equilateral triangle!\n");
			else if ((a == b) && (a != c) || (a == c) && (a != b) || (b == c) && (a != b))//�ж��Ƿ�Ϊ����������
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
//		if (i % 2 == 0)//�ж��Ƿ�Ϊż��
//			o+=1;
//		else
//			j+=1;
//		i++;
//	}
//	printf("%d %d",o,j);
//}

//0-����0
//'0'-ASCII��ֵΪ48
//'/0'-��ֵΪ0 ��0�ı�����ͬ
//null ��ָ��-0

//
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)//scanf��ȡʧ�ܷ��ص�ֵΪEOF;
//	{
//		if (a >= 140)
//			printf("���Ǹ�С���\n");
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
		//else�������if��ƥ��
		printf("hahaha\n");
	return 0;

}
//ebp esp eax ebx ecx edx�ǳ����ļĴ�����ebx��esp����������ŵ�ַ
