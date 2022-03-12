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

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << 1 << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
