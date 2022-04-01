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

		int f = 0;
		int c = (s[s.size() - 1] - 48) % 2;

		for(int i = s.size() - 2; i >= 0; i--){
			if((s[i] - 48) % 2 == c){
				f = 1;
				break;
			}
		}

		if(f){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}