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
		long n, k;
		cin >> n >> k;

		long arr[n];
		long p[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		} 

		for(int i = 0; i < n; i++){
			cin >> p[i];
		}

		long max = 0;
		for(int i = 0; i < n; i++){
			long num = (k / arr[i]) * p[i]; 
			if(num > max) max = num;
		}

		cout << max ;

		cout << endl;
	}
	return 0;
}