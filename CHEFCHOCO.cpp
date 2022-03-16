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
		int c, x, y;
		cin >> c >> x >> y;

		cout << (c - x) * y << endl;
	}
	return 0;
}