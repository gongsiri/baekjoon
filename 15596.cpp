#include<iostream>
#include<vector>
using namespace std;

long long sum(vector<int>& a) { // a는 배열임
	long long result = 0;
	for (int i = 0; i < a.size(); i++) { // a의 크기까지 더해줌
		result = result + a[i];
	}
	return result;
}