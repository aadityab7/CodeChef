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

		long long arr[n];
		
		long long evens = 0, odds = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i] % 2 == 0) evens++;
			else odds++;
		}

		long long ans = evens * odds;

		cout << ans << endl;
	}
	return 0;
}