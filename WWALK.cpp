#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		long a[n] , b[n];
		for(long i = 0; i < n; i++){
			cin >> a[i];
		}

		for(long i = 0; i < n; i++){
			cin >> b[i];
		}

		long x1 = 0, x2 = 0;
		long ans = 0;
		for(long i = 0; i < n; i++){
			if(a[i] == b[i] && x1 == x2){
				ans += a[i];
			}

			x1 += a[i];
			x2 += b[i];
		}

		cout << ans << endl;
	}
	return 0;
}