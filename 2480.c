/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num1 = 0;
int num2 = 0;
int num3 = 0;
int max = 0;


int main() {
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 == num2 && num2 == num3)
		printf("%d", 10000 + (num1 * 1000));
	/*
	else if(num1 == num2 || num2 == num3 || num1 == num3)
		printf("%d",1000+()
	*/ //�̰� �̷��� ��� �ϰ� ������ �� �߿� ���� ���� ������ ��Ÿ�����ϴ��� �𸣰ڴ� ~ �� ����

	//�밡���� �������� ���� ����ϴ� ���ۿ�...
/*
	else if (num1 == num2)
		printf("%d", 1000 + (num1) * 100);
	else if (num2 == num3)
		printf("%d", 1000 + (num2) * 100);
	else if (num3 == num1)
		printf("%d", 1000 + (num3) * 100);

	else{
		max = ((num1 > num2) && (num1 > num3)) ? num1 : ((num2 > num1) && (num2 > num3)) ? num2 : num3;
		printf("%d", (max) * 100);
	}

	return 0;
}

//���� �� õ��ƴϾ�

