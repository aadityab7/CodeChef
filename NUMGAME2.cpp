#include<iostream>
#include <bits/stdc++.h>;
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

		if((n - 1) % 4 == 0){
			cout << "ALICE" << endl;
		}
		else{
			cout << "BOB" << endl;
		}
	}
	return 0;
}