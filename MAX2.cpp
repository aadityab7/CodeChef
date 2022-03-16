#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;

	int ans = 0;
	for(int i = n - 1; i >= 0; i--){
		if(s[i] == '1'){
			ans = n - 1 - i; 
			break;
		}
	}

	cout << ans << endl;
	return 0;
}