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

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int max = 1;
		int curr = 1;

		for(int i = 1; i < n; i++){
			if(arr[i] != arr[i - 1]){
				curr = 0;
			}
			
				curr++;

			if(curr > max){
				max = curr;
			}
		}

		cout << n - max << endl;
	}
	return 0;
}