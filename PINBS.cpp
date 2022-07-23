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

		string ans = "No";

		for(int i = 0; i < n; i++){
			//if there is a 1 followed by anything then yes 
			
			if(s[i] == '1' && i < n - 1){
				ans = "Yes";
				break;
			}

		}

		cout << ans << "\n";
	}
	return 0;
}