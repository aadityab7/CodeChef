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
		int k;
		cin >> k;

		string s;
		cin >> s;

		int curr = 0;
		int ans = 0;

		for(int i = 0 ; i < n; i++){
			if(s[i] == '0'){
				curr++;
			}
			else{
				ans += curr / k;
				curr = 0;
			}
		}

		if(curr > 0){
			ans += curr / k;
		}

		cout << ans << "\n";
	}
	return 0;
}