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
		int n, q;
		cin >> n >> q;

		string s;
		cin >> s;

		int arr[26] = {};

		for(int i = 0; i < n; i++){
			arr[s[i] - 97]++;
		}
		

		long c;
		for(int i = 0; i < q; i++){
			long ans = 0;
			cin >> c;
			for(int j = 0; j < 26; j++){
				if(arr[j] > c){
					ans += arr[j] - c;
				}
			}

			cout << ans << endl;
		} 
	}
	return 0;
}