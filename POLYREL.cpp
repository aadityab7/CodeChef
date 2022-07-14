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


		long x, y;
		for(int i = 0; i < n; i++){
			cin >> x >> y;
		}

		int ans = n;

		while(n >= 6){
			ans += n / 2;
			n = n / 2;
		}

		cout << ans << "\n";
	}
	return 0;
}