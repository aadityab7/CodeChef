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
		string s;
		cin >> s;

		long e = 0, o = 0;
		for(long i = 0; i < s.size(); i++){
			long num = s[i] - 48;
			if(num % 2 == 0){
				e++;
			}
			else{
				o++;
			}
		}

		int x = s[s.size() - 1] - 48;
		if(x % 2 == 0){
			if(e < 2){
				cout << "NO" << endl;
			}
			else{
				cout << "YES" << endl;
			}
		}
		else{
			if(o < 2){
				cout << "NO" << endl;
			}
			else{
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}