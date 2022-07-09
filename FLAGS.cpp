#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;
	
// long long fact(int n){
// 	long long fact = 1;

// 	for(int i = 2; i <= n; i++){
// 		fact *= i;
// 	}

// 	return fact;
// }

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		// long long fact_n = fact(n);

		// long long nc4 = fact_n / 24;
		// long long nc3 = fact_n / 6;
		// long long nc2 = fact_n / 2;

		// long long a1 = nc4 * 24;
		// long long a2 = nc3 * 6;
		// long long a3 = nc2 * 2;

		// long long ans = (2 * a1) + (5 * a2) + (2 * a3);

		long long int ans = (2*n*(n-1)*(n-1)) + (n*(n-1)*(n-2)) + (2*n*(n-1)*(n-2)*(n-2));

		cout << ans << "\n";
	}
	return 0;
}