#include <stdio.h> //백준 2577번 숫자의 개수: 소요시간 약 6시간, 손코딩 도움됨

int main() {				

	int a, b, c, res=0;

	int arr[9] = { 0, };			//최소 7 최대 9자리	1,000,000~999,999,999

	scanf("%d", &a); scanf("%d", &b); scanf("%d", &c);

	res = a * b * c;

	int j = 100000000;				// j = 10억부터 내려가며 나누기

	/*printf("%d\n", res);*/			//결과값 res

	int cnt = 0;					// 카운터
	int buf, buf1 = res;			//buf = arr에 넣어줄 한자리수
									//buf1 = buf에 넣고 남은 수
	for (int i = 0; i < 9; i++) {
		buf = buf1 / j;
		buf1 = res % j;
		if (buf <= 0) { j /= 10; continue; } //대입 전 결과가 0이라면 j만 낮추고 계속진행
		arr[i] = buf;						//한 자리 씩 대입
		j /= 10;							//j도 자릿수에 맞춰서 down
	}

	int i = 0;
	while (arr[i++] == 0) {
		cnt--;								//앞자리 배열에 채워진 0을 미리 cnt 낮춰줌
	}

	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[j] == i) cnt++;			//각 자리 수 세서 print
		}
		printf("%d\n", cnt); cnt = 0;
	}
	return 0;
}