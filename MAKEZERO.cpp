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
		long long total;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		total = arr[0];

		for(int i = 1; i < n; i++){
			total = total | arr[i];
		}

		// sort(arr, arr + n);

		// long max = arr[n - 1];
		// int bit = 1;

		// while(max > 0){
		// 	max /= 2;
		// }

		// int uni = 1;

		// for(int i = 1; i < n; i++){
		// 	if(arr[i] != arr[i - 1]){
		// 		uni++;
		// 	}
		// }

		// int ans = uni;

		// if(bit > uni){
		// 	ans = bit;
		// }

		int ans = 0;

		for(int i = 0; i < 30; i++){
			if(total == 0){
				break;
			}

			if(total % 2 != 0){
				ans++;
			} 

			total = total / 2;
		}

		cout << ans << endl;

	}
	return 0;
}