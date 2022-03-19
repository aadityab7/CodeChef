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
		long n, m, c;
		cin >> n >> m >> c;

		long ans = 0;

		for(int i = 1; i <= n; i++){
			if(c % i == 0){
				if((c / i) <= m) ans++;
			}
		}

		cout << ans << endl;
	}
	return 0;
}