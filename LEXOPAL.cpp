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

		string ans = "";
		int n = s.size();

		for(int i = 0; i <= n / 2; i++){
			if(s[i] == '.' || s[n - 1 - i] == '.'){
				if(s[i] == '.' && s[n - i - 1] != '.'){
					s[i] = s[n - 1 - i];
				}
				else if(s[i] != '.' && s[n - 1 - i] == '.'){
					s[n - i - 1] = s[i];
				}
				else{
					s[i] = 'a';
					s[n - 1 - i] = 'a';
				}
			}
			else if(s[i] != s[n - i - 1]){
				s = "-1";
				break;
			}
		}

		cout << s << endl;
	}
	return 0;
}