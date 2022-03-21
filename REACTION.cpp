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
		int r, c;
		cin >> r >> c;

		int arr[r][c];
		int f = 0;

		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cin >> arr[i][j];
				int count = 0;
				if(i > 0) count ++;
				if(j > 0) count ++;
				if(i < r - 1) count ++;
				if(j < c - 1) count ++;
				if(count <= arr[i][j]){
					f = 1;
				}
			}
		}


		if(f){
			cout << "Unstable" << endl;
		}
		else{
			cout << "Stable" << endl;
		}
	}
	return 0;
}