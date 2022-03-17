#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		long ans = 0;

		long i = 0;
		long mx = 0;
		long curr;
		
		while(i < s.size()){
			while(i < s.size() && s[i] == '#'){
				i++;
			}

			curr = 0;

			while(i < s.size() && s[i] == '.'){
				curr++;
				i++;
			}

			if(curr > mx){
				ans++;
				mx = curr;
			}
		}

		cout << ans << endl;
	}
	return 0;
}