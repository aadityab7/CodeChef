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

		int ans = n / 100;

		ans += ans % 100;

		if(ans > 10){
			ans = -1;
		}

		cout << ans << endl;
	}
	return 0;
}