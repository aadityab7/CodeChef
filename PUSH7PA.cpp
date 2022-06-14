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

		sort(arr, arr + n);

		int cf = 0;
		int mf = arr[n - 1];

		int i = 1;
		for(i = 1; i < n; i++){
			if(arr[i] != arr[i - 1]){
				if((cf + arr[i - 1]) > mf){
					mf = cf + arr[i - 1];
				}
				cf = 0;
			}
			else{
				cf++;
			}
		}

		if((cf + arr[i - 1]) > mf){
			mf = cf + arr[i - 1];
		}

		cout << mf << endl;
	}
	return 0;
}