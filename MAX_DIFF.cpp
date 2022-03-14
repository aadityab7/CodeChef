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
		int n, s;
		cin >> n >> s;

		int a;
		if(n < s) a = n;
		else a = s;

		int b = s - a;

		cout << a - b << endl;;

	}
	return 0;
}
