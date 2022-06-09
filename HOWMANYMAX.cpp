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

		string str;
		cin >> str;

		int ans = 0;

		int flip = 0;

		for(int i = 0; i < n - 1; i ++){
			if(str[i] == '1' && flip == 0){
				flip = 1;
				ans++;
			}
			else if(str[i] == '0' && flip == 1){
			    flip = 0;
			}
		}

		if(flip == 0){
			ans ++;
		}

		cout << ans << endl;
	}
	return 0;
}