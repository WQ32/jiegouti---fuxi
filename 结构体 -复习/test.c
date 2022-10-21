#include <stdio.h>

//结构体声明
//struct tag
//{
//	member-list;
//}variable-list;

//结构体的成员（member-list）可以是标量，数组，指针，其他结构体

//struct Point
//{
//	int x;
//	int y;
//}p1;        //声明类型的同时定义变量p1

// struct Point p2;    //定义结构体变量

// struct Point p3 = { x, y };  //初始化：定义变量的同时赋初值。

////结构体嵌套初始化
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

//结构体变量访问成员
//通过点操作符 （ .）访问
// 如：struct Stu s;
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
//	Print(&s);     //结构体地址传参
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //传结构体
//	print2(&s); //传地址
//	return 0;
//}
//
//// 函数传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，
//// 结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//
////结构体传参的时候，要传结构体的地址

////// 法一：
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
//////法二：
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
////       //右移 0000 0000 0000 0110
////       // 1   0000 0000 0000 0001
////       // &1  0000 0000 0000 0000    0个
////	}
////	return count;
////}
//
////法三：
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
//	//写一个函数求a的二进制（补码）表示中有几个1
//	int count = count_bit_one(a);
//	printf(" %d 的二进制中1的个数为: %d\n", a,count);
//	return 0;
//}


//// 找二进制中两数对应位不同的个数
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
////求一个数二进制位中的奇数位和偶数位的数字（0或1）
//
//void Print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
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


// 九九乘法表


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

//题目名称：
//字符串逆序（递归实现）
//题目内容：
//编写一个函数 reverse_string(char * string)（递归实现）
//
//实现：将参数字符串中的字符反向排列。
//
//要求：不能使用C函数库中的字符串操作函数。
//

//法一：

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

////法二：递归
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


////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
////
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////
////输入：1729，输出：19
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
//	printf("每位数字相加得：%d", sum);
//	return 0;
//}

////求某个数的多少次方
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


