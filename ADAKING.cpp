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

		int num = 1;
		cout << 'O';
		for(int i = 1; i < 8; i++){
			if(num < n){
				cout << '.';
				num++;
			}
			else{
				cout << 'X';
			}
		}
        cout << endl;
        
		for(int i = 1; i < 8; i++){
			for(int j = 0; j < 8; j++){
				if(num < n){
					cout << '.';
					num++;
				}
				else{
					cout << 'X';
				}
			}
			cout << endl;
		}
	}
	return 0;
}