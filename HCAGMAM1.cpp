#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y;
		string s;
		cin >> s;

		int streak = 0;
		int mx = 0;

		int ans = 0;
		
		for(int i = 0; i < 30; i++){
			 if(s[i] == '1'){
			 	ans += x;
			 	streak++;
			 	if(streak > mx){
			 		mx = streak;
			 	}
			 }
			 else{
			 	streak = 0;
			 }
		}

		ans += mx * y;

		cout << ans << endl;
	}
	return 0;
}