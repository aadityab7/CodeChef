#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
#define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		long total = 0;
		int num;
		int mn = INT_MAX;
		for(int i = 0; i < n; i++){
			cin >> num;
			total += num;
			if(num < mn) mn = num;
		}

		long ans = total - n * mn;
		cout << ans << endl;
	}
	return 0;
}