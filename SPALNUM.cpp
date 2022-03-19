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
		int l, r;
		cin >> l >> r;

		long sum = 0;

		for(int i = l; i <= r; i++){
			string s;
			s = to_string(i);
			int f = 1;
			for(int j = 0; j < s.size()/2; j++){
				if(s[j] != s[s.size() - 1 - j]) f = 0;
			}
			
			if(f) sum += i;
		}

		cout << sum << endl;
	}
	return 0;
}