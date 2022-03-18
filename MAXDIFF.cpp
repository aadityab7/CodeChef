#include<iostream>
#include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;

		int arr[n];
		long total = 0;
		long sum = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			total += arr[i];
		}
		
		sort(arr, arr + n);

		int num = k;
		if(k > (n - k)){
			num = n - k;
		}

		for(int i = 0; i < num; i++){
			sum += arr[i];
		}

		cout << (total - sum) - sum << endl;
	}
	return 0;
}