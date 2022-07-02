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

		string y = "y ", no = "n ";

		if(360 % n == 0){
			cout << y;
		}
		else{
			cout << no;
		}

		if(n <= 360){
			cout << y;
		}
		else{
			cout << no;
		}

		if(n <= 26){
			cout << y;
		}
		else{
			cout << no;
		}

		cout << endl;
	}
	return 0;
}