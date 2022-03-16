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
		int n, x, k;
		cin >> n >> x >> k;

		int fill = k / x;

		if(fill > n){
			fill = n;
		}

		cout << fill << endl;
	}
	return 0;
}