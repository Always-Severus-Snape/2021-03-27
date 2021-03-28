#include<stdio.h>
// stdio => printf
// stdlib =>system
#include<stdlib.h>
int main(){
	//int 表示变量的类型,int
	// a 变量的名字
	// = 赋值符号
	// ; 不能省略
	//创建一个变量就相当于申请一块内存
	// 变量命名,数字字母下划线(数字不能开头)
	// 给变量起一些具有描述性的名称

	// 字符类型的变量
	char a = 0;
	// 短整型变量
	short b = 0;
	// 整形变量
	int c = 0;
	//长整形变量
	long d = 0;
	// 长长整形
	long long e = 0;
	//单精度浮点数(小数)
	float f = 0.0;
	//双精度浮点数
	double g = 0.0;

	// sizeof 查看一个变量在内存中占几个字节.
	// %d 格式化字符串
	// %d 按照十进制有符号方式打印一个整数
	// \n 换行
	printf("char:%d\n", sizeof(a));
	printf("short:%d\n", sizeof(b));
	printf("int:%d\n", sizeof(c));
	printf("long:%d\n", sizeof(d));
	printf("long long:%d\n", sizeof(e));
	printf("float:%d\n", sizeof(f));
	printf("double:%d\n", sizeof(g));



	system("pause");
	return 0;
}