#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int m;
		cin >> m;

		int odd_n, odd_m;
		odd_n = n % 2;
		odd_m = m % 2;

		int ans = 0;

		if(odd_n){
			ans += m;
		}

		if(odd_m){
			ans += n;
		}

		if(odd_m && odd_n){
			ans--;
		}

		cout << ans << "\n";
	}
	return 0;
}