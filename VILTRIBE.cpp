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

		char c;
		char prev = 'C';
		int curr = 0;

		int A = 0, B = 0;

		for(int i = 0; i < s.size(); i++){
			c = s[i];
			if(c == 'A'){
				A++;
				if(prev == 'A'){
					A += curr; 
				}
				curr = 0;
				prev = 'A';
			}
			else if(c == 'B'){
				B++;
				if(prev == 'B'){
					B += curr;
				}
				curr = 0;
				prev = 'B';
			}
			else{
				curr++;
			}
		}

		cout << A << ' ' << B << endl;
	}
	return 0;
}