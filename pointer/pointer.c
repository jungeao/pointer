#include<stdio.h>

int main()
{
	int var = 5;	//声明定义变量
	int* p;		//声明指针变量

	p = &var;	//在指针变量中存储var的地址

	printf("var的值：%d\n",&var);	//
	printf("p的值：%p\n",p);		//在指针变量中存储的地址
	printf("*p的值：%d\n",*p);		//使用指针访问值

	return 0;
}