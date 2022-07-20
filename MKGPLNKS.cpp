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
		int n;
		cin >> n;

		string s;
		cin >> s;

		int different_blacks = 0, different_whites = 0;

		if(s[0] == 'W'){
			different_whites++;
		}
		else{
			different_blacks++;
		}

		for(int i = 1; i < n; i++){
			if(s[i] != s[i - 1]){
				if(s[i] == 'W'){
					different_whites++;
				}
				else{
					different_blacks++;
				}
			}
		}

		int ans = different_blacks;

		if(different_blacks > different_whites){
			ans = different_whites;
		}

		cout << ans << "\n";
	}
	return 0;
}