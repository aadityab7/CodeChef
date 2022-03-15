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
		string s;
		cin >> s;

		string ans = "";

		int i = 0;
		while(i < s.size()){
			int j = i;
			int count = 0;
			while(j < s.size() && s[i] == s[j]){
				count ++;
				j++;
			}

			ans += s[i];
			ans += to_string(count);

			i = j;
		}
        
		if(ans.size() < s.size()){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}