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

		long long num;
		int f = 0;
		for(int i = 0; i < n; i++){
			cin >> num;
			if(num > n){
				f = 1;
			}
			else if((num + 1) % n == 0){
				f = 1;
			}
		}

		if(f){
			cout << "Bob" << endl;
		}
		else{
			cout << "Alice" << endl;
		}
	}
	return 0;
}