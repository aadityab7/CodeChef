#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
#include <algorithm>
using namespace std;

long _gcd(long a, long b){

	if(b == 0) return a;
	_gcd(b, b % a); 
	// long mn, mx;

	// if(a > b){
	// 	mn = b;
	// 	mx = a;
	// }
	// else{
	// 	mn = a;
	// 	mx = b;
	// }

	// if(mx % mn == 0){
	// 	return mn;
	// }

	// // for(long t = a / 2; t > 1; t--){
	// // 	if(a % t == 0 && b % t == 0){
	// // 		return t;
	// // 	}
	// // }

	// long i = 2;
	// while(mn / i > 1){
	// 	if(mx % (mn / i) == 0 && mn % (mn / i) == 0){
	// 		return (mn / i);
	// 	}

	// 	i++;
	// }

	// return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		long ans = arr[0];

		for(int i = 1; i < n; i++){
			ans = __gcd(ans, arr[i]);
		}

		cout << ans << endl;
	}
	return 0;
}
