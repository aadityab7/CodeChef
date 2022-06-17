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

		cout << n << ' ';

		for(int i = 1; i < n; i++){
			cout << i << ' ';
		}

		cout << endl;
	}
	return 0;
}