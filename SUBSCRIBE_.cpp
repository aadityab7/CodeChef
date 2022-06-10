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
		int n, x;
		cin >> n >> x;

		int ans = (n / 6) * x;

		if(n % 6 != 0){
			ans += x;
		}

		cout << ans << endl;
	}
	return 0;
}