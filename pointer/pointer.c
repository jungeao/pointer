#include<stdio.h>

int main()
{
	int var = 5;	//�����������
	int* p;		//����ָ�����

	p = &var;	//��ָ������д洢var�ĵ�ַ

	printf("var��ֵ��%d\n",&var);	//
	printf("p��ֵ��%p\n",p);		//��ָ������д洢�ĵ�ַ
	printf("*p��ֵ��%d\n",*p);		//ʹ��ָ�����ֵ

	return 0;
}