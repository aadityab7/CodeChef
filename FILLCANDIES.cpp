#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int k, m;
		cin >> k >> m;

		long total = k * m;

		long ans = ceil((double) n /(double) total);

		cout << ans << "\n";

	}
	return 0;
}