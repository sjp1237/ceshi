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
	char arr1[] = "�����������˽ڿ��֣���������\0";
	char arr2[] = "****************************";
	int left = 0; 
	int right = strlen(arr1) - 1;//strlen��Ҫ����ͷ�ļ�Ϊ#include<string.h>
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);//��λ�Ǻ��� !!!!!!!!!ע��SΪ��д��������ͷ�ļ�Ϊ#include<windows.h>
		system("cls");//systemִ��ϵͳ����ģ�cls�����Ļ����˼
	}
	printf("%s\n", arr2);

	return 0;
}

//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	printf("���������룺 \n");
//	for (i = 0; i <3; i++)
//	{
//		scanf("%s", password);
//		//��������Ϊ123456
//		if (strcmp(password, "123456") ==0)//strcmp��ͷ�ļ�Ϊ#include<string.h> 
//			//�����ַ����Ƚϲ�����==����strcmp
//		{
//			printf("ȷ�ϳɹ���������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i = 3)
//	{
//		printf("��ĺ��ѱ�����\n");
//	}
//
//	return 0;
//}

//void play()
//{
//	printf("��������µ�ֵ��\n");
//	int b = 0;
//	 int ret= rand()%100+1;//ʹ�������1��100֮��//rand��ʹ����Ҫsrand�����,��Ҫ����ͷ�ļ�Ϊ#include<stdib.h>
//	 while (1)
//	 {
//		 scanf("%d", &b);
//		 if (b > ret)
//		 {
//			 printf("�´���\n");
//		 }
//		 else if (b < ret)
//		 {
//			 printf("��С��\n");
//
//		 }
//		 else
//		 {
//			 printf("��ϲ�㣬�¶���\n");
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
////��������ֻ����һ��
//	srand((unsigned)time(NULL));//time(ָ�������//��Ҫ����ͷ�ļ�Ϊ#include<time.h> //time��ʱ��� �ǴӼ������ʼ�����ڵ�ʱ�� ��λΪ��
//	int i = 0;
//	menu();
//	do
//	{
//		printf("��ѡ���Ƿ���Ҫ����Ϸ��1/0)��\n");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			play();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��");
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
//		printf("��ĵ��Խ���һ�ֺ�رգ����룺��������Ǵ�˧�ơ���ȡ���ػ�\n");
//		scanf("%s", arr1);
//		if (strcmp(arr1, "������Ǵ�˧��") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}

//sqrt()�����Ŀ⺯�� ��Ҫ����ͷ�ļ�#include<math.h>

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
//	//��ӡ����Ϊeeeee mmmm
//	printf("%s", arr1);
//	return 0;
//}

//void swap(int* x, int* y)
//{
//	int z = *x;//*x��ֱ�Ӹ��ݵ�ַ�ҵ�x�Ŀռ���Ӧ��ֵ
//	*x = *y;
//	*y = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d��b=%d\n", a, b);
//	swap(&a, &b);
//	//���������ַ������x��y�Ὺ����Ӧ�ĵ�ַ����a��b������ı�
//	printf("������:a=%d,b=%d\n", a, b);
//	return 0;
//}

//������ʵ�ο����ǳ��������������ʽ����������������һ��ȷ����ֵ
//ʵ�δ��ݸ��βΣ��β���ʵ�ε���ʱ���������βε��޸Ĳ���ı�ʵ�Σ� ����ַʱ���βο�ͨ����ַ�ҵ�ʵ�β������޸�
//��һ��������Ҫ�ı��ⲿ��ֵʱ����Ҫ����ַ��ȥ

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
////���鴫�ε�ʱ�򴫵�����Ԫ�صĵ�ַ��������������鴫��ȥ
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
//		printf("�Բ����Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d", ret);
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
//	printf("���Լ��Ϊ:%d\n", b);
//
//	return 0;
//}
//
//��ӡ100-200֮�������
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
//			return 1;//����1��ʾ������������0��ʾ��������
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
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
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
//	printf("����ǰi=%d,k=%d\n", i, k);
//	swap(&i, &k);
//	printf("������i=%d,k=%d\n", i, k);
//	return 0;
//}
//-1��ԭ��10000000000000000000000000000001
//���룬����λ�����������෴1111111111111111110
//���룬�����һ1111111111111111111111111
//���Ų��������ò����������
//zz������������ֻ�����������Σ�����λҲһ������
//����������λ����|��һ��1λ1
//��λ��&;����1Ϊ1
//��Ϊ���^;��ͬΪ0������Ϊ1

//!�߼���������
//int main()
//{
//	int sort = 0;//����sortΪ��
//	if (!sort)//��sortΪ��
//	{
//
//	}
//}
//sizeof��һ��������������һ������������ʡ������ 
//&&�߼��룬ֻ��ע��٣��������Ϊ��
//int main()
//{
//	int a = 5;
//	int b = 6;
//	int c = a&&b;//cΪ1
//}
//���ű��ʽ��������������ִ�У��������ʽ�Ľ��Ϊ���һ�����ʽ�Ľ��
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a = a + 12, b, b = a + 2);
//	printf("%d\n", c);
//	return 0;
//}