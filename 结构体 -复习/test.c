#include <stdio.h>

//�ṹ������
//struct tag
//{
//	member-list;
//}variable-list;

//�ṹ��ĳ�Ա��member-list�������Ǳ��������飬ָ�룬�����ṹ��

//struct Point
//{
//	int x;
//	int y;
//}p1;        //�������͵�ͬʱ�������p1

// struct Point p2;    //����ṹ�����

// struct Point p3 = { x, y };  //��ʼ�������������ͬʱ����ֵ��

////�ṹ��Ƕ�׳�ʼ��
//
//struct Point
//{
//	int score;
//};
//struct Stu
//{
//	char name[20];
//	int age;
//	struct Point p;
//}s1 = { "zhangzhouji",18,{99} };

//�ṹ��������ʳ�Ա
//ͨ��������� �� .������
// �磺struct Stu s;
//     strcpy(s.name,"zhangzhouji")
//     s.age=18


//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Print(struct Stu* ps)
//{
//	printf("name = %s  age = %d\n", (*ps).name, (*ps).age);
//	printf("name = %s  age = %d\n", ps->name, ps->age);
//}
//
//int main()
//{
//	struct Stu s = { "zhangzhouji",19 };
//	Print(&s);     //�ṹ���ַ����
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //���ṹ��
//	print2(&s); //����ַ
//	return 0;
//}
//
//// �������ε�ʱ�򣬲�������Ҫѹջ�ġ��������һ���ṹ������ʱ��
//// �ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//
////�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ

////// ��һ��
////int count_bit_one(unsigned int n)
////{
////	int count = 0;
////	while (n)
////	{
////		if (n % 2 == 1)
////		{
////			count++;
////		}
////		n = n / 2;
////	}
////	return count;
////}
//
//////������
////int count_bit_one(int n)
////{
////	int count = 0;
////	int i = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if (((n >> i) & 1) == 1)
////		{
////			count++;
////		}
////       // 12  0000 0000 0000 1100
////       //���� 0000 0000 0000 0110
////       // 1   0000 0000 0000 0001
////       // &1  0000 0000 0000 0000    0��
////	}
////	return count;
////}
//
////������
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
////n = n&(n-1)
////n
////13
////1101 n
////1100 n-1
////1100 n
////1011 n-1
////1000 n
////0111 n-1
////0000 n
////
//int main()
//{
//	int a = 0;
//	scanf(" %d", &a);
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
//	int count = count_bit_one(a);
//	printf(" %d �Ķ�������1�ĸ���Ϊ: %d\n", a,count);
//	return 0;
//}


//// �Ҷ�������������Ӧλ��ͬ�ĸ���
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
////12  0000 0000 0000 1100
////13  0000 0000 0000 1101
////m^n 0000 0000 0000 0001
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}

////00000000000000000000000000001010
//// 10
////��һ����������λ�е�����λ��ż��λ�����֣�0��1��
//
//void Print(int m)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >=1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	Print(m);
//	return 0;
//}


// �žų˷���


//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}


//void Print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print_table(n);
//	return 0;
//}

//��Ŀ���ƣ�
//�ַ������򣨵ݹ�ʵ�֣�
//��Ŀ���ݣ�
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������С�
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//

//��һ��

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}

////�������ݹ�
//
//void reverse_string(char* str)
//{
//	char tmp = str[0];
//	int len = my_strlen(str);
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	str[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
////
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
////
////���룺1729�������19
////DigitSum(1729)
////DigitSum(172) + 1729%10
////DigitSum(17) + 172%10 + 1729%10
////DigitSum(1) + 17%10 + ...
////1+7+2+9
////
//
//
//int Num_sum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return Num_sum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = Num_sum(num);
//	printf("ÿλ������ӵã�%d", sum);
//	return 0;
//}

////��ĳ�����Ķ��ٴη�
//
//int Pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return 1.0 / Pow(n, -k);
//	}
//	else if(k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Pow(n, k - 1);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}


