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

		int x, m;
		cin >> x >> m;

		int ans = 0;

		if(x != m){
			long long sum = n * m;
			ans = sum / (m + 1);
		}
		
		cout << ans << endl;
	}
	return 0;
}