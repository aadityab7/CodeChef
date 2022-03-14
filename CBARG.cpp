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
		int n;
		cin >> n;

		long prev = 0;
		long num;
		long long ans = 0;
		for(int i = 0; i < n; i++){
			cin >> num;
			if(num > prev){
				ans += num - prev;
			}
			
			prev = num;
		}

		cout << ans << endl;
	}
	return 0;
}
