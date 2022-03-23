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
		string a = "", b = "";
		int one = 0, two = 0;

		for(int i = 0; i < n; i++){
			cin >> s;
			if(s == a){
				one++;
			}
			else if(s == b){
				two++;
			}
			else if(a == ""){
				a = s;
				one++;
			}
			else if(b == ""){
				b = s;
				two++;
			}
		}

		if(one > two){
			cout << a << endl;
		}
		else if(two > one){
			cout << b << endl;
		}
		else{
			cout << "Draw" << endl;
		}
	}
	return 0;
}