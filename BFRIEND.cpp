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
		long a, b, c;
		cin >> n >> a >> b >> c;

		long ans = c;

		long num, x;
		long mn = LONG_MAX;
		for(int i = 0; i < n; i++){
			cin >> x;
			num = abs(a-x) + abs(b-x);
			if(num < mn) mn = num;
		}

		ans += mn;

		cout << ans << endl;
	}
	return 0;
}