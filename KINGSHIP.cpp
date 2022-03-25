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

		long long ans = 0;
		long long total = 0;
		long mn = LONG_MAX;
		long num;
		for(int i = 0; i < n; i++){
			cin >> num;
			total += num;
			if(num < mn){
				mn = num;
			}
		}

		ans = (total - mn) * mn;

		cout << ans << endl;
	}
	return 0;
}