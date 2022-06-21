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
		int n, m;
		cin >> n >> m;

		string s, test;
		
		string ans = "FINE";


		for(int i = 0; i < n; i++){
			cin >> s;
			cin >> test;

			int ones = 0;
			for(int j = 0; j < m; j++){
				if(test[i] == '1'){
					ones++;
				}
			}

			if(s == "correct"){
				if(ones != m){
					ans = "INVALID"
				}
			}
			else{
				if(ones == m && ans == "FINE"){
					ans = "WEAK";
				}
			}
		}

		cout << ans << endl;

	}
	return 0;
}