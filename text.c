#include<stdio.h>
// stdio => printf
// stdlib =>system
#include<stdlib.h>
int main(){
	//int ��ʾ����������,int
	// a ����������
	// = ��ֵ����
	// ; ����ʡ��
	//����һ���������൱������һ���ڴ�
	// ��������,������ĸ�»���(���ֲ��ܿ�ͷ)
	// ��������һЩ���������Ե�����

	// �ַ����͵ı���
	char a = 0;
	// �����ͱ���
	short b = 0;
	// ���α���
	int c = 0;
	//�����α���
	long d = 0;
	// ��������
	long long e = 0;
	//�����ȸ�����(С��)
	float f = 0.0;
	//˫���ȸ�����
	double g = 0.0;

	// sizeof �鿴һ���������ڴ���ռ�����ֽ�.
	// %d ��ʽ���ַ���
	// %d ����ʮ�����з��ŷ�ʽ��ӡһ������
	// \n ����
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