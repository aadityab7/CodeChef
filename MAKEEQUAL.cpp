#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
#define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		int mn = INT_MAX;
		int mx = 0;

		int num;
		for(int i = 0; i < n; i++){
			cin >> num;
			if(num > mx){
				mx = num;
			}
			if(num < mn){
				mn = num;
			}
		}

		cout << mx - mn << endl;
	}
	return 0;
}