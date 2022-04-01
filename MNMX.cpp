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

		long mn = LONG_MAX;
		long num;
		for(int i = 0; i < n; i++){
			cin >> num;
			if(num < mn){
				mn = num;
			}
		}

		cout << mn * (n - 1) << endl;
	}
	return 0;
}