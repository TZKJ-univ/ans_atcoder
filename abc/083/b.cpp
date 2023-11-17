/**
*    programmer:  Zama
*    created: 15.05.2023 01:28:36
**/

#include<bits/stdc++.h>

using namespace std;

int get_sum_of_digit(int x) {
	int sum = 0; 
	do {
		sum += x % 10;
		x /= 10;
	}while (x != 0);

	return sum;
}

int main() {
	int N, A, B;
	cin >> N >> A >> B;
	
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		int sum_of_digit = get_sum_of_digit(i);
		if (sum_of_digit >= A && sum_of_digit <= B) sum += i;
	}

	cout << sum << endl;
	return 0;
}
