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

		int f = 0;
		if(n % 2 == 0) f = 1;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(f){
					cout << -1 << ' ';
				}
				else{
					if(i == j){
						cout << -1 << ' ';	
					}
					else{
						cout << 1 << ' ';
					}
				}
			}
			cout << endl;
		}
	}
	return 0;
}