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
		int a, b, c, p, q, r;
		cin >> a >> b >> c >> p >> q >> r;

		int total = p + q + r;
		int curr = a + b + c;

		if(curr > total / 2){
			cout << "YES" << endl;
		}
		else{
			int h1 = p - a;
			int h2 = q - b;
			int h3 = r - c;

			int mx = h1;
			if(h2 > mx) mx = h2;
			if(h3 > mx) mx = h3;


			if(curr + mx > total / 2){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}
