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

		char a = s[0];
		char b = s[1];
		string ans = "YES";

		if(a == b) ans = "NO";
		else{
			for(int i = 2; i < s.size(); i++){
				if(i % 2 == 0){
					if(s[i] != a){
						ans = "NO";
						break;
					}
				}
				else{
					if(s[i] != b){
						ans = "NO";
						break;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}