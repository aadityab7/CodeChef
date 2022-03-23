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

		string s;
		int arr[26] = {};

		for(int i = 0; i < n; i++){
			cin >> s;
			for(int j = 0; j < s.size(); j++){
				if(arr[s[j] - 97] == i){
					arr[s[j] - 97]++;
				}
			}
		}


		int ans = 0;
		for(int i = 0; i < 26; i++){
			if(arr[i] == n){
				ans ++;
			}
		}

		cout << ans << endl;
	}
	return 0;
}