#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long x, y;
		cin >> x >> y;

		long ans = __gcd(x, y);

		cout << ans * 2 << endl;
	}
	return 0;
}