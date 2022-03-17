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

		long y = 0;
		long ans;
		int f = 0;
		while(n >= (4 * y)){
			if((n - (4 * y)) % 7 == 0){
				ans = (n - (4 * y));
				f = 1;
				break;
			}
			y++;
		}

		if(f){
			cout << ans << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
	return 0;
}