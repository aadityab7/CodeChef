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
		string s;
		cin >> s;

		int ans = 0;
		if(s[0] == '0') ans = 1;

		int i = 0;
		while(i < s.size() - 1){
			while(i < s.size() - 1 && s[i] == s[i + 1]){
				i++;
			}

			if(i < s.size() - 1){
				ans++;
			}

			i++;
		}

		cout << ans << endl;
	}
	return 0;
}