#include <stdio.h>

int main() {
	//이중 반복문 i, j 선언. 1~10까지 100번 반복 필요없이 인덱스 i 다음부터 비교하면된다.

	int cnt = 10;
	int val[10] = { 0, };

	for(int i = 0;i < 10; i++) {
		scanf("%d", &val[i]);
	}
	
	for (int i = 0; i < 10; i++) {
		val[i] %= 42;
	}
	
	for (int i = 0; i < 10; i++) {	
		if (val[i] == -1) continue;	//중복 방지 위해 이미 같은 값 비교가 끝난 값은 -1로 검출
		for (int j = i + 1; j < 10; j++) {
			if (val[i] == val[j]) { cnt--; val[j] = -1; } //값 비교 끝난 배열은 -1 대입
		}
	}

	printf("%d", cnt);
	return 0;
}