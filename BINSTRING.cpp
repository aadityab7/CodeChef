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
		int n;
		cin >> n;
		string s;
		cin >> s;

		int count = 1;

		for(int i = 1; i < n; i++){
			if(s[i] != s[i - 1]) count ++;
		}

		cout << count << endl;
	}
	return 0;
}