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

		int arr[n];
		int gcd_value = 0;

		for(int i = 0; i < n; i++){
			cin >> arr[i];
			gcd_value = gcd(gcd_value, arr[i]);
		}


		for(int i = 0; i < n; i++){
			
		}


	}
	return 0;
}