#include<iostream>
using namespace std;

int main() {
	int A, B, C, Result = 0;
	int arr[10] = { 0 };

	cin >> A >> B >> C;
	Result = A * B * C;
	
	while(Result!=0) {
		arr[Result % 10]++;
		Result /=  10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}