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
		
		long arr[3][3];
		long long sum_tree[3] = {};
		long long sum_color[3] = {};

		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				cin >> arr[i][j];
				sum_tree[i] += arr[i][j];
				sum_color[j] += arr[i][j];
			}
		}

		long long max = 0;

		for(int i = 0; i < 3; i++){
			if(sum_tree[i] > max){
				if(sum_tree[i] % 2 == 0){
					max = sum_tree[i] - 1;
				}
				else{
					max = sum_tree[i];
				}
			}

			if(sum_color[i] > max){
				if(sum_color[i] % 2 == 0){
					max = sum_color[i] - 1;
				}
				else{
					max = sum_color[i];
				}
			}
		}

		cout << max << endl;
	}
	return 0;
}