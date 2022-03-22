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
		long u , v;
		cin >> u >> v;

		long num = u + v;

		long sum = (num * (num + 1)) / 2;

		long long ans = sum + u + 1;
		cout << ans << endl;
	}
	return 0;
}