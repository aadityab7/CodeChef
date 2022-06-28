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
		long d, D, p, q;
		cin >> D >> d >> p >> q;

		long long sum = 0;
		//long long curr = p; 

		long long n = D / d;
		long long r = D % d;

		long long sum1 = d * ( n * ((2 * p) + ((n - 1) * q)));
		long long sum2 = r * (p + n * q);
		// for(int i = 0; i < n; i++){
		// 	sum += d * curr;
		// 	curr += q;
		// }

		//sum += (D % d) * curr;

		sum = sum2 + (sum1 / 2);
		cout << sum << endl;
	}
	return 0;
}