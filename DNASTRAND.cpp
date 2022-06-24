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
		int n;
		cin >> n;

		string s;
		cin >> s;

		string ans = "";
/*
		A is complementary to T.
T is complementary to A.
C is complementary to G.
G is complementary to C.
*/

		for(int i = 0; i < n; i++){
			char c = s[i];

			switch(c){
				case 'A':	
					ans += 'T';
					break;
				case 'T':
					ans += 'A';
					break;
				case 'C':
					ans += 'G';
					break;
				case 'G':
					ans += 'C';
					break;
			}
		}

		cout << ans << endl;
	}
	return 0;
}