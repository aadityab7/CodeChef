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

		if(n % 2 != 0){
			cout << -1 << endl;
		}
		else{

			string s = "";
			
			for(int i = 0; i < n; i++){
				if(i % 2 == 0){
					s += '1';
				}
				else{
					s += '0';
				}
			}

			cout << s << endl;
		}
	}
	return 0;
}