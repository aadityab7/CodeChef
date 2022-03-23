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
		long n;
		cin >> n;

		long ans;
		if(n % 2 == 0){
			ans = n / 2;
		}
		else{
			ans = (n + 1) / 2;
			ans = -ans;
		}

		cout << ans << endl;
	}
	return 0;
}