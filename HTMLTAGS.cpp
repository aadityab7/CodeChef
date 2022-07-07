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

		string ans = "Error";
		char c;

		if(n > 3){
			if(s[0] == '<' && s[1] == '/' && s[n - 1] == '>'){
				ans = "Success";
				
				for(int i = 2; i < n - 1; i++){
					c = s[i];

					if(!((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))){
						ans = "Error";
						break;
					}
				}
			}
		}
		
		cout << ans << "\n";
	}
	return 0;
}