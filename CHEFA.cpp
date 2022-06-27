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

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, n + arr);


		long long sum = 0;
		
		for(int i = n - 1; i >= 0; i -= 2){
			sum += arr[i];
		}

		cout << sum << endl;
	}
	return 0;
}