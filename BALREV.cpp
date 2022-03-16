#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
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
		
		int os = 0, zs = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == '1'){
				os++;
			}
			else{
				zs++;
			}
		}

		string ans = "";
		for(int i = 0; i < zs; i++){
			ans += '0';
		}

		for(int i = 0; i < os; i++){
			ans += '1';
		}

		cout << ans << endl;
	}
	return 0;
}