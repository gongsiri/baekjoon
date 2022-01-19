#include<iostream>
using namespace std;

int main() {
	int n, dn = 0;
	cin >> n;
	dn = n;
	while(n!=0) {
		dn += n % 10;
		n /= 10;
	}
	cout << dn;
	return 0;
}