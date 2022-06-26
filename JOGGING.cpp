#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

long long mod = 1000000007;
long long arr[1000001];

int main(){

	arr[0] = 1;

	for(int i = 1; i < 1000001; i++){
		arr[i] = (arr[i - 1] * 2) % mod;
	}

	int t;
	cin >> t;

	while(t--){
		long n;
		cin >> n;

		int x;
		cin >> x;

		long long ans = ((arr[n - 1]) * x % mod) % mod;

		cout << ans << endl;
	}
	return 0;
}