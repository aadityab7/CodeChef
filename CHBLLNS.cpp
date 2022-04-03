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
		long x, y, z;
		cin >> x >> y >> z;
		long n;
		cin >> n;

		long long ans = 1;

		if(x < n){
			ans += x;
		}
		else{
			ans += n - 1;
		}

		if(y < n){
			ans += y;
		}
		else{
			ans += n - 1;
		}

		if(z < n){
			ans += z;
		}
		else{
			ans += n - 1;
		}

		cout << ans << endl;
	}
	return 0;
}