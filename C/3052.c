#include <stdio.h>

int main() {
	//���� �ݺ��� i, j ����. 1~10���� 100�� �ݺ� �ʿ���� �ε��� i �������� ���ϸ�ȴ�.

	int cnt = 10;
	int val[10] = { 0, };

	for(int i = 0;i < 10; i++) {
		scanf("%d", &val[i]);
	}
	
	for (int i = 0; i < 10; i++) {
		val[i] %= 42;
	}
	
	for (int i = 0; i < 10; i++) {	
		if (val[i] == -1) continue;	//�ߺ� ���� ���� �̹� ���� �� �񱳰� ���� ���� -1�� ����
		for (int j = i + 1; j < 10; j++) {
			if (val[i] == val[j]) { cnt--; val[j] = -1; } //�� �� ���� �迭�� -1 ����
		}
	}

	printf("%d", cnt);
	return 0;
}