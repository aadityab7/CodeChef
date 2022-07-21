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
		string s;
		cin >> s;

		int n = s.size();


		int small = 0, big = 0, digit = 0, sp = 0;

		string ans = "NO";
		char c;

		if(n >= 10){

			//first and last only count if it is a small char otherwise useless

			if(s[0] >= 'a' && s[0] <= 'z'){
				small = 1;
			}
			else if(s[n - 1] >= 'a' && s[n - 1] <= 'z'){
				small = 1;
			}

			//this is where at least 1 upper case, number and sp char must be
			for(int i = 1; i < n - 1; i++){
				c = s[i];
				if(c >= 'a' && c <= 'z'){
					small = 1;
				}
				else if(c >= 'A' && c <= 'Z'){
					big = 1;
				}
				else if(c >= '0' && c <= '9'){
					digit = 1;
				}
				else{
					sp = 1;
				}
			}
		}

		if(big && small && digit && sp){
			ans = "YES";
		}

		cout << ans << "\n";
	}
	return 0;
}