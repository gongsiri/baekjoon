#include<iostream>
using namespace std;

bool arr[10001]; // 배열 arr[1~10000]까지이므로 10001

//셀프넘버 판별 함수
int solution(int n) { 
	int sum = n; // 자기 자신을 먼저 더해주고
	
	while (true) { // 각 자리수의 숫자를 더해야하므로 1의 자리를 계속 더해준다.

		if (n == 0) break; //0이 되면 break
		sum += n % 10; //1의 자리 더해주기
		n = n / 10; //한자리식 없애기
	}

	return sum; // 예를 들어 n이 39면 sum은 51이 됨 -> 51은 셀프넘버 아님
}

int main() {

	for (int i = 1; i < 10001; i++) {
		int idx = solution(i);

		if (idx <= 10001) { // idx에 숫자가 있다는 건 그 숫자는 셀프넘버 아님
			arr[idx] = true; // 셀프넘버 아닌 수 true로 변경
		}
	}

	//출력
	for (int i = 1; i < 10001; i++) {
		if (!arr[i]) // i번째 배열에 있는 숫자가 셀프넘버라면 출력
			cout << i << endl;
	}
}