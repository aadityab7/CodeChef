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

		long arr[n][n];

		long num = 1;
		for(int i = 0; i < n; i++){
			if(f && i % 2 != 0){
				for(int j = n - 1; j >= 0; j--){
					arr[i][j] = num;
					num ++;
				}
			}else{
				for(int j = 0; j < n; j++){
					arr[i][j] = num;
					num++;
				}
			}
		}

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << arr[i][j] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}