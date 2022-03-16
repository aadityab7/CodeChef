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

		int arr[n][n];

		int i = 1;
		int j = 0;
		int k = 1;

		while(j < n){
			int l = j;
			int m = 0;
			while(l >= 0){
				arr[m][l] = i;
				i++;
				l--;
				m++;
			}
			j++;
		}

		
		while(k < n){
			int l = k;
			int m = n - 1;
			while(l <= n - 1){
				arr[l][m] = i;
				i++;
				l++;
				m--;
			}
			k++;
		}
		

		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}