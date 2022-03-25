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

		int count = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == 'P'){
				count ++;
			}
		}

		int ans = 0;
		int i = 0;
		float target = n * 0.75;
		while(i < n && (count < target)){
			if(s[i] == 'A'){
				if(i < 2 || i > n - 3){
				    i++;
				    continue;
				}
				else if((s[i - 2] == 'P' || s[i - 1] == 'P') && (s[i + 1] == 'P' || s[i + 2] == 'P')){
					count ++;
					ans++;
				}
			}
			i++;
		}


		if(count < n * 0.75) ans = -1;
		cout << ans << endl;
	}
	return 0;
}