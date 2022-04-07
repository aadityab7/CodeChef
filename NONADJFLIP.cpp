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
		int f = -1;

		for(int i = 0; i < n; i++){
			if(s[i] == '1'){
				if(f == -1) f = 0;
				if(i > 0 && s[i - 1] == '1'){
					f = 1;
				}
			}
		}

		int ans = 0;

		if(f == 0){
			ans = 1;
		}
		else if(f == 1){
			ans = 2;
		}

		cout << ans << endl;
	}
	return 0;
}