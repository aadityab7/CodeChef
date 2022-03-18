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
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int i = 0;

		while(i < k){
			if(arr[i] < 0){
				arr[i] = -arr[i];
			}
			else{
				break;
			}
			i++;
		}

		i = 0;
		long total = 0;
		while(i < n){
			if(arr[i] > 0){
				total += arr[i];
			}
			i++;
		}

		cout << total << endl;

	}
	return 0;
}