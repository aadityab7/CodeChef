#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int sum_of_digits(long long num){
	int sum = 0;

	while(num > 0){
		sum += num % 10;
		num /= 10;
	}
	
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n;
	cin >> n;

	int ans = 0;

	for(long long i = n; i >= n - 97; i--){

		//if i + s(i) + s(s(i)) == n

		int s = sum_of_digits(i);
		int ss = sum_of_digits(s);

		if((i + s + ss) == n){
			ans++;
		}

	}


	cout << ans << "\n";

	
	return 0;
}