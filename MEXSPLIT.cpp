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

		int num;
		int zeros = 0, ones = 0;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num == 0){
				ones++;
			}
			else{
				zeros++;
			}
		}

		int max_number_of_mex = zeros;

		if(ones > zeros){
			max_number_of_mex = ones;
		}

		cout << max_number_of_mex << endl;
	}
	return 0;
}