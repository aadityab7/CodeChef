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

		long ans = 0;
		while(n % 2 == 0){
			n = n / 2;
			ans++;
		}

		cout << ans << endl;
	}
	return 0;
}