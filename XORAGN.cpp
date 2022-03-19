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

		//ACCEPTED ANSWER

		// int arr[n];
		// int b[n];
		// for(int i = 0; i < n; i++){
		// 	cin >> arr[i];
		// 	b[i] = arr[i] + arr[i];
		// }

		// int ans = 0;
		// for(int i = 0; i < n; i++){
		// 	ans = ans ^ b[i];
		// }

		int arr[n];
		int ans = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			ans = ans ^ arr[i];
		}

		ans = ans * 2;

		cout << ans << endl;
	}
	return 0;
}