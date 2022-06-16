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
		long n;
		cin >> n;
		long k; 
		cin >> k;

		string s;
		cin >> s;

		long curr = 0;
		string ans = "NO";

		for(int i = 0; i < n; i++){
			if(s[i] == '*'){
				curr++;
				if(curr >= k){
					ans = "YES";
					break;
				}
			}
			else{
				curr = 0;
			}
		}

		cout << ans << endl;
	}
	return 0;
}