#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		long ans = 1;

		for(int i = 1; i < s.size(); i++){
			if(s[i - 1] > s[i]){
				ans += (s[i] - 'a') + ('z' - s[i - 1]) + 1;
			}
			else{
				ans += s[i] - s[i - 1];
			}
		}
		
		ans += s.size();

		if(ans <= s.size() * 11){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
