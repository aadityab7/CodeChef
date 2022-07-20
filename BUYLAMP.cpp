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

		int k, x, y;
		cin >> k >> x >> y;


		long ans = x * k;

		int rem = n - k;

		if(rem > 0){
			if(x < y){
				ans += x * rem;
			}
			else{
				ans += y * rem;
			}
		}

		cout << ans << "\n";

	}
	return 0;
}