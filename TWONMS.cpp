#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, b, n;
		cin >> a >> b >> n;

		if(n % 2 != 0){
			a *= 2;
		}

		long long max = a, min = b;

		if(a < b){
			max = b;
			min = a;
		}

		long long ans = max / min;

		cout << ans << endl;
	}
	return 0;
}