#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if(1==i%2)//�ж��Ƿ�Ϊ����
		printf("%d ", i);
		i++;
	}
	return 0;
}

int main()
{
	int i;
	for (i = 1; i <= 100; i += 2)//�����ж������������Ч��
	{
		printf("%d ", i);

	}
	return 0;
}

//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day) //switch(���ͱ��ʽ��
//	{
//	case 1:
//		printf("����1\n");
//		break;
//
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//
//	default:
//		printf("ѡ�����\n");
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
//			continue;//continue����������ѭ����ֱ�ӵ�ѭ�����жϲ��֣�������һ�ε�ѭ�����ж�
//		printf("%d ", i);
//	}
//	return 0;
//}

int main()
{
	int m;
	while ((m = getchar()) != EOF)//getchar�Ӽ��̶�ȡһ���ַ�ת��ΪASIIL��ֵ��putchar��ASIIL��ֵת��Ϊ�ַ�����ӡ��
		//getchar��ȡʧ��ʱ����EOF;����ͣ�°�ctrl+z
	{
		putchar(m);
	}
//}

int main()
{
	int ch = 0;
	char password[10] = {0};//password�������һ����ַ������scanf����ȡ��ַ����
	printf("����������\n��");
	scanf("%s", password);//scanf���ܶ�ȡ�ո��\n��getchar()���ȡ����
		printf("��ȷ������Y/N\n");
	while ((ch=getchar())!='\n')//��������
	{
		 ;
	}
	ch = getchar();
	if (ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n");
	
	return 0;

}

//for (;;)//forѭ���������ֶ�����ʡ�ԣ��жϲ���ʡ�Ժ�Ϊ��

//��ӡ100��hehehe
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


//���ֲ��Ҳ������������ĳ����
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//����arr�����ж��ٸ�Ԫ�أ�
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
//			printf("�ҵ��ˣ��±�Ϊ��%d", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//		return 0;
//}

//int main()
//{
//	int a, b, c,ret=0;
//	scanf("%d%d%d", &a, &b, &c);
//	//����a��b��c���бȽϣ�Ȼ�����b��c���бȽ�
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

//��ӡ���ꡣ
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
//		if (i %10 == 9)//����λ����9�ĸ���
//			count++;
//		if (i / 10 == 9)//���ʮλ����9�ĸ���
//			count++;
//	}
//	printf("%d ", count);
//
//}


//��Ŀ1-1/2+1/3-1/4.........
//int main()
//{
//	int i, j = 1;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (1.0/ i)*j;
//		j = (-j);//����Ϊ����ż��Ϊ��
//
//	}
//	printf("%.2lf ", sum);
//	return 0;
//}


//��10���������ֵ
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

//��ӡ�žų˷���
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
		//����д����ƽ��ֵ���ܻ����
		//�Ϻõ�ƽ��ֵ��Ӧ��Ϊ
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
			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("�Բ����Ҳ���");
	return 0;
}