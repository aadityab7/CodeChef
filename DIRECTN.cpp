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
		cin >> s;

		string ans = "NO";

		for(int i = 0; i < n - 1; i++){
			if(s[i] == s[i + 1]){
				ans = "YES";
				break;
			}
		}

		cout << ans << endl;
	}
	return 0;
}