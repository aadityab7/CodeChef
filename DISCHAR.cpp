#include<iostream>
#include <bits/stdc++.h>;
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		int arr[26] = {};
		for(int i = 0; i < s.size(); i++){
			arr[s[i] - 97]++;
		}

		int ans = 0;
		for(int i = 0; i < 26; i++){
			if(arr[i] > 0) ans ++;
		}

		cout << ans << endl;
	}
	return 0;
}