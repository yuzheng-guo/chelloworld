#include <stdio.h>
#include <stdlib.h>  // �ṩ rand() �� srand()
#include <time.h>    // �ṩ time()

int main() {
	// ��ʼ�����������
	srand((unsigned int)time(NULL));

	// ���� 1~100 �������
	int secret = rand() % 100 + 1;

	int guess = 0;
	int count = 0;

	printf("��ӭ������������Ϸ��\n");
	printf("���Ѿ������һ�� 1 �� 100 ֮������֡�\n");

	do {
		printf("��������µ����֣�");
		scanf("%d", &guess);
		count++;

		if (guess > secret) {
			printf("�´��ˣ�\n");
		}
		else if (guess < secret) {
			printf("��С�ˣ�\n");
		}
		else {
			printf("��ϲ�㣬�¶��ˣ���һ������ %d �Ρ�\n", count);
		}
	} while (guess != secret);

	return 0;
}