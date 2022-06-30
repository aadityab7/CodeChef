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

		long arr[n];
		long long sum = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			sum += arr[i];
		}

		long long common = sum / (n - 1);

		for(int i = 0; i < n; i++){
			cout << common - arr[i] << ' ';
		}

		cout << endl;

	}
	return 0;
}