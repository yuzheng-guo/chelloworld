#include<stdio.h>
int main() {
	const int MINOR = 35;
	int age = 0;
	printf("������������䣺");
	scanf("%d", &age);
	printf("���������%d��\n", age);
	if (age < MINOR) {
		printf("���������õ�");
	}
	printf("���������ľ������磬�ú���ϧ��\n");
	return 0;
}