#include <stdio.h> //���� 2577�� ������ ����: �ҿ�ð� �� 6�ð�, ���ڵ� �����

int main() {				

	int a, b, c, res=0;

	int arr[9] = { 0, };			//�ּ� 7 �ִ� 9�ڸ�	1,000,000~999,999,999

	scanf("%d", &a); scanf("%d", &b); scanf("%d", &c);

	res = a * b * c;

	int j = 100000000;				// j = 10����� �������� ������

	/*printf("%d\n", res);*/			//����� res

	int cnt = 0;					// ī����
	int buf, buf1 = res;			//buf = arr�� �־��� ���ڸ���
									//buf1 = buf�� �ְ� ���� ��
	for (int i = 0; i < 9; i++) {
		buf = buf1 / j;
		buf1 = res % j;
		if (buf <= 0) { j /= 10; continue; } //���� �� ����� 0�̶�� j�� ���߰� �������
		arr[i] = buf;						//�� �ڸ� �� ����
		j /= 10;							//j�� �ڸ����� ���缭 down
	}

	int i = 0;
	while (arr[i++] == 0) {
		cnt--;								//���ڸ� �迭�� ä���� 0�� �̸� cnt ������
	}

	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[j] == i) cnt++;			//�� �ڸ� �� ���� print
		}
		printf("%d\n", cnt); cnt = 0;
	}
	return 0;
}