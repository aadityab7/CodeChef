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
		int n;
		cin >> n;

		string s;
		cin >> s;

		int ans = n;

		int close = 0, open = 0;

		for(int i = 0; i < n; i++){
			if(s[i] == ')'){
				close++;
			}
		}

		for(int i = 0; i < n; i++){
			if(s[i] == ')'){
				close--;
			}
			else{
				open++;

				long maxd = min(2 * open, 2 * close);

				ans = min(ans, n - maxd);
			}
		}

		cout << ans << endl;
	}
	return 0;
}