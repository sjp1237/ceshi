#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//size_t �޷�������
//void test(int x)
//{
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = arr;//����ָ��
//	void(*pa)(int) = test;//����ָ��
//	//int (* )(int)�Ǻ���ָ�룬��Ϊһ�����ͣ���intһ���������ͣ�
void(*signal(int, void(*��(int))   (int)
	typedef void(*pfun_t)(int)//typedef�������ض��壬����������void(*)(int)d����Ϊpfun_t
	//���Խ���������Ϊ��
	pfun_t signal(int, pfun_t);
//		//����һ��������������������Ϊsignal��������������һ��Ϊint��һ��Ϊ����ָ�룬��������Ϊ����ָ��
//
//}
//int *arr[10]//ָ������
//int ��*arr[10])()//����ָ������



//������
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
//	//�ȴ�ӡһ���˵�
//	//Ȼ������һ���������жϼӼ��˳�
//	int x, y;
//	int i=1;
//	int sum=0;
//	menu();
//	int(*arr[])(int, int) = { 0, add, sub, mul, div };//�ص㣬�׺���=
//	//scanf("%d", &i);//Ҫ������һ��ѡ��ʱ�����ܷ�����
//	while(i)
//	{
//		scanf("%d", &i);
//		if (i >= 1 && i<= 4)
//		{
//
//			printf("������������>:");
//			scanf("%d%d", &x, &y);
//			sum=(*arr[i])(x, y);//����ָ��Ľ�����+
//		}
//		else if (i == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else
//		{
//			printf("�������");
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
	//		printf("�˳������");
	//			break;
	//	case 1:
	//		printf("������������");
	//		scanf("%d%d", &i, &j);
	//		sum=add(i,j);
	//		printf("%d\n", sum);
	//		
	//		break;
	//	case 2:
	//		printf("������������");
	//		scanf("%d%d", &i, &j);
	//		sum=sub(i, j);
	//		printf("%d\n", sum);

	//		break;
	//	case 3:
	//		printf("������������");
	//		scanf("%d%d", &i, &j);
	//		sum=mul(i, j);
	//		printf("%d\n", sum);

	//		break;
	//	case 4:
	//		printf("������������");
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
//void(*ptr)(const char *str) = test;//����ָ��
//void(*ptrarr[10](consr char *str)//����ָ������
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ
//�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸ�
//������ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���
//����������Ӧ��