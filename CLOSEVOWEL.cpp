
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
		int n;
		cin >> n;

		string s;
		cin >> s;

		char c;

		long long MOD = 1000000007;
		long long ans = 1;

		for (int i = 0; i < n; i++){
			c = s[i];
			if(c == 'c' || c == 'g' || c == 'l' || c == 'r'){
				ans = (ans * 2) % MOD;
			}
		}

		cout << ans % MOD << endl;
	}
	return 0;
}