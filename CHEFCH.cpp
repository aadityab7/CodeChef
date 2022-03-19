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

		// compare s with string starting with - and then with +:
		int f = 1;
		int a = 0, b = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '-'){
				if(f){
					b++;
				}
				else{
				    a++;
				}
			}
			else{
				if(f){
					a++;
				}
				else{
				    b++;
				}
			}

			if(f) f = 0;
			else f = 1;
		}

		if(a < b){
			cout << a << endl;
		}
		else{
			cout << b << endl;
		}
	}
	return 0;
}